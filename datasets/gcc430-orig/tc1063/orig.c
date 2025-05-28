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



static unsigned char g_2 = 0x28L;
static int g_13 = (-1L);
static char g_22 = 0x25L;
static char g_53 = 0xA1L;
static int *g_69 = (void*)0;
static int **g_68 = &g_69;
static char *g_100 = &g_53;
static char **g_99 = &g_100;
static unsigned char g_108 = 1UL;
static unsigned char g_112 = 0UL;
static unsigned short g_137 = 4UL;
static unsigned short *g_136 = &g_137;
static char g_155 = 0x8DL;
static char g_163 = 0x66L;
static unsigned short g_179 = 0x21B1L;
static unsigned short g_186 = 0xD2A1L;
static unsigned g_189 = 4294967287UL;
static unsigned g_212 = 0xA4458DFDL;
static unsigned short **g_214 = &g_136;
static short g_254 = 2L;
static unsigned *g_285 = &g_189;
static unsigned **g_284 = &g_285;
static int g_301 = 0x42819684L;
static unsigned short g_317 = 65535UL;
static int *g_365 = &g_13;
static unsigned char *g_380 = &g_2;
static unsigned char **g_379 = &g_380;
static char *g_385 = &g_163;
static unsigned short **g_402 = &g_136;
static unsigned ***g_449 = &g_284;
static unsigned g_476 = 0x33B3EC21L;
static unsigned short g_480 = 0UL;
static unsigned g_481 = 9UL;
static unsigned g_483 = 0x887E579BL;
static char *g_525 = &g_53;
static short *g_638 = &g_254;
static short **g_637 = &g_638;
static short ***g_636 = &g_637;
static unsigned g_686 = 0UL;
static char ***g_708 = &g_99;
static char ****g_707 = &g_708;
static char *****g_706 = &g_707;
static char *****g_711 = (void*)0;
static int g_763 = (-1L);
static unsigned g_772 = 0xE61D02FFL;
static int *g_839 = &g_301;



static unsigned func_1(void);
static unsigned char func_3(int p_4, unsigned char p_5, unsigned char p_6);
static unsigned char func_8(char p_9);
static char func_10(int p_11);
static int * func_16(unsigned short p_17);
static unsigned func_23(char p_24, int * p_25, int * p_26);
static char func_27(unsigned char p_28);
static char func_29(char * p_30, char * p_31, unsigned short p_32, char * p_33, unsigned char p_34);
static char * func_36(unsigned p_37);
static char func_46(short p_47, unsigned p_48, int ** p_49, char * p_50, int p_51);
static unsigned func_1(void)
{
    unsigned l_7 = 4294967295UL;
    int *l_12 = &g_13;
    unsigned l_915 = 0x133F9C70L;
    unsigned l_926 = 0x9FC216FBL;
    l_915 = (g_2 <= func_3(l_7, func_8(func_10((((*l_12) = g_2) > 9UL))), (*g_380)));
    (*g_69) = (safe_add_func_int8_t_s_s((+(*l_12)), (((*l_12) > (*****g_706)) < ((*g_285) = (+((((safe_mod_func_uint16_t_u_u((*l_12), (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(255UL, (*l_12))), 6)), 12)))) >= ((l_926 = 247UL) >= (*****g_706))) == (**g_284)) >= 0xD9EBL))))));
    return g_476;
}







static unsigned char func_3(int p_4, unsigned char p_5, unsigned char p_6)
{
    char ***l_833 = &g_99;
    int **l_834 = (void*)0;
    int **l_835 = (void*)0;
    int **l_836 = &g_365;
    int *l_838 = &g_301;
    int **l_837 = &l_838;
    int l_865 = (-1L);
    unsigned char *l_908 = &g_112;
    unsigned char *l_909 = &g_112;
    unsigned char **l_910 = &l_909;
    g_839 = (((*****g_706) = func_23((p_5 <= (*g_69)), ((*l_837) = (((***g_636) != (l_833 == (*g_707))) , ((*l_836) = (*g_68)))), (*g_68))) , ((*l_836) = func_16(p_6)));
    g_69 = (*l_837);
    for (g_480 = 0; (g_480 == 17); g_480++)
    {
        int l_844 = 8L;
        short l_876 = 0x6DBAL;
        unsigned char l_889 = 251UL;
        unsigned short l_891 = 0x1264L;
        char *l_900 = &g_22;
    }
    (**l_836) = (((*g_100) = (((*g_285) = ((*l_838) ^ 0xE7DCL)) || 0x9A14D089L)) & 0xC7L);
    return (*g_380);
}







static unsigned char func_8(char p_9)
{
    int l_832 = 1L;
    (*g_68) = func_16((**g_402));
    return l_832;
}







