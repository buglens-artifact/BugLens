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



static unsigned g_11 = 0UL;
static unsigned short g_20 = 0x08FBL;
static unsigned char g_47 = 0UL;
static unsigned g_60 = 0xFA0B2B04L;
static unsigned short g_73 = 65527UL;
static const unsigned short g_77 = 65526UL;
static unsigned short *g_85 = &g_73;
static unsigned short **g_84 = &g_85;
static int g_91 = 1L;
static unsigned g_97 = 0x587A760FL;
static int g_99 = (-1L);
static unsigned g_108 = 0x77E16152L;
static unsigned * const g_110 = &g_108;
static unsigned * const *g_109 = &g_110;
static unsigned char g_122 = 249UL;
static unsigned char g_124 = 0x81L;
static char g_149 = 0x2FL;
static const unsigned char *g_193 = (void*)0;
static const unsigned char **g_192 = &g_193;
static unsigned short ***g_201 = &g_84;
static unsigned short ****g_200 = &g_201;
static short g_209 = 0L;
static int g_211 = 0x5E54AC5FL;
static int g_251 = (-1L);
static char *g_268 = &g_149;
static char **g_267 = &g_268;
static unsigned g_305 = 0x9ECE6E98L;
static const unsigned short g_350 = 0x641DL;
static int *g_393 = &g_211;
static int **g_392 = &g_393;
static short g_399 = (-1L);
static const unsigned char ***g_420 = &g_192;
static const unsigned char ****g_419 = &g_420;
static unsigned char ***g_423 = (void*)0;
static unsigned char ****g_422 = &g_423;
static unsigned short g_463 = 0xD318L;
static int *g_507 = &g_91;
static const unsigned g_537 = 5UL;
static unsigned short g_569 = 65532UL;
static unsigned *g_650 = &g_97;
static unsigned ** const g_649 = &g_650;
static unsigned ** const *g_648 = &g_649;
static char g_696 = 1L;
static char g_703 = 1L;
static short *g_852 = &g_209;
static short **g_851 = &g_852;
static short ***g_850 = &g_851;
static unsigned g_1016 = 4UL;
static int *g_1020 = &g_91;
static unsigned char g_1029 = 255UL;



static int func_1(void);
static int func_5(int p_6, short p_7, const short p_8, unsigned char p_9);
static unsigned func_14(unsigned p_15, const unsigned char p_16);
static unsigned func_21(unsigned short p_22, unsigned char p_23, unsigned short * p_24);
static unsigned short * func_25(unsigned short * const p_26, char p_27, short p_28, unsigned * p_29, short p_30);
static char func_38(unsigned short p_39, const unsigned p_40, unsigned * p_41, char p_42);
static int * const func_45(unsigned p_46);
static unsigned char func_50(unsigned char p_51, short p_52, short p_53);
static unsigned short func_66(short p_67, const unsigned p_68, int * p_69, unsigned p_70, char p_71);
static int * func_81(unsigned short ** p_82, char p_83);
static int func_1(void)
{
    const unsigned l_4 = 4294967295UL;
    unsigned *l_10 = &g_11;
    unsigned short *l_19 = &g_20;
    unsigned char l_31 = 0x61L;
    const int l_947 = 0xED2125FDL;
    int *l_1030 = (void*)0;
    int *l_1031 = (void*)0;
    int *l_1032 = (void*)0;
    int *l_1033 = &g_91;
    unsigned l_1045 = 0x6F3E1431L;
    int l_1048 = (-6L);
    (*l_1033) = (((((((safe_lshift_func_int16_t_s_u(l_4, (func_5((!((((*l_10) = l_4) >= l_4) && (safe_mod_func_uint32_t_u_u((l_4 != g_11), func_14((safe_rshift_func_uint16_t_u_u(((*l_19) = g_11), (func_21(l_4, l_4, func_25(l_19, g_11, g_11, &g_11, l_31)) | l_4))), l_947))))), l_31, l_947, l_4) < g_1016))) , l_31) , 65535UL) >= (-1L)) || 0x11C9L) != l_4) & l_4);
    for (g_47 = 0; (g_47 < 12); g_47 = safe_add_func_int32_t_s_s(g_47, 7))
    {
        unsigned short l_1040 = 1UL;
        short *l_1046 = &g_399;
        unsigned char *****l_1047 = &g_422;
        for (g_91 = 18; (g_91 != (-22)); g_91 = safe_sub_func_uint32_t_u_u(g_91, 4))
        {
            unsigned char l_1038 = 0x04L;
            int *l_1039 = &g_99;
            (*l_1039) = ((l_1038 < l_1038) , l_1038);
            if (l_1040)
                break;
            (*l_1039) = (*l_1039);
        }
        (*l_1033) = (((!func_50(l_1040, (*g_852), ((*g_85) , ((safe_lshift_func_int8_t_s_u((((*g_268) = (**g_267)) && l_1040), l_1040)) , ((*l_1046) = (safe_sub_func_int32_t_s_s(l_1045, 0x3215DC33L))))))) , (void*)0) == l_1047);
        if (l_1040)
            continue;
    }
    return l_1048;
}







static int func_5(int p_6, short p_7, const short p_8, unsigned char p_9)
{
    return g_1029;
}







static unsigned func_14(unsigned p_15, const unsigned char p_16)
{
    unsigned l_948 = 1UL;
    unsigned *l_953 = &g_60;
    short l_954 = 0xE3B1L;
    char l_955 = 5L;
    unsigned short *l_956 = (void*)0;
    unsigned short *** const l_963 = &g_84;
    int l_982 = (-9L);
    int **l_995 = &g_507;
    unsigned l_1003 = 0x4F889F93L;
    int l_1005 = (-1L);
    int *l_1023 = (void*)0;
    if ((l_948 ^ (-3L)))
    {
        unsigned char l_966 = 0x15L;
        int l_967 = 1L;
        if (l_967)
        {
            l_967 = p_15;
        }
        else
        {
            int l_975 = 0xB7FFD233L;
            for (g_305 = (-7); (g_305 > 39); g_305++)
            {
                int **l_972 = &g_393;
                unsigned short *l_983 = &g_20;
                (*g_507) = (((*l_983) = ((safe_sub_func_int8_t_s_s(((((l_972 == &g_507) & (safe_rshift_func_uint8_t_u_u(l_966, 6))) ^ l_975) != ((*l_953) = ((***g_648) = (**g_649)))), ((*g_268) = 0x97L))) & (p_15 <= (l_967 = ((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((0x9C94L & ((*g_85) = (safe_lshift_func_int16_t_s_u(((func_50(((l_982 != p_16) , 0x2EL), (**g_851), (*g_852)) | 0L) > (-8L)), 4)))), 2UL)), 0x7FL)) < (***g_850)))))) , (*g_507));
            }
        }
    }
    else
    {
        int l_986 = 0xF14490B7L;
        int ***l_987 = &g_392;
        int ***l_988 = &g_392;
        int ***l_989 = &g_392;
        int ***l_990 = &g_392;
        int ***l_991 = &g_392;
        int ***l_992 = &g_392;
        int ***l_993 = &g_392;
        int ***l_994 = &g_392;
        int l_996 = (-1L);
        char l_997 = 7L;
        unsigned char *l_998 = (void*)0;
        unsigned char *l_999 = &g_124;
        short l_1000 = 0x60C4L;
        char l_1017 = (-2L);
        (*l_995) = (((((void*)0 == &g_419) < ((void*)0 == &p_15)) | (l_996 != l_997)) , (void*)0);
        (*l_995) = (*l_995);
        if (func_50(((*l_999) = (1UL <= (**g_267))), p_16, ((*g_852) = ((0xD4B6B872L < l_1000) , ((((((safe_lshift_func_int16_t_s_u(func_50(l_1003, p_15, (((safe_unary_minus_func_uint32_t_u(p_16)) , ((*g_110) = 0xA765FBCFL)) || 0xC33C03EAL)), p_15)) < 0x1A1CL) < 0L) || l_1005) , p_16) > 65535UL)))))
        {
            int *l_1006 = &l_982;
            g_393 = ((*l_995) = l_1006);
            for (g_211 = 0; (g_211 < 28); g_211 = safe_add_func_uint8_t_u_u(g_211, 4))
            {
                short l_1013 = (-3L);
                char *l_1018 = &g_703;
                int *l_1019 = (void*)0;
                if (((***g_850) == (safe_sub_func_int32_t_s_s(7L, (((*l_1018) = ((~(p_16 < (safe_rshift_func_uint8_t_u_s((((void*)0 == &g_648) & l_1013), 7)))) , ((*g_268) = l_1013))) , p_15)))))
                {
                    return l_1013;
                }
                else
                {
                    l_1006 = (void*)0;
                    g_1020 = l_1019;
                }
            }
        }
        else
        {
            int l_1021 = (-4L);
            int ****l_1022 = &l_992;
            (*g_1020) = (((func_50(l_1021, (***g_850), (*g_852)) , ((*l_1022) = l_989)) != (void*)0) ^ ((*g_268) = p_15));
        }
    }
    (*l_995) = func_81(&l_956, p_16);
    for (g_124 = 24; (g_124 >= 15); g_124--)
    {
        unsigned short l_1028 = 4UL;
        if ((*g_507))
            break;
        for (g_91 = 0; (g_91 > 27); g_91 = safe_add_func_int16_t_s_s(g_91, 8))
        {
            return l_1028;
        }
    }
    return (**l_995);
}