static char func_10(int p_11)
{
    int l_18 = (-1L);
    char *l_35 = (void*)0;
    int *l_826 = &g_763;
    for (p_11 = (-19); (p_11 <= (-22)); p_11 = safe_sub_func_uint16_t_u_u(p_11, 4))
    {
        char *l_21 = &g_22;
        int *l_303 = &l_18;
        int **l_825 = &g_69;
    }
    (*g_365) = (((*l_826) = (&l_35 == &l_35)) , (-1L));
    for (g_317 = (-10); (g_317 == 19); g_317 = safe_add_func_int16_t_s_s(g_317, 4))
    {
        (*g_365) = p_11;
        for (g_212 = 0; (g_212 == 26); g_212 = safe_add_func_int32_t_s_s(g_212, 2))
        {
            char l_831 = 0x21L;
        }
    }
    return l_18;
}







static int * func_16(unsigned short p_17)
{
    int *l_794 = (void*)0;
    int **l_795 = &l_794;
    int *l_817 = &g_13;
    (*l_795) = l_794;
    (*g_365) = 2L;
    g_365 = (void*)0;
    for (g_186 = 15; (g_186 >= 53); g_186 = safe_add_func_int16_t_s_s(g_186, 9))
    {
        unsigned l_800 = 4294967288UL;
        int l_804 = 1L;
        char *l_813 = (void*)0;
    }
    return &g_13;
}