static unsigned func_21(unsigned short p_22, unsigned char p_23, unsigned short * p_24)
{
    unsigned char *l_548 = &g_124;
    unsigned char **l_547 = &l_548;
    unsigned char ***l_546 = &l_547;
    int l_551 = 0xED081951L;
    const short l_585 = 8L;
    unsigned short **l_596 = &g_85;
    int * const l_628 = &g_99;
    int *l_632 = &g_99;
    unsigned l_639 = 0x363E0BC4L;
    unsigned char l_728 = 1UL;
    int *l_730 = &l_551;
    int l_767 = 1L;
    const int l_791 = 0xA718688BL;
    unsigned l_822 = 0xAE6AA566L;
    unsigned l_875 = 9UL;
    int l_898 = (-2L);
lbl_704:
    for (g_122 = 0; (g_122 != 55); ++g_122)
    {
        char l_550 = (-1L);
        int * const l_575 = &g_99;
        unsigned short *l_621 = &g_463;
        unsigned char *l_626 = &g_47;
        char *l_627 = &l_550;
        int *l_630 = &g_211;
        unsigned l_635 = 0UL;
        unsigned ***l_647 = (void*)0;
        unsigned short l_674 = 0UL;
        short *l_686 = &g_399;
        if ((*g_507))
        {
            int *l_553 = (void*)0;
            unsigned l_557 = 0xA7DCC65BL;
            int **l_576 = (void*)0;
            int *l_589 = &l_551;
            if (((*g_507) = p_22))
            {
                int l_549 = 0x865ED9D6L;
                int *l_552 = &l_549;
                int **l_554 = (void*)0;
                int **l_555 = &g_507;
                (*l_555) = l_553;
                (*l_555) = func_81(&p_24, (**g_267));
            }
            else
            {
                unsigned * const **l_556 = &g_109;
                char *l_566 = &l_550;
                unsigned short *l_567 = &g_463;
                unsigned short *l_568 = &g_569;
                unsigned *l_570 = &g_305;
                (*l_556) = &g_110;
                if ((((*g_393) >= (((l_557 && p_23) >= (**g_267)) < l_551)) ^ (((safe_rshift_func_int16_t_s_s(0x2998L, 6)) , (-8L)) & ((*l_570) = ((***l_556) = func_50(((-1L) >= ((*l_568) = ((*l_567) = ((*g_85) = ((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((*l_566) = (safe_add_func_int16_t_s_s(g_149, g_209))) == 7L), 0xF3L)), 7UL)) < 4UL))))), p_22, p_23))))))
                {
                    l_553 = (void*)0;
                }
                else
                {
                    (*g_507) = 7L;
                }
            }
            if (p_22)
            {
                if (p_22)
                    break;
            }
            else
            {
                const int *l_573 = &l_551;
                const int **l_574 = &l_573;
                for (g_60 = 0; (g_60 >= 25); g_60++)
                {
                    l_553 = &l_551;
                }
                (*l_574) = l_573;
                (*l_574) = (void*)0;
                if (p_22)
                    break;
            }
            g_507 = ((((*g_110) = (*g_110)) && (((l_550 || 0xDEL) ^ ((void*)0 != &g_399)) , ((*g_393) , (0x2DDBL | (0x3D04L >= 0xEF1EL))))) , l_575);
            for (g_99 = 0; (g_99 == 13); ++g_99)
            {
                unsigned char l_583 = 0x00L;
                int *l_588 = &l_551;
                l_589 = l_588;
            }
        }
        else
        {
            const unsigned l_598 = 0x09D1BB1CL;
            for (l_551 = 0; (l_551 != (-29)); --l_551)
            {
                unsigned l_592 = 0xD2C47A38L;
                int **l_593 = &g_507;
                short *l_599 = &g_209;
                int *l_608 = (void*)0;
                int *l_609 = &g_91;
                (*l_593) = func_81(&g_85, l_592);
                (*g_507) = (safe_add_func_int8_t_s_s((p_23 || 0x922F7AC4L), p_22));
                l_609 = ((func_50(func_50(((((*l_593) = func_81((p_23 , l_596), func_50(p_22, ((*l_599) = (safe_unary_minus_func_uint8_t_u(l_598))), func_50((safe_lshift_func_uint8_t_u_u(4UL, p_23)), p_22, (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((~((*l_548) = 0xF0L)), 0x28L)), 3)), 5)))))) != &l_551) == p_23), p_22, g_305), g_537, l_551) ^ 0UL) , l_608);
            }
            for (l_550 = 2; (l_550 < (-13)); l_550 = safe_sub_func_uint32_t_u_u(l_550, 5))
            {
                for (g_99 = (-20); (g_99 > (-21)); g_99 = safe_sub_func_int8_t_s_s(g_99, 3))
                {
                    int **l_614 = &g_507;
                    (*l_614) = l_575;
                    (*l_614) = &l_551;
                    if ((*g_393))
                        break;
                }
                if (l_551)
                    break;
            }
            (*g_507) = p_22;
        }
        if ((safe_rshift_func_uint16_t_u_u(l_551, ((*g_85) = ((p_22 && (p_23 , (g_97 < ((safe_mod_func_uint16_t_u_u((0x9EE4L >= (*g_85)), (safe_lshift_func_int8_t_s_u(((*g_268) = (*l_575)), (((*l_621) = 0UL) != ((safe_mod_func_int8_t_s_s(((((*l_627) = ((safe_lshift_func_uint16_t_u_u(func_50(((((l_626 != &p_23) & (*l_575)) <= 0xB1L) , p_23), p_22, l_551), (*l_575))) , 4L)) , p_23) < p_22), l_585)) >= p_23)))))) , p_23)))) != l_585)))))
        {
            int **l_629 = &g_507;
            (*l_629) = l_628;
        }
        else
        {
            int **l_631 = (void*)0;
            unsigned char l_638 = 0UL;
            unsigned char l_668 = 253UL;
            (*g_507) = (*g_393);
            g_507 = (l_632 = l_630);
            if (p_23)
            {
                int l_646 = 8L;
                unsigned short l_666 = 0xFC12L;
                (*l_628) = (safe_sub_func_int8_t_s_s((**g_267), ((*l_628) > func_50(l_635, g_108, g_149))));
                for (g_305 = (-19); (g_305 >= 18); ++g_305)
                {
                    int l_640 = 0x834C7ABAL;
                    int **l_641 = &g_393;
                    (*l_641) = ((func_50((*l_628), (l_638 <= p_22), l_639) , (g_122 , ((void*)0 == (**g_419)))) , ((((*l_575) , 1UL) , l_640) , (void*)0));
                    for (g_149 = 0; (g_149 != (-24)); --g_149)
                    {
                        unsigned ** const **l_651 = &g_648;
                        (*l_641) = ((((safe_add_func_int16_t_s_s(p_23, (l_638 == (l_646 | (l_647 == ((*l_651) = g_648)))))) || p_22) & (*g_650)) , &l_551);
                    }
                    if (((safe_lshift_func_int8_t_s_s((0xE6D8L == 1L), 5)) | (0x36B2D660L | (*g_650))))
                    {
                        unsigned l_667 = 1UL;
                        (*g_507) = ((((safe_rshift_func_int16_t_s_s((p_22 < ((safe_add_func_int16_t_s_s(g_209, ((((safe_sub_func_uint8_t_u_u((((((**l_596) = (safe_rshift_func_uint16_t_u_u((((*g_650) = (0xAFL & func_50(p_23, (0x775DL && (0xA4L || (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(p_23, ((~(((((*l_548) = p_22) >= 0L) >= p_23) == g_11)) , l_640))), 6)))), (*l_632)))) , l_646), l_666))) && (*g_85)) || 0xCEE22269L) < 1UL), 0xE9L)) , p_22) , l_667) , l_668))) == p_23)), 13)) , p_23) ^ p_22) <= 0x3B392323L);
                    }
                    else
                    {
                        unsigned char **l_669 = &l_626;
                        (*g_507) = (l_669 != &l_626);
                    }
                }
                return (*l_632);
            }
            else
            {
                int l_672 = 0xD9CD517AL;
                for (g_47 = (-22); (g_47 != 52); g_47 = safe_add_func_uint32_t_u_u(g_47, 9))
                {
                    unsigned short **l_675 = &g_85;
                    if ((l_672 || 0xB8L))
                    {
                        unsigned char l_673 = 0xE9L;
                        l_674 = (l_673 && (p_22 , ((*l_627) = (*g_268))));
                        return (*l_630);
                    }
                    else
                    {
                        int **l_676 = &l_632;
                        (*l_676) = (l_630 = func_81(l_675, ((*g_393) , (**g_267))));
                        (**l_676) = (((safe_unary_minus_func_int16_t_s(((safe_sub_func_uint32_t_u_u(p_22, 0xDEE8E443L)) ^ (p_22 || (*l_630))))) && (*l_575)) <= ((**g_649) = (((((safe_lshift_func_int8_t_s_u(p_22, 7)) >= (*g_393)) < (((*l_621) = (*g_85)) == (p_22 >= p_22))) >= 4294967292UL) , (*l_630))));
                        return (**l_676);
                    }
                }
            }
        }
        (*l_630) = (((safe_lshift_func_int8_t_s_s((((*g_268) > p_23) && ((*l_630) <= p_22)), func_50((*l_630), func_50((*l_628), ((*l_686) = (*l_630)), p_23), g_350))) <= p_22) < 0x3FL);
    }
    if (p_23)
    {
        const int l_689 = 0xA0397DAEL;
        short *l_694 = &g_399;
        char *l_695 = &g_696;
        int *l_700 = &g_91;
        unsigned short **l_720 = (void*)0;
        unsigned l_750 = 2UL;
        (*l_632) = (((*g_268) && (((*l_695) = (((*l_694) = ((l_689 & (safe_mod_func_uint16_t_u_u(((*l_628) , ((l_689 , l_689) || (safe_add_func_uint32_t_u_u((((p_22 < (l_689 , (*g_268))) , p_22) && (*g_507)), 0UL)))), (*g_85)))) ^ (**g_267))) <= 0x13A1L)) <= (*g_268))) , (*l_632));
        if ((((safe_add_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((*l_628))), 0xF94971EFL)) , p_23) == func_50((*l_628), (((*l_700) = p_22) , (func_50((((-1L) ^ ((((((void*)0 != l_548) ^ (((safe_lshift_func_uint16_t_u_s(0x356DL, g_122)) , g_703) || 0xD32FL)) , (*l_628)) , (*g_393)) == (*l_628))) != p_23), g_209, (*l_700)) | (*l_628))), g_122)))
        {
            const unsigned l_718 = 4294967290UL;
            unsigned l_719 = 0x5F045AE8L;
            int *l_731 = &g_211;
            int l_749 = 0xDB9F9E69L;
            if (g_97)
                goto lbl_704;
            for (g_108 = 0; (g_108 != 35); ++g_108)
            {
                int l_709 = 0x541A91DAL;
                const unsigned char ****l_717 = &g_420;
                if ((safe_rshift_func_int16_t_s_s((l_709 == 0L), 0)))
                {
                    char *l_710 = &g_703;
                    const unsigned char ** const **l_715 = (void*)0;
                    const unsigned char ** const ***l_716 = &l_715;
                    int l_734 = (-6L);
                    if (((*g_268) == 0x0BL))
                    {
                        unsigned char ****l_725 = &g_423;
                        int l_729 = 0x5FF0C6CFL;
                        l_730 = &l_709;
                        (*l_700) = l_709;
                        l_729 = 0x7333ACACL;
                        (*l_632) = 0L;
                    }
                    else
                    {
                        int *l_732 = &g_99;
                        int **l_733 = &g_393;
                        l_700 = l_731;
                        (*l_733) = l_732;
                        (*g_507) = (p_22 < ((*l_700) , (*l_732)));
                        (*l_733) = ((g_60 , 5UL) , &g_91);
                    }
                }
                else
                {
                    (*l_700) = (0L || ((**g_649) > l_709));
                }
                for (g_703 = 0; (g_703 > (-9)); g_703--)
                {
                    return p_22;
                }
                for (g_122 = 0; (g_122 != 3); g_122 = safe_add_func_uint16_t_u_u(g_122, 1))
                {
                    for (p_23 = 0; (p_23 <= 27); p_23 = safe_add_func_int16_t_s_s(p_23, 1))
                    {
                        return l_709;
                    }
                    (*l_731) = (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(p_22, (*g_393))), (l_731 == &l_639)));
                }
                return (*l_731);
            }
            return l_749;
        }
        else
        {
            int *l_753 = &g_99;
            const char *l_774 = &g_149;
            l_730 = &g_99;
            if (((((***l_546) = (*l_753)) & p_23) > 0xC7L))
            {
                int *l_760 = &g_99;
                for (g_73 = 22; (g_73 >= 41); ++g_73)
                {
                    (*l_700) = p_22;
                    l_760 = func_81(&g_85, (*g_268));
                }
                if ((((((*l_753) = ((*l_700) != func_50((*l_753), p_23, (*l_730)))) != 9UL) ^ (((safe_lshift_func_uint16_t_u_u((!(((*l_700) <= 1UL) ^ ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(p_22, g_305)), 0L)) | (*g_85)))), 13)) & g_97) >= 0L)) | p_23))
                {
                    l_767 = ((*l_753) && g_211);
                }
                else
                {
                    unsigned l_772 = 0x30258362L;
                    const char **l_775 = &l_774;
                    for (g_47 = 0; (g_47 < 32); g_47 = safe_add_func_int8_t_s_s(g_47, 7))
                    {
                        int l_773 = 0xCB2F30BEL;
                        (*l_700) = ((safe_mod_func_uint32_t_u_u((func_50(((***l_546) = l_772), l_773, g_108) > (*g_268)), ((*l_753) = (**g_649)))) > (***g_648));
                    }
                    (*l_730) = (((*l_775) = l_774) != l_695);
                }
            }
            else
            {
                int *l_776 = &g_211;
                int **l_777 = &l_730;
                int *l_780 = &g_251;
                (*l_777) = l_776;
                g_392 = &l_700;
                (**l_777) = ((safe_rshift_func_uint16_t_u_s((((*l_780) = (*l_753)) , p_23), ((p_23 && func_50(((*l_700) = (((**g_267) = (-1L)) & p_22)), (!(safe_mod_func_int16_t_s_s(0x36BBL, (g_399 = 0xA7DCL)))), (**l_777))) , (*l_776)))) > p_23);
            }
            (*l_628) = func_50((*l_700), (safe_lshift_func_int16_t_s_u(p_22, ((safe_mod_func_int8_t_s_s(((p_23 != (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(((***g_648) ^ (p_23 & l_791)), ((safe_rshift_func_uint8_t_u_u((*l_700), (+p_23))) || ((((*g_85) | 65535UL) < (**g_267)) != p_22)))) , p_22), (*g_507)))) ^ 0x74692F19L), p_22)) > (*l_753)))), (*l_628));
            return (*l_700);
        }
    }
    else
    {
        int *l_794 = &g_211;
        int **l_795 = &l_794;
        char l_810 = 0xD1L;
        const short l_889 = 0x4626L;
        unsigned l_904 = 6UL;
        short l_922 = 0x1C4AL;
        short ****l_924 = (void*)0;
        unsigned l_940 = 0x6D547CE9L;
        l_632 = ((*l_795) = l_794);
        for (g_209 = 0; (g_209 > 9); g_209 = safe_add_func_int16_t_s_s(g_209, 1))
        {
            unsigned l_802 = 7UL;
            unsigned char ****l_833 = &g_423;
            short *l_846 = &g_209;
            short **l_845 = &l_846;
            short ***l_844 = &l_845;
            int l_858 = (-7L);
            unsigned char l_885 = 0UL;
            int **l_886 = (void*)0;
            unsigned * const * const *l_916 = &g_109;
            unsigned short l_945 = 1UL;
        }
        (*l_795) = (*l_795);
        (*l_795) = &l_551;
    }
    return p_22;
}







static unsigned short * func_25(unsigned short * const p_26, char p_27, short p_28, unsigned * p_29, short p_30)
{
    int l_43 = (-1L);
    unsigned *l_44 = &g_11;
    unsigned char *l_301 = (void*)0;
    unsigned char *l_302 = (void*)0;
    unsigned char *l_303 = &g_47;
    int *l_304 = &g_99;
    short *l_312 = (void*)0;
    unsigned **l_316 = &l_44;
    unsigned ***l_315 = &l_316;
    int l_318 = 0x0F8876A3L;
    unsigned l_319 = 0x1D2F55BAL;
    char l_320 = 0x56L;
    unsigned short ***l_321 = (void*)0;
    unsigned char ***l_324 = (void*)0;
    int l_339 = 0xC9FC60A1L;
    unsigned l_468 = 3UL;
    const short * const *l_487 = (void*)0;
    int ***l_516 = &g_392;
    unsigned l_522 = 0xB4BCC05AL;
    int l_539 = 0xD7605479L;
    (*l_304) = (safe_mod_func_uint32_t_u_u(((*g_110) = (safe_sub_func_uint16_t_u_u(0xC134L, (safe_sub_func_int16_t_s_s((func_38(l_43, g_11, l_44, (g_11 && g_11)) , (((((*l_303) = (p_27 > (*p_29))) ^ l_43) ^ p_30) || (*p_29))), 1UL))))), 0x697B6F9FL));
    if (p_30)
    {
        short **l_313 = (void*)0;
        short **l_314 = &l_312;
        int l_317 = 0x2C016A64L;
        unsigned short *l_332 = &g_73;
        const int l_360 = 0x4FDA778AL;
        int *l_367 = &g_211;
        char l_379 = 0x9EL;
        char **l_407 = &g_268;
        unsigned short l_418 = 0x4752L;
        int *l_424 = &l_43;
        if ((((*g_200) = (((*l_304) = (((g_47 , ((-1L) && (safe_mod_func_uint8_t_u_u(l_317, p_27)))) & l_320) , p_28)) , l_321)) == l_321))
        {
            unsigned short *l_331 = &g_73;
            int **l_333 = &l_304;
            for (p_27 = 0; (p_27 != (-22)); p_27--)
            {
                unsigned char ****l_325 = &l_324;
                unsigned char ***l_327 = (void*)0;
                unsigned char ****l_326 = &l_327;
                int **l_328 = &l_304;
                (*l_304) = (((*l_326) = ((*l_325) = l_324)) != &g_192);
                (*l_328) = &g_91;
                for (l_43 = 6; (l_43 <= (-24)); l_43--)
                {
                    return l_331;
                }
                return l_332;
            }
            (*l_333) = &l_43;
            return l_332;
        }
        else
        {
            const unsigned short l_338 = 0x2A84L;
            unsigned *l_342 = &g_108;
            const unsigned short *l_348 = (void*)0;
            const unsigned short **l_347 = &l_348;
            const unsigned short *l_349 = &g_350;
            const unsigned short *l_352 = &g_77;
            const unsigned short **l_351 = &l_352;
            unsigned short *l_353 = &g_73;
            int *l_361 = &l_43;
            unsigned l_374 = 3UL;
            int **l_388 = &l_367;
            const int l_400 = 1L;
            (*l_304) = (func_50(func_50((safe_rshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_u(l_338, 7)) >= (-1L)) , l_339), ((0x540EL < 0x7BBAL) != l_338))), p_28, p_28), p_27, p_28) > (-1L));
            if (((*l_361) = (safe_lshift_func_int16_t_s_u(((((((((safe_rshift_func_uint16_t_u_u((((*l_304) = (p_28 | (((*l_351) = (l_349 = ((*l_347) = &g_73))) == (l_332 = l_353)))) , p_28), p_28)) & (*g_85)) != 0UL) & (*g_110)) , p_26) == (void*)0) < p_28) <= l_338), p_27))))
            {
                unsigned char l_375 = 255UL;
                const unsigned l_383 = 1UL;
                for (g_108 = 0; (g_108 == 7); g_108 = safe_add_func_uint32_t_u_u(g_108, 1))
                {
                    unsigned char ** const l_378 = &l_301;
                    unsigned char ** const *l_377 = &l_378;
                    unsigned char ** const **l_376 = &l_377;
                    int l_380 = 1L;
                    short *l_382 = &g_209;
                    for (p_27 = 0; (p_27 == 25); p_27 = safe_add_func_uint8_t_u_u(p_27, 1))
                    {
                        int **l_366 = &l_304;
                        (*l_361) = g_251;
                        if ((*l_361))
                            break;
                        l_367 = ((*l_366) = &g_99);
                    }
                    if (p_27)
                    {
                        return l_353;
                    }
                    else
                    {
                        unsigned char ****l_371 = &l_324;
                        const int l_381 = 0x8BFFBD8FL;
                        g_91 = (((*l_304) && (*l_361)) == 255UL);
                    }
                    (*l_361) = 1L;
                }
            }
            else
            {
                int ***l_389 = &l_388;
                int **l_391 = &l_304;
                int ***l_390 = &l_391;
                char l_398 = 0x32L;
                char **l_406 = &g_268;
lbl_426:
                if ((safe_mod_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((((((*l_389) = l_388) == (g_392 = ((*l_390) = &l_304))) || (**l_391)) || (((*l_303) = ((void*)0 != &l_320)) < ((*l_304) = ((safe_lshift_func_int8_t_s_u(((**l_391) && (+(2L || ((((safe_lshift_func_int16_t_s_s((func_50((*l_304), l_398, p_30) > g_399), 2)) >= p_27) | p_28) , l_400)))), (**l_391))) != 0x0DL)))), (*l_361))) < 0xFDE35EEEL), p_27)))
                {
                    return l_353;
                }
                else
                {
                    unsigned char l_417 = 255UL;
                    unsigned char ****l_421 = &l_324;
lbl_403:
                    (**l_389) = (*g_392);
                    if (g_251)
                        goto lbl_426;
                    for (l_318 = 0; (l_318 != 10); l_318 = safe_add_func_uint32_t_u_u(l_318, 8))
                    {
                        if (g_122)
                            goto lbl_403;
                        (***l_390) = p_28;
                    }
                    if ((((((**l_391) = ((((*l_332) = ((void*)0 == &p_26)) & ((**l_391) != ((g_251 = p_28) , (safe_sub_func_uint32_t_u_u((*g_110), ((*l_361) = ((*g_393) = (**l_388)))))))) != (+((l_406 = (void*)0) == l_407)))) & 0x58C1L) > p_30) && (*l_367)))
                    {
                        unsigned short l_408 = 0x8ED4L;
                        (**g_392) = (((((*g_110) = (((l_408 | (func_50(((*l_303) = ((func_50((safe_unary_minus_func_int8_t_s((p_30 | (**l_391)))), g_97, l_417) < (*l_304)) || l_417)), g_99, p_30) , 0x6CL)) < 65535UL) > (*l_304))) >= (*p_29)) , l_418) == l_417);
                        (**l_388) = (**g_392);
                        (*l_361) = (((*l_353) = (*l_304)) & (+(g_419 == (g_422 = l_421))));
                        (*g_392) = p_29;
                    }
                    else
                    {
                        int *l_425 = &g_99;
                        (*g_392) = &l_43;
                        l_424 = p_29;
                        (**l_389) = (void*)0;
                        l_425 = p_29;
                    }
                }
                (*g_393) = (*g_393);
                (*g_393) = p_30;
            }
            (*l_361) = ((((((**l_407) = (-1L)) > p_28) | ((safe_rshift_func_uint8_t_u_u((0x57L != p_27), 6)) == p_28)) >= ((safe_lshift_func_int8_t_s_s(p_27, 2)) , 0UL)) > (1UL == (p_27 , (*g_393))));
            (*l_388) = (*l_388);
        }
        (*g_393) = 0xD08A1AE8L;
    }
    else
    {
        const unsigned l_435 = 3UL;
        unsigned short *l_462 = &g_463;
        unsigned *l_469 = &g_60;
        unsigned short *l_471 = &g_463;
        (**g_392) = (~((safe_add_func_uint32_t_u_u(l_435, l_435)) < ((-1L) < 4L)));
        if ((*g_393))
        {
            int l_438 = 2L;
            int *l_441 = &g_211;
            unsigned l_458 = 4294967292UL;
            unsigned short *l_461 = &g_73;
            int l_470 = 0x81EF1B7FL;
            for (g_124 = 18; (g_124 > 10); g_124 = safe_sub_func_int16_t_s_s(g_124, 3))
            {
                short l_447 = 1L;
                unsigned short *l_457 = &g_73;
                (*g_392) = p_29;
                if ((g_305 & l_438))
                {
                    for (l_320 = 0; (l_320 >= 27); l_320 = safe_add_func_int32_t_s_s(l_320, 6))
                    {
                        (*l_304) = l_435;
                        (*g_392) = (void*)0;
                        (*g_392) = p_29;
                    }
                    l_441 = (*g_392);
                }
                else
                {
                    unsigned short l_456 = 65535UL;
                    if ((**g_392))
                    {
                        char l_442 = (-5L);
                        (*l_441) = (((*l_304) = (l_442 ^ l_435)) || 0UL);
                        (*l_441) = ((+(((**g_267) = (**g_267)) != 0x30L)) , (safe_add_func_uint8_t_u_u(p_30, ((*l_304) = ((9UL ^ p_30) | 0L)))));
                    }
                    else
                    {
                        if ((**g_392))
                            break;
                    }
                    (*l_304) = (safe_rshift_func_int16_t_s_s(5L, 3));
                    l_304 = (void*)0;
                    (*l_441) = (((((0x74L != l_447) > (safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((((safe_sub_func_int32_t_s_s(0xAB2380E8L, l_456)) < g_99) < ((((p_30 , ((*g_393) != (**g_392))) , p_26) != l_457) == l_435)) & l_458), 0x44F5741FL)), p_27)) ^ p_27), g_350))) == (*p_29)) >= p_27) , 0x80B2E258L);
                }
                return l_457;
            }
            for (g_251 = (-12); (g_251 > (-10)); g_251 = safe_add_func_int16_t_s_s(g_251, 9))
            {
                return l_461;
            }
            (*l_441) = l_435;
            l_470 = (((*l_304) = (((*l_441) = (((*g_110) <= 1L) | p_27)) || 0x9AAC7A9DL)) != l_435);
        }
        else
        {
            (*l_304) = (**g_392);
            return l_471;
        }
        return l_462;
    }
    if ((g_60 <= 0x97BEL))
    {
        unsigned l_480 = 0xF8126BFCL;
        unsigned short ****l_482 = &l_321;
        int l_510 = 5L;
        const unsigned char *l_514 = &g_47;
        unsigned l_540 = 0xA4BAB2CAL;
        if (((*g_393) = p_28))
        {
            unsigned short l_481 = 0xC491L;
            (*g_393) = (l_481 , p_27);
            (*g_393) = (l_482 != (void*)0);
            for (p_28 = 10; (p_28 <= (-23)); p_28 = safe_sub_func_uint8_t_u_u(p_28, 2))
            {
                if ((*l_304))
                    break;
            }
        }
        else
        {
            unsigned short *l_485 = &g_73;
            int l_486 = 0x400D95F8L;
            int l_490 = 0x99A5FCF5L;
            unsigned l_511 = 0x633E30ABL;
            const unsigned *l_536 = &g_537;
            const unsigned **l_535 = &l_536;
            int *l_538 = (void*)0;
            if (p_30)
            {
                (*g_393) = (*g_393);
                (*g_392) = p_29;
                return l_485;
            }
            else
            {
                const short * const **l_488 = &l_487;
                int l_489 = 0xA11B7B4BL;
                short *l_491 = &g_399;
                unsigned char ***l_505 = (void*)0;
                unsigned char *l_512 = &g_122;
                unsigned char **l_513 = &l_512;
                const int l_515 = 0x0123917BL;
                (*g_393) = ((*g_110) , func_50((~((*l_303) = (l_486 = (*l_304)))), p_27, (g_209 = func_50(func_50(((((*l_488) = (p_27 , l_487)) != (void*)0) , 0x35L), l_480, ((*l_491) = (l_490 = l_489))), g_350, p_28))));
                for (g_463 = 6; (g_463 > 54); g_463 = safe_add_func_uint32_t_u_u(g_463, 1))
                {
                    unsigned short **l_496 = &g_85;
                    int l_504 = 8L;
                }
                (*g_393) = (((*l_485) = (l_490 == ((l_515 , l_516) == &g_392))) ^ (-7L));
            }
lbl_524:
            for (l_510 = 0; (l_510 > 3); l_510++)
            {
                int l_523 = (-9L);
                (*g_507) = (func_50(p_28, (l_511 , g_122), p_30) & (safe_add_func_uint32_t_u_u((l_523 = ((*g_110) = (((~(*g_110)) | (((((void*)0 != &g_209) < (safe_unary_minus_func_int16_t_s((((-1L) <= (**g_267)) ^ l_522)))) && 0xEFL) , p_28)) | 0x6DL))), 0xA915E499L)));
                if (g_209)
                    goto lbl_524;
            }
            (*g_507) = ((+((p_30 <= (*g_110)) == ((safe_add_func_int16_t_s_s(g_47, p_27)) | ((((*l_485) = 1UL) & (func_50(((safe_lshift_func_uint8_t_u_u(l_486, (((safe_sub_func_uint16_t_u_u((~l_510), (((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((((*l_535) = p_29) != ((**l_315) = ((((*g_393) , g_463) , l_490) , p_29))), p_28)), l_510)) <= p_28) ^ p_27))) != (-1L)) >= (***l_516)))) || l_510), g_11, p_28) >= 0x71L)) , (***l_516))))) || p_27);
            l_538 = ((**l_516) = func_81(&l_485, (*g_268)));
        }
        l_540 = l_539;
    }
    else
    {
        int **l_543 = (void*)0;
        for (g_47 = 20; (g_47 > 19); --g_47)
        {
            g_392 = l_543;
        }
        (**g_419) = (**g_419);
        (*g_393) = (+p_30);
    }
    return l_312;
}