static unsigned func_23(char p_24, int * p_25, int * p_26)
{
    char *l_308 = &g_163;
    int l_309 = 1L;
    int *l_310 = (void*)0;
    int *l_311 = &g_301;
    unsigned short *l_316 = &g_179;
    int l_320 = 7L;
    unsigned ***l_437 = (void*)0;
    char l_482 = 0x2DL;
    unsigned l_484 = 0x118F6991L;
    short **l_544 = (void*)0;
    short ***l_543 = &l_544;
    unsigned short l_551 = 0xAED7L;
    unsigned char l_593 = 0x3CL;
    char ***l_596 = (void*)0;
    char *l_603 = &g_53;
    int l_610 = 0xEDA3CF38L;
    int *l_623 = &l_610;
    char l_647 = (-2L);
    short l_648 = 7L;
    char *****l_709 = &g_707;
    (*l_311) = ((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(g_155, func_29(l_308, (*g_99), l_309, (*g_99), g_163))), ((*g_136) < p_24))) , l_309);
    if ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(((*l_311) <= (l_309 = ((void*)0 == l_316))), g_317)), 5)))
    {
        unsigned char *l_319 = &g_108;
        unsigned char **l_318 = &l_319;
        (*g_68) = ((((((*l_318) = &g_108) != &g_112) , (1L <= ((*l_311) = (**g_214)))) < l_320) , p_25);
        for (p_24 = 11; (p_24 != (-17)); p_24--)
        {
            (*g_68) = (void*)0;
        }
    }
    else
    {
        unsigned char *l_323 = (void*)0;
        unsigned char *l_324 = &g_112;
        unsigned l_346 = 0x97799F0FL;
        int l_347 = 0x05D0AC4EL;
        short *l_373 = (void*)0;
        short **l_372 = &l_373;
        short l_394 = 0x6EE2L;
        unsigned short l_418 = 65535UL;
        unsigned short ***l_420 = (void*)0;
        unsigned char **l_424 = (void*)0;
        char l_429 = 0x4CL;
        int l_430 = 0x3D857F71L;
        unsigned ***l_470 = &g_284;
        int **l_548 = &l_310;
        char ****l_589 = (void*)0;
        unsigned l_600 = 0x1DC2B021L;
        unsigned char l_602 = 0x1AL;
        char *l_621 = &l_482;
        if ((p_24 > ((*l_324) = p_24)))
        {
            int *l_327 = &g_301;
            unsigned **l_343 = &g_285;
            char *l_393 = &g_163;
            int *l_416 = &l_347;
            unsigned short *l_466 = &l_418;
            unsigned ****l_471 = &l_437;
            short *l_477 = &g_254;
            short *l_478 = &l_394;
            int *l_479 = &l_430;
            unsigned char ***l_537 = &l_424;
            int l_547 = 0x894D08F5L;
            char *l_552 = &g_155;
            if ((*p_25))
            {
                unsigned short l_330 = 0x9EFBL;
                unsigned **l_344 = (void*)0;
                short *l_345 = &g_254;
                char **l_398 = &l_393;
                int *l_417 = (void*)0;
                for (p_24 = 0; (p_24 != (-12)); --p_24)
                {
                    p_26 = l_327;
                }
                if ((((void*)0 == (*g_284)) < ((safe_mod_func_uint8_t_u_u(((*l_324) = ((l_330 != (l_347 = (safe_sub_func_int16_t_s_s(((*l_345) = (safe_sub_func_int16_t_s_s(g_53, (((*l_311) , (((safe_lshift_func_uint8_t_u_u((g_179 == (safe_lshift_func_uint8_t_u_s((p_24 & (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0x28F6E9EAL, 0x20069F1AL)), 2))), (*l_327)))), 6)) , l_343) != l_344)) > (*g_136))))), l_346)))) <= (*l_327))), 4UL)) <= (*g_136))))
                {
                    unsigned short l_355 = 0x1C36L;
                    short *l_356 = &g_254;
                    (*l_311) = (*p_26);
                    (*g_68) = p_25;
                    if (func_27(g_2))
                    {
                        (*g_68) = p_25;
                        (*l_311) = (((**g_214) = 65535UL) && (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((**g_68), ((safe_unary_minus_func_uint16_t_u(((*l_316) = l_346))) > ((((safe_sub_func_int32_t_s_s(((l_355 && (l_330 & (&g_254 == l_356))) ^ (l_347 = (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((p_24 > p_24), 7)) , 0L), l_347)) >= p_24), p_24)) != (*g_69)), g_189)))), (*g_69))) > 1L) , p_24) , 0xFAB1A848L)))), p_24)));
                        (*l_311) = (*g_69);
                        return (*g_285);
                    }
                    else
                    {
                        int **l_366 = (void*)0;
                        int **l_367 = &l_327;
                        (*l_367) = ((*g_68) = (p_25 = g_365));
                    }
                }
                else
                {
                    char l_383 = 0xCDL;
                    int **l_386 = (void*)0;
                    unsigned short *l_396 = (void*)0;
                    unsigned l_397 = 0xBBA51722L;
                    unsigned short ***l_400 = &g_214;
                    unsigned short ***l_401 = (void*)0;
                    if (((-1L) && ((l_330 || (safe_lshift_func_int8_t_s_s((*g_100), 2))) >= 0x5013L)))
                    {
                        short ***l_374 = &l_372;
                        (*l_374) = l_372;
                        return p_24;
                    }
                    else
                    {
                        unsigned *l_377 = &g_212;
                        unsigned char **l_378 = &l_323;
                        int l_384 = 0x816AAFB0L;
                        char *l_395 = &g_53;
                        (*g_365) = ((((**g_284) <= p_24) , 0xD502L) , 0xEDE9DFE0L);
                        (*l_327) = (((*g_380) , (safe_lshift_func_uint16_t_u_s(((p_24 , (**g_99)) <= (**g_379)), g_212))) , 1L);
                    }
                    if (((0L >= l_394) | (((*g_214) = l_396) == l_396)))
                    {
                        (*g_365) = ((void*)0 != l_396);
                        (*l_327) = 7L;
                        (*l_327) = (l_330 | l_397);
                    }
                    else
                    {
                        char ***l_399 = &l_398;
                        (*l_399) = l_398;
                        (*g_68) = &g_301;
                        (*g_68) = (*g_68);
                    }
                    (*g_365) = (p_24 | (**g_379));
                    (*g_365) = (((*l_400) = &g_136) != (g_402 = &g_136));
                }
                for (g_53 = 0; (g_53 <= (-19)); g_53--)
                {
                    char *l_414 = &g_53;
                    (*g_68) = (void*)0;
                    (*g_68) = p_26;
                    if (((safe_rshift_func_uint8_t_u_s((g_112 , func_29(l_323, &p_24, p_24, &p_24, (**g_379))), (safe_sub_func_uint32_t_u_u(p_24, 0x22686362L)))) | 65535UL))
                    {
                        char *l_413 = &g_163;
                        int ***l_415 = &g_68;
                        (*l_311) = (p_24 , ((*g_365) = ((((safe_add_func_uint16_t_u_u((l_347 | ((l_394 == l_346) <= (safe_mod_func_int8_t_s_s(((*g_285) != (*g_365)), 0xEAL)))), 0x7ED5L)) , p_24) <= l_330) >= (*p_25))));
                        (**l_415) = l_416;
                        if ((*l_416))
                            break;
                    }
                    else
                    {
                        (*g_68) = l_417;
                        (*g_68) = (*g_68);
                        (*g_68) = l_417;
                    }
                    (*l_311) = l_418;
                }
            }
            else
            {
                char *l_419 = &g_53;
                unsigned short ***l_421 = &g_214;
                unsigned char **l_422 = &l_324;
                unsigned ***l_441 = (void*)0;
                int l_443 = (-9L);
                int **l_467 = &l_310;
                if ((*g_365))
                {
                    if ((l_422 != &g_380))
                    {
                        int *l_423 = &g_13;
                        char **l_433 = (void*)0;
                        char **l_434 = &g_385;
                        (*g_68) = l_423;
                        l_424 = (void*)0;
                        l_430 = ((*l_416) = func_27(((p_26 == ((**g_402) , (((0x9177L ^ ((*g_285) > ((*l_327) == (((*l_316) = (safe_sub_func_uint8_t_u_u(((**l_422) = ((*g_69) == p_24)), ((safe_sub_func_int16_t_s_s((((l_429 > (p_24 <= l_418)) & p_24) & 0xB9L), 0xFA03L)) , (**g_379))))) >= p_24)))) < 0xEEBD26CDL) , (void*)0))) || l_418)));
                        (*g_68) = ((((safe_lshift_func_uint8_t_u_u(func_29((*g_99), &p_24, (p_24 , (**g_214)), ((*l_434) = &p_24), ((*g_99) != (void*)0)), p_24)) < 0UL) != (**g_402)) , &l_309);
                    }
                    else
                    {
                        (*g_365) = (func_27(l_394) , (1UL | (1UL < 0x3F9073FCL)));
                        (*g_68) = p_25;
                        (*g_68) = p_26;
                        (*g_365) = (-9L);
                    }
                    for (g_163 = 0; (g_163 < (-3)); g_163 = safe_sub_func_uint32_t_u_u(g_163, 5))
                    {
                        if ((**g_68))
                            break;
                    }
                    (*g_68) = (*g_68);
                }
                else
                {
                    int l_440 = 0x557367F9L;
                    unsigned *l_442 = &g_212;
                    unsigned ****l_448 = (void*)0;
                    int l_451 = 0L;
                    int *l_456 = &l_451;
                    int *l_457 = &l_451;
                    if ((l_437 != (g_449 = ((safe_add_func_uint32_t_u_u((((*l_442) = ((l_440 < (*g_380)) , (((*p_25) && (&g_284 != (l_441 = &g_284))) & l_430))) , (((l_443 ^ ((safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((l_440 < (**g_99)), (**g_284))) , 9L), (**g_402))) , g_189)) , g_186) , (**g_284))), (-4L))) , l_437))))
                    {
                        int l_450 = (-7L);
                        (*g_365) = l_450;
                        return (*g_285);
                    }
                    else
                    {
                        (*g_68) = (void*)0;
                        (*g_68) = ((l_451 = (**g_379)) , (func_46(p_24, (safe_lshift_func_int16_t_s_u(1L, (((((**g_284) && (&g_68 == &g_68)) , ((((safe_add_func_uint8_t_u_u(((**l_422) = (((((*g_385) && ((l_430 = (-7L)) >= p_24)) && 4UL) , l_429) , p_24)), l_443)) , p_24) , 0xE4F1L) , (*l_311))) , p_24) ^ (*g_380)))), &g_69, (*g_99), p_24) , l_456));
                        l_457 = p_26;
                        (*g_68) = (*g_68);
                    }
                    (*l_416) = (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((p_24 | p_24), ((**l_422) = 4UL))), (((g_179 , (*g_214)) != (((((*p_25) , p_24) ^ ((*g_285) = (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((((*p_25) >= (**g_284)) | (**g_402)), (-9L))), (*g_100))))) & l_429) , l_466)) , (**g_402))));
                }
                (*l_467) = ((*g_68) = &g_13);
                (**g_68) = (*l_310);
                (*l_467) = (*g_68);
            }
            if ((((*l_324) = (safe_sub_func_uint32_t_u_u(g_483, 0x205CD6EFL))) || (**g_379)))
            {
                char l_493 = (-1L);
                int *l_498 = &l_309;
                unsigned short **l_515 = (void*)0;
                char **l_532 = &l_308;
                int l_538 = 0xBB5C44C4L;
                int *l_539 = &g_13;
                (*l_327) = ((3UL ^ (((l_484 ^ (safe_add_func_int32_t_s_s(0L, (((safe_mod_func_int8_t_s_s(((((*l_479) = (safe_add_func_int8_t_s_s(0L, ((1L || ((*l_308) = ((safe_lshift_func_uint8_t_u_u(((*l_324) = l_493), (p_24 ^ (**g_284)))) , 0xAFL))) && 0x9490L)))) , p_24) || 0x8A94D586L), 252UL)) && 0xF88DL) >= 1UL)))) ^ (*g_100)) || l_493)) , (*p_25));
                for (g_476 = 11; (g_476 != 53); g_476++)
                {
                    int l_503 = 0xDF9C922EL;
                    char *l_507 = &l_493;
                    unsigned short l_513 = 0x6630L;
                    unsigned short l_514 = 0x21ABL;
                    int *l_518 = &l_309;
                    unsigned char ***l_521 = &l_424;
                    (*g_68) = l_498;
                    if (((((l_429 != 0x9213L) <= ((-1L) && ((safe_rshift_func_int16_t_s_s(l_394, l_503)) & 0UL))) != (*g_365)) , (*g_365)))
                    {
                        unsigned short **l_506 = (void*)0;
                        int *l_510 = &l_320;
                        int **l_516 = (void*)0;
                        int **l_517 = &l_327;
                        (*g_68) = &l_347;
                        (*l_311) = (l_506 != ((func_29(l_507, ((((*l_510) = (safe_rshift_func_uint8_t_u_s(0xBDL, 5))) , g_2) , &l_493), ((*p_26) , p_24), ((((*l_466) = (l_513 >= (p_24 < l_514))) <= 0x0588L) , l_393), l_503) > p_24) , l_515));
                        l_518 = ((*l_517) = (g_365 = ((*g_68) = p_26)));
                        (*g_68) = (*g_68);
                    }
                    else
                    {
                        (*g_68) = p_26;
                        return l_347;
                    }
                    for (g_483 = 0; (g_483 < 22); g_483++)
                    {
                        return (*g_285);
                    }
                    (*l_498) = (((((((*l_521) = (void*)0) == (void*)0) & (safe_unary_minus_func_int8_t_s((safe_mod_func_int32_t_s_s(((**g_284) < (p_24 <= (4294967291UL >= ((*l_416) , ((**g_99) , func_29(g_525, (*g_99), p_24, l_507, p_24)))))), 6L))))) , 0x2483F0C6L) != p_24) & p_24);
                }
                (*l_479) = ((*g_525) , (*l_416));
                (*g_68) = (((safe_sub_func_uint32_t_u_u((l_430 = (((safe_mod_func_int8_t_s_s(((p_24 ^ (safe_rshift_func_uint8_t_u_u((((g_112 , l_532) == &g_525) > ((((((g_481 & (*l_479)) && (**g_99)) , 0UL) == g_186) == 255UL) & (*g_525))), 5))) || l_538), 0xA9L)) & 0x22L) , (*l_498))), (*g_285))) && p_24) , l_539);
            }
            else
            {
                (*l_311) = (*p_26);
                (*g_365) = (*g_365);
            }
            if (l_346)
            {
                return p_24;
            }
            else
            {
                short ***l_542 = &l_372;
                char *l_549 = &l_482;
                int *l_550 = &g_13;
                int l_557 = 1L;
                unsigned l_580 = 0UL;
                char *l_601 = &l_429;
                (*g_68) = &g_301;
                (*l_548) = ((((*l_549) = ((((**g_99) = (safe_add_func_uint32_t_u_u(((l_542 != l_543) <= g_155), (safe_mod_func_int8_t_s_s((((*l_393) = l_547) , (((*l_477) = (((p_24 ^ p_24) , p_24) && 4294967295UL)) >= func_46(p_24, g_301, l_548, &l_429, p_24))), (-6L)))))) > (-2L)) ^ (-1L))) & 0x66L) , l_550);
                if ((p_24 <= ((l_551 , (p_24 > ((**l_548) >= p_24))) < ((((**l_548) <= (func_29((((*g_379) == (*g_379)) , l_549), l_552, p_24, (*g_99), p_24) <= p_24)) | p_24) > (*g_285)))))
                {
                    unsigned **l_560 = &g_285;
                    unsigned *l_581 = &g_212;
                    int l_582 = (-10L);
                    char *l_597 = &g_53;
                    for (l_347 = 0; (l_347 != 21); ++l_347)
                    {
                        int l_565 = 0x15A90446L;
                        (**l_548) = (((*l_311) = (p_24 > 0x4579L)) && (*g_285));
                        (*l_310) = ((p_24 == (safe_add_func_int32_t_s_s((*l_416), ((void*)0 == l_560)))) ^ (safe_lshift_func_uint8_t_u_s(0x0CL, 0)));
                        (*l_311) = ((safe_lshift_func_uint16_t_u_u(((*l_316) = (4294967295UL ^ (*p_25))), 6)) , (*p_25));
                        (*l_310) = l_565;
                    }
                    if (((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(0xBDL, (*l_479))), 1)), (safe_add_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((*l_550), l_580)) , ((*l_310) = p_24)), 251UL)) , l_308) != (void*)0) == l_582), p_24)))), 1)) , (**l_548)))
                    {
                        char ****l_588 = (void*)0;
                        char *****l_590 = &l_589;
                        (*l_416) = (((safe_add_func_uint8_t_u_u(0UL, (safe_unary_minus_func_int8_t_s(((*g_525) = (((safe_sub_func_int8_t_s_s((-4L), (!((l_588 != ((*l_590) = l_589)) , (((*l_550) = (*p_26)) , (((((safe_lshift_func_int16_t_s_s((g_301 <= p_24), 7)) || 1L) || 0x8F82C1DCL) | g_301) ^ 65535UL)))))) | (*g_100)) ^ 7UL)))))) < g_317) && (**l_548));
                    }
                    else
                    {
                        return p_24;
                    }
                    (*l_416) = ((**l_548) && ((l_479 == ((((*l_324) = ((*l_550) = (0xD4C9L > g_189))) && ((safe_mul_func_uint16_t_u_u(l_582, (p_24 < l_600))) ^ l_602)) , p_26)) | 65534UL));
                }
                else
                {
                    p_25 = &l_557;
                    (*l_548) = (*l_548);
                    (**l_548) = l_610;
                }
                (*l_310) = (*p_25);
            }
            for (l_430 = 5; (l_430 <= (-27)); l_430--)
            {
                unsigned short l_613 = 0xE673L;
                if (((**l_548) = l_613))
                {
                    unsigned l_622 = 0xB26BC06EL;
                    if ((l_613 , (**l_548)))
                    {
                        int l_620 = 0xBC244D76L;
                        (*l_310) = ((**g_379) && (&g_69 != (((*g_385) | (((0xEBC6DF56L > (((((l_613 >= 0x6EL) != 0xD3611F65L) | (**g_379)) , (**l_548)) > 0x65A5L)) ^ p_24) & 0xD4CF3E33L)) , (void*)0)));
                        if ((*g_365))
                            break;
                        (*g_68) = p_26;
                    }
                    else
                    {
                        (*l_548) = (*l_548);
                    }
                    (*g_68) = (void*)0;
                }
                else
                {
                    (*l_548) = l_623;
                }
            }
        }
        else
        {
            (*g_68) = &l_610;
            for (g_186 = 0; (g_186 >= 24); g_186 = safe_add_func_int16_t_s_s(g_186, 9))
            {
                unsigned *l_630 = &l_346;
                for (g_163 = (-3); (g_163 >= 17); g_163 = safe_add_func_int16_t_s_s(g_163, 3))
                {
                    int l_631 = (-1L);
                    short ***l_639 = &g_637;
                    int l_640 = 1L;
                    (*l_623) = (((*l_311) >= (((**g_214) = (safe_sub_func_int8_t_s_s(func_46((l_631 = ((((**l_470) = (**g_449)) != l_630) , 0xC56AL)), g_179, &g_365, (*g_99), (((*l_324) = (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((((g_636 != l_639) , l_640) | (*g_136)), l_640)), 6))) >= 0xAFL)), p_24))) ^ p_24)) <= 65530UL);
                }
                return p_24;
            }
        }
        (*g_68) = &g_301;
        for (l_602 = 18; (l_602 >= 4); l_602 = safe_sub_func_int16_t_s_s(l_602, 5))
        {
            unsigned ****l_645 = &l_437;
            unsigned *****l_646 = &l_645;
            int l_649 = 0L;
            l_649 = (safe_add_func_int32_t_s_s((l_647 = ((((*l_646) = l_645) != &g_449) && ((*l_316) = p_24))), (l_648 = (*g_365))));
            for (l_648 = 11; (l_648 == (-24)); l_648 = safe_sub_func_uint8_t_u_u(l_648, 7))
            {
                int **l_652 = &l_623;
                (*l_652) = ((*l_548) = ((*g_68) = (*g_68)));
                (**g_68) = l_649;
                if ((*g_69))
                    continue;
                (**g_68) = 0x56C7111CL;
            }
        }
        for (g_137 = (-9); (g_137 >= 52); g_137 = safe_add_func_uint16_t_u_u(g_137, 3))
        {
            int ***l_655 = &g_68;
            (*l_655) = (void*)0;
        }
    }
    g_13 = ((*l_311) = (*p_26));
    for (l_593 = 0; (l_593 < 5); l_593 = safe_add_func_int8_t_s_s(l_593, 2))
    {
        int l_669 = 0xC8544304L;
        unsigned char *l_670 = &g_112;
        int *l_675 = &l_610;
        unsigned ***l_676 = &g_284;
        short ***l_737 = &g_637;
        char ******l_762 = &g_706;
        unsigned short **l_790 = &l_316;
    }
    return p_24;
}