static char func_38(unsigned short p_39, const unsigned p_40, unsigned * p_41, char p_42)
{
    int *l_265 = &g_99;
    int **l_264 = &l_265;
    unsigned * const **l_266 = &g_109;
    unsigned l_270 = 4294967290UL;
    int **l_284 = &l_265;
    int *l_286 = &g_211;
    (*l_264) = func_45(g_47);
    (*l_266) = &g_110;
    if (((****g_200) >= p_42))
    {
        char **l_269 = &g_268;
        unsigned short **l_273 = &g_85;
        int l_276 = 1L;
        l_269 = g_267;
        (*l_265) = (l_270 ^ p_42);
        for (g_209 = 13; (g_209 <= (-30)); g_209--)
        {
            unsigned l_279 = 4294967289UL;
            int l_287 = 0xF8E38762L;
            const unsigned short *l_299 = &g_77;
            (*l_264) = func_81(l_273, (p_40 , (**l_264)));
            if (p_39)
                continue;
            if ((safe_lshift_func_uint16_t_u_s((!((*g_85) = l_276)), g_11)))
            {
                unsigned l_285 = 4294967286UL;
                (*l_284) = l_286;
                (**l_284) = (**l_284);
                if (g_211)
                    continue;
                if (g_122)
                    break;
            }
            else
            {
                unsigned char l_298 = 0x30L;
                (**l_284) = l_279;
                l_287 = ((*l_286) = ((*l_265) = (*l_265)));
                for (g_122 = 0; (g_122 == 19); ++g_122)
                {
                    for (g_251 = 0; (g_251 < (-17)); g_251--)
                    {
                        short l_300 = 0x67E8L;
                        l_300 = ((((safe_lshift_func_uint8_t_u_u(((p_39 ^ (-1L)) || (((g_99 && l_279) ^ ((safe_sub_func_int32_t_s_s((2UL > (((p_40 & ((p_39 < 0x26L) <= (safe_lshift_func_uint8_t_u_u(0x00L, g_99)))) | 0x03L) && g_97)), 0xAD34EA4AL)) >= (*g_85))) >= l_298)), p_40)) , l_299) == &p_39) && 0x54L);
                        (*l_264) = &g_99;
                    }
                }
            }
        }
    }
    else
    {
        g_91 = p_42;
    }
    (*l_264) = p_41;
    return (*g_268);
}







static int * const func_45(unsigned p_46)
{
    int l_216 = 0xAB1FC945L;
    int *l_221 = &g_211;
    unsigned char *l_244 = &g_122;
    unsigned char **l_243 = &l_244;
    unsigned *l_250 = &g_60;
    unsigned **l_249 = &l_250;
    unsigned ***l_248 = &l_249;
    unsigned short *l_252 = &g_73;
    unsigned short **** const l_261 = &g_201;
    int * const l_262 = &g_91;
    int **l_263 = &l_221;
    for (g_47 = 0; (g_47 == 32); g_47 = safe_add_func_uint8_t_u_u(g_47, 9))
    {
        int l_54 = (-1L);
        int l_213 = 0L;
        unsigned short **l_214 = &g_85;
        unsigned char *l_237 = &g_122;
        unsigned char **l_236 = &l_237;
        unsigned char ***l_235 = &l_236;
        unsigned char ***l_245 = &l_243;
    }
    if (g_251)
    {
        (*l_221) = p_46;
    }
    else
    {
        unsigned l_259 = 0x92B1045DL;
        unsigned short ****l_260 = &g_201;
        (*l_221) = ((void*)0 == l_252);
        (*l_221) = ((safe_lshift_func_int8_t_s_s((0x4C98L <= (g_149 & (((safe_sub_func_int32_t_s_s((((p_46 , ((safe_sub_func_uint16_t_u_u(((****g_200) = (!65526UL)), l_259)) >= (p_46 || ((l_259 , l_260) != l_261)))) , (void*)0) == l_244), 0x59ADB9C4L)) == g_251) | g_47))), p_46)) , (-1L));
    }
    (*l_263) = l_262;
    return &g_99;
}