static char func_27(unsigned char p_28)
{
    char *l_283 = &g_163;
    unsigned ***l_286 = &g_284;
    unsigned *l_287 = &g_212;
    int l_288 = 0x697CB478L;
    short l_289 = 3L;
    unsigned short l_290 = 65535UL;
    int *l_291 = (void*)0;
    char **l_298 = &l_283;
    int *l_299 = &g_13;
    int *l_300 = (void*)0;
    int **l_302 = &l_299;
    g_13 = (((((p_28 <= (-1L)) , ((*g_99) == l_283)) >= (((**g_214) = (p_28 < (((*l_286) = g_284) == (void*)0))) <= (((*l_287) = g_163) , g_186))) <= p_28) == l_290);
    g_301 = ((*l_299) = (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((*g_136), g_2)) , ((((void*)0 == (*l_286)) <= (p_28 > ((p_28 > ((+(l_290 && (safe_lshift_func_int8_t_s_s((**g_99), 4)))) == p_28)) > 0xAEEFBAE6L))) , g_13)), 15)));
    (*l_302) = ((*g_68) = (void*)0);
    (*g_68) = (void*)0;
    return (*g_100);
}







static char func_29(char * p_30, char * p_31, unsigned short p_32, char * p_33, unsigned char p_34)
{
    unsigned l_262 = 0xC2A5FD6FL;
    unsigned *l_263 = (void*)0;
    unsigned *l_264 = &l_262;
    int l_265 = 0x0D22A38FL;
    short **l_272 = (void*)0;
    short *l_274 = &g_254;
    short **l_273 = &l_274;
    int *l_282 = &l_265;
    if ((safe_add_func_int32_t_s_s(((4294967295UL || ((*l_264) = (safe_rshift_func_uint8_t_u_s(l_262, (*p_33))))) <= ((l_265 || 0x603C690FL) >= (safe_add_func_uint16_t_u_u(l_265, g_186)))), (safe_lshift_func_int16_t_s_s((g_254 = (safe_add_func_uint32_t_u_u((((*l_273) = &g_254) == &g_254), 0xF1035ACFL))), g_2)))))
    {
        (*g_68) = (*g_68);
    }
    else
    {
        unsigned **l_277 = (void*)0;
        int l_280 = 0x49FE0A11L;
        for (g_254 = 0; (g_254 < (-22)); g_254 = safe_sub_func_uint16_t_u_u(g_254, 1))
        {
            unsigned ***l_278 = (void*)0;
            unsigned **l_279 = &l_264;
            int *l_281 = &g_13;
            l_279 = l_277;
            l_280 = 0x694BD967L;
            l_281 = &l_280;
            if (g_163)
            {
                (*g_68) = l_282;
            }
            else
            {
                (*l_281) = (*l_282);
                (*l_282) = (*l_281);
            }
        }
    }
    return (*g_100);
}