static unsigned char func_50(unsigned char p_51, short p_52, short p_53)
{
    unsigned short *l_74 = &g_73;
    char l_80 = 0x9FL;
    char l_133 = 6L;
    int l_144 = 0x11814A66L;
    const unsigned char *l_191 = &g_47;
    int l_198 = (-2L);
    unsigned short ****l_202 = &g_201;
    char l_210 = 0L;
    for (p_53 = 0; (p_53 <= (-26)); p_53 = safe_sub_func_uint8_t_u_u(p_53, 1))
    {
        unsigned *l_59 = &g_60;
        const int l_63 = (-3L);
        unsigned short *l_72 = &g_73;
        const unsigned short *l_76 = &g_77;
        const unsigned short **l_75 = &l_76;
        int *l_127 = &g_99;
        unsigned char *l_130 = (void*)0;
        unsigned short ***l_132 = &g_84;
        unsigned short ****l_131 = &l_132;
        unsigned l_183 = 4UL;
        int **l_185 = &l_127;
    }
    return l_210;
}







static unsigned short func_66(short p_67, const unsigned p_68, int * p_69, unsigned p_70, char p_71)
{
    int l_86 = 0x7AFC4999L;
    int *l_117 = &l_86;
    int **l_116 = &l_117;
    int l_120 = 0xC91981F0L;
    unsigned char *l_121 = &g_122;
    unsigned char *l_123 = &g_124;
    int *l_125 = &l_86;
    unsigned char l_126 = 1UL;
    (*l_116) = func_81(g_84, l_86);
    (**l_116) = (((*g_85) = (safe_rshift_func_uint16_t_u_s((+l_120), 5))) < (0UL <= (!((1UL > 0L) >= ((*l_123) = ((*l_121) = (&g_108 != (g_91 , l_117))))))));
    (*l_116) = (void*)0;
    (*l_125) = g_99;
    return l_126;
}