static char * func_36(unsigned p_37)
{
    int *l_39 = &g_13;
    int **l_38 = &l_39;
    char *l_52 = &g_53;
    int *l_140 = (void*)0;
    int *l_141 = &g_13;
    unsigned short **l_142 = &g_136;
    unsigned l_156 = 0x48341D41L;
    unsigned short l_226 = 65530UL;
    unsigned l_233 = 6UL;
    int l_239 = (-4L);
    int l_244 = 5L;
    (*l_38) = (void*)0;
    (*l_141) = ((4294967295UL && (safe_sub_func_int8_t_s_s(g_2, ((safe_mod_func_uint8_t_u_u((p_37 && (safe_mod_func_int8_t_s_s((func_46(g_2, g_13, &l_39, l_52, g_2) , p_37), p_37))), 6UL)) < p_37)))) <= g_137);
    if ((((void*)0 == l_142) <= (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_13, 1)), (*g_136)))))
    {
        int *l_151 = (void*)0;
        char *l_165 = (void*)0;
        unsigned short *l_178 = &g_179;
        unsigned char *l_184 = &g_112;
        unsigned short *l_185 = &g_186;
        unsigned *l_187 = &l_156;
        unsigned *l_188 = &g_189;
        int l_190 = (-1L);
        if ((p_37 >= ((*l_141) = 0xE94C9196L)))
        {
            (*g_68) = (*g_68);
        }
        else
        {
            char *l_154 = &g_155;
            int l_159 = 0x7D718789L;
            char ***l_160 = &g_99;
            char ****l_161 = &l_160;
            char *l_162 = &g_163;
            int l_164 = (-1L);
            (*l_141) = ((safe_rshift_func_uint16_t_u_s(func_46((safe_sub_func_int8_t_s_s((((l_159 = func_46((((*g_68) = (*l_38)) != (l_140 = l_151)), (((*l_161) = (((safe_add_func_int32_t_s_s((((*l_154) = ((*g_100) = p_37)) != (l_156 & p_37)), ((g_2 || 0xEBL) , (safe_mod_func_int32_t_s_s((l_159 || ((p_37 , l_159) , 0x74CE2EAAL)), (-1L)))))) || p_37) , l_160)) == (void*)0), &l_141, l_162, p_37)) >= 0x331434A8L) && l_159), l_164)), g_112, g_68, l_165, p_37), 4)) ^ p_37);
            (*l_38) = &l_159;
            (*g_68) = l_151;
        }
        (*g_68) = l_151;
        (*l_38) = l_151;
        if (((*l_141) = ((safe_sub_func_uint32_t_u_u(((*l_188) = ((*l_187) = (0x9E70L < func_46((((safe_lshift_func_int16_t_s_u(((((!0x0842841CL) != (g_112 , (safe_add_func_uint16_t_u_u(p_37, (+((((*l_185) = ((g_2 , (safe_sub_func_uint8_t_u_u(g_108, (safe_sub_func_uint8_t_u_u(((*l_184) = (safe_lshift_func_uint8_t_u_u((((*l_178) = ((*g_136) = (*g_136))) & (safe_rshift_func_int8_t_s_u(((*l_142) == (((safe_mod_func_uint8_t_u_u(g_155, g_112)) < (*g_100)) , (void*)0)), 1))), g_163))), p_37))))) , p_37)) , p_37) && g_13)))))) && 0UL) , (-10L)), 13)) < p_37) && 1L), p_37, &l_141, l_184, g_155)))), l_190)) & 0xF400L)))
        {
            (*g_68) = (void*)0;
        }
        else
        {
            unsigned short ***l_191 = (void*)0;
            int l_211 = 1L;
            int **l_221 = &l_141;
            if ((&g_136 == (l_142 = l_142)))
            {
                int **l_192 = &l_151;
                unsigned l_213 = 0xA1ED449BL;
                (*l_141) = (&g_69 == l_192);
                (*l_141) = (((*l_52) = (**g_99)) > ((((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((!((*l_184) = ((safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((((*g_136) & p_37) , g_108) , ((g_212 = (safe_sub_func_uint8_t_u_u(g_108, (l_190 > ((((!g_13) || l_211) , 0x0CFFEC9AL) & p_37))))) , &g_137)) == &g_179), p_37)), 0x54E8L)), 4294967295UL)) || l_213), p_37)) <= (-1L)))), g_155)), 0UL)), p_37)), 14)) && 0xDAFFL) == p_37) > l_211));
                g_214 = l_142;
            }
            else
            {
                (*l_38) = (*g_68);
            }
            (*l_141) = (safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((-1L), (((+func_46((1L >= ((safe_rshift_func_int8_t_s_u(1L, (((((*l_185) = func_46(p_37, func_46(func_46((p_37 , l_211), p_37, &l_151, l_165, g_212), p_37, l_221, (*g_99), p_37), &l_151, l_184, g_155)) <= 0x64CCL) & g_189) || g_179))) || 0L)), p_37, g_68, l_184, g_189)) ^ g_108) , p_37))), (*g_136)));
        }
    }
    else
    {
        char ***l_229 = &g_99;
        int l_230 = (-1L);
        char l_234 = 1L;
        int **l_235 = &l_39;
        unsigned short l_243 = 0x9DCBL;
        if ((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(func_46((l_226 <= (safe_mod_func_uint16_t_u_u((l_229 == (g_53 , l_229)), (l_230 , ((safe_rshift_func_int8_t_s_u(l_230, 7)) & (((+(l_230 & ((((p_37 >= (-1L)) == 0L) != 0x63AEL) > (*l_141)))) , p_37) , l_233)))))), l_234, l_235, l_52, g_2), g_155)), p_37)))
        {
            unsigned l_236 = 0x4B66F68BL;
            char *l_242 = &g_163;
            if (((l_236 = (**g_214)) <= g_155))
            {
                unsigned *l_237 = &g_212;
                char *l_238 = &g_163;
                char *l_245 = &l_234;
                (*l_141) = func_46(g_137, ((*l_237) = g_179), &l_39, l_238, p_37);
                (*l_141) = ((func_46((g_155 || (0xD2L | ((p_37 ^ ((l_239 > func_46((safe_rshift_func_uint16_t_u_u(func_46(p_37, p_37, l_235, l_242, p_37), l_236)), l_243, l_235, l_238, g_212)) ^ p_37)) < l_244))), p_37, g_68, l_52, l_236) != g_212) == g_2);
                return l_242;
            }
            else
            {
                (*g_68) = (void*)0;
                return (*g_99);
            }
        }
        else
        {
            short *l_253 = &g_254;
            char *l_256 = (void*)0;
            unsigned *l_257 = &l_156;
            (*l_235) = (((safe_unary_minus_func_uint16_t_u(((*l_141) = (((((*l_257) = (((**g_214) , ((*l_253) = (p_37 <= (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(248UL, func_46(g_2, (((*l_52) = ((((safe_lshift_func_int16_t_s_u(p_37, 6)) == (((*l_253) = 0x200DL) , (((**l_229) = (**l_229)) != l_52))) >= (safe_unary_minus_func_uint16_t_u((p_37 <= p_37)))) || (**g_99))) != 1UL), &g_69, l_256, g_108))), (**g_214)))))) & (**g_214))) || 4294967295UL) , 0x52B0L) || p_37)))) | 1L) , (void*)0);
        }
    }
    return l_52;
}







static char func_46(short p_47, unsigned p_48, int ** p_49, char * p_50, int p_51)
{
    short l_54 = 0L;
    int *l_84 = &g_13;
    unsigned short l_115 = 0xEE50L;
    if (l_54)
    {
        unsigned l_59 = 0UL;
        int l_85 = (-6L);
        unsigned short *l_126 = (void*)0;
        unsigned short *l_127 = &l_115;
        int l_128 = 6L;
        for (g_53 = 0; (g_53 != (-11)); g_53--)
        {
            int l_73 = 5L;
        }
        (*l_84) = (((((safe_mod_func_int8_t_s_s((*g_100), (+(safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(l_85, p_47)), ((((*l_127) = g_112) >= g_108) , p_48)))))) > (*l_84)) == p_51) & (l_128 = ((*l_84) < 3L))) , 0L);
        (*l_84) = l_59;
        for (g_53 = 9; (g_53 <= (-5)); g_53 = safe_sub_func_int8_t_s_s(g_53, 1))
        {
            int ***l_133 = (void*)0;
            unsigned short **l_138 = (void*)0;
            unsigned short **l_139 = &l_126;
            (*g_68) = (*p_49);
            (*l_84) = (l_85 || p_47);
            for (p_47 = 0; (p_47 == (-15)); p_47 = safe_sub_func_uint8_t_u_u(p_47, 8))
            {
                (*l_84) = 0L;
                (*g_68) = (*p_49);
                (*l_84) = ((void*)0 != l_133);
            }
            (*l_84) = (safe_lshift_func_uint16_t_u_u((((*l_139) = g_136) == &g_137), 4));
        }
    }
    else
    {
        (*g_68) = (*g_68);
        return (*l_84);
    }
    return (*g_100);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_481, "g_481", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_686, "g_686", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_772, "g_772", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