static int * func_81(unsigned short ** p_82, char p_83)
{
    unsigned short *l_87 = &g_73;
    unsigned short *l_88 = &g_73;
    int *l_89 = (void*)0;
    int *l_90 = &g_91;
    unsigned *l_96 = &g_97;
    int *l_98 = &g_99;
    short l_102 = 3L;
    short *l_103 = (void*)0;
    short *l_104 = &l_102;
    unsigned short ***l_115 = &g_84;
    (*l_90) = (((*p_82) = l_87) == l_88);
    if (((g_91 = (safe_sub_func_int16_t_s_s(p_83, ((((safe_add_func_uint32_t_u_u(p_83, p_83)) > (*l_90)) , ((*l_104) = ((p_83 & ((*l_96) = ((*l_90) >= p_83))) == (((*l_98) = g_11) , ((safe_sub_func_uint32_t_u_u(4294967294UL, g_47)) > l_102))))) == g_47)))) , 0L))
    {
        unsigned * const l_107 = &g_108;
        unsigned * const *l_106 = &l_107;
        unsigned * const **l_105 = &l_106;
        int *l_111 = &g_91;
        g_109 = ((*l_105) = &l_96);
        return l_111;
    }
    else
    {
        int **l_112 = (void*)0;
        int **l_113 = (void*)0;
        int **l_114 = &l_98;
        (*l_114) = l_90;
    }
    (*l_90) = (p_83 , p_83);
    (*l_115) = &l_88;
    return l_90;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_569, "g_569", print_hash_value);
    transparent_crc(g_696, "g_696", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    transparent_crc(g_1016, "g_1016", print_hash_value);
    transparent_crc(g_1029, "g_1029", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
