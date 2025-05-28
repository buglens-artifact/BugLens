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



static int g_2 = 0x324EC2E0L;
static int g_22 = 1L;
static int g_54 = 1L;
static int g_67 = 0xC7592E0CL;
static int * const g_84 = &g_54;
static int * const *g_83 = &g_84;
static int *g_85 = (void*)0;
static char g_103 = (-1L);
static int g_126 = (-7L);
static unsigned g_145 = 0x66A0E27AL;
static int g_156 = 0xE95F59ABL;
static unsigned short g_345 = 1UL;
static const int *g_413 = (void*)0;
static int g_431 = 0xB7D9C6C4L;
static int **g_739 = &g_85;
static unsigned g_755 = 0x792EF11AL;
static int g_855 = 0x86F418C9L;
static int ***g_924 = &g_739;



static char func_1(void);
static int * func_5(unsigned char p_6, int p_7, char p_8);
static int * func_11(const int * p_12, unsigned short p_13);
static const int * func_14(int * p_15, int p_16, unsigned p_17);
static int * func_18(const short p_19, int * p_20);
static int func_25(const int p_26, char p_27, unsigned short p_28, unsigned char p_29, unsigned short p_30);
static unsigned short func_37(unsigned p_38);
static short func_39(unsigned char p_40, int * p_41);
static int * func_42(int * p_43, int * p_44, int p_45, unsigned short p_46, int * p_47);
static int * func_48(int * p_49);
static char func_1(void)
{
    unsigned l_9 = 0xB4C23AFCL;
    int ***l_834 = &g_739;
    unsigned short l_882 = 65535UL;
    short l_966 = 0xD6D0L;
    int ** const l_976 = &g_85;
    const unsigned l_996 = 0xEE847AFFL;
    unsigned l_1011 = 4294967289UL;
    unsigned l_1017 = 4294967288UL;
    int l_1018 = 0xB76631A7L;
    int l_1019 = 0x5CE007F0L;
    for (g_2 = 0; (g_2 != 29); ++g_2)
    {
        int l_10 = 0x425A80E3L;
        int *l_829 = &g_22;
        (*g_739) = func_5(l_9, l_10, g_2);
        (*l_829) |= (g_54 >= (l_10 | l_10));
        if ((*l_829))
        {
            int *l_830 = &g_2;
            (*g_739) = l_830;
        }
        else
        {
            int **l_831 = (void*)0;
            int **l_832 = &g_85;
            int ** const *l_835 = &l_832;
            (*l_832) = (*g_83);
            if ((**g_739))
            {
                int **l_833 = &g_85;
                (**l_832) = (((((void*)0 != l_833) > func_25((*l_829), g_156, (g_126 , l_9), (*l_829), g_22)) , l_834) != l_835);
            }
            else
            {
                int *l_840 = (void*)0;
                (*l_829) = ((((((((**g_83) , (safe_div_func_uint32_t_u_u(0x4948ECBCL, 4294967293UL))) | g_54) , g_22) != (&g_84 == (((safe_lshift_func_int16_t_s_u(((((*l_829) , &g_83) == (void*)0) , g_156), g_54)) , g_126) , (void*)0))) || 0xC5L) & g_54) == 0x3CE3L);
                (**l_835) = l_840;
            }
            (*l_832) = (*l_832);
        }
        for (g_755 = (-23); (g_755 > 43); g_755 = safe_add_func_int8_t_s_s(g_755, 2))
        {
            int l_862 = 0x53A1A6D6L;
            int **l_865 = &l_829;
            unsigned l_877 = 4294967286UL;
            int l_880 = 8L;
            for (g_22 = 0; (g_22 == (-29)); g_22 = safe_sub_func_uint8_t_u_u(g_22, 8))
            {
                unsigned short l_861 = 8UL;
                for (g_145 = 0; (g_145 <= 44); g_145++)
                {
                    short l_847 = 2L;
                    l_847 = (*g_84);
                }
                if ((*g_84))
                {
                    for (g_67 = (-20); (g_67 < 6); g_67 = safe_add_func_uint8_t_u_u(g_67, 5))
                    {
                        char l_854 = 0L;
                        g_855 = (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((!l_854), 3)), 9));
                        return g_2;
                    }
                }
                else
                {
                    int **l_856 = &l_829;
                    int l_881 = (-1L);
                    (*l_856) = (*g_83);
                    if ((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(((l_861 == ((l_862 | ((safe_add_func_int16_t_s_s(g_2, (l_865 == &g_413))) | (((0x9FDDL >= (((g_2 & (safe_div_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(func_37(g_2), l_861)) > l_862), l_861))) <= g_345) != (-5L))) > (-1L)) , g_103))) || g_145)) , 0L), 12)) , l_861), g_755)))
                    {
                        (*g_739) = func_48((*g_739));
                        if ((**l_865))
                            break;
                        (*l_865) = (*g_739);
                    }
                    else
                    {
                        int *l_872 = &g_855;
                        (*l_872) ^= (**g_83);
                        (*l_829) ^= (*l_872);
                    }
                    (*g_84) = ((g_22 , (+(safe_rshift_func_uint8_t_u_u(g_855, (((safe_lshift_func_uint8_t_u_s((l_877 , ((g_156 , ((1L && (safe_add_func_uint8_t_u_u(g_755, (((((~(!(0xE2DF13E5L >= func_39(func_37(((-1L) <= 3UL)), (*g_739))))) , g_345) , g_54) || l_880) <= l_861)))) , 0x68L)) > l_881)), l_882)) < l_861) <= l_880))))) | 1L);
                }
            }
        }
    }
    (**g_83) = func_39(l_882, (*g_739));
    if ((safe_mod_func_int8_t_s_s(g_126, (1UL & ((*g_84) & 0xE70888F7L)))))
    {
        (**g_83) = ((void*)0 != &g_739);
        (*g_739) = (*g_739);
    }
    else
    {
        unsigned char l_903 = 0xE7L;
        int ***l_912 = &g_739;
        int l_989 = (-1L);
        char l_991 = (-10L);
        (**g_83) = (65534UL >= (l_882 != (g_126 || 1UL)));
        for (g_156 = (-18); (g_156 <= (-25)); g_156 = safe_sub_func_int8_t_s_s(g_156, 4))
        {
            int *l_887 = &g_2;
            (*g_739) = (*g_739);
            (**l_834) = l_887;
        }
        if ((*g_84))
        {
            unsigned l_900 = 0x7FE25C1EL;
            int *l_906 = (void*)0;
            int *l_907 = &g_156;
            int ***l_948 = &g_739;
            unsigned l_960 = 0x681154A1L;
            (*l_907) |= ((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((g_126 && ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(l_900, (safe_sub_func_uint32_t_u_u(((void*)0 == &g_413), (func_39(g_22, (((+(g_855 == 0x98L)) , (l_903 , (safe_rshift_func_uint16_t_u_u(g_345, 1)))) , (void*)0)) ^ g_103))))), 6L)) < 0x0CF4L)), 0x87L)) < 0x1FL), 1UL)), g_22)) && g_345);
            if (((safe_mul_func_uint16_t_u_u((((*g_84) & (&g_739 == l_912)) ^ (safe_add_func_int32_t_s_s((**g_83), (g_855 || g_345)))), g_156)) | ((*l_907) & ((((*l_907) >= g_156) != g_2) , (*g_84)))))
            {
                return g_103;
            }
            else
            {
                unsigned char l_921 = 4UL;
                int l_949 = 1L;
                if ((safe_mod_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(0x4B07L, g_2)), (+l_921))) , ((g_431 == g_22) , (safe_lshift_func_int16_t_s_u(((void*)0 == g_924), (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((-1L), l_903)), 14)), (*l_907))) == l_921), l_882)), (-1L))))))) , g_103), 0x89L)))
                {
                    int l_944 = 0xB6DA308FL;
                    for (l_9 = (-12); (l_9 == 27); ++l_9)
                    {
                        short l_941 = 0x1FFFL;
                        int *l_947 = (void*)0;
                        short l_950 = 0xF872L;
                        l_949 = ((g_156 >= (((((safe_rshift_func_uint16_t_u_u((4294967295UL >= (g_22 , (&g_83 == (((((safe_add_func_int8_t_s_s(l_941, (safe_mod_func_uint8_t_u_u((l_944 , (g_2 && (safe_div_func_int8_t_s_s(func_37(func_39((0xBF4D5D16L && l_941), l_947)), g_755)))), l_944)))) | 0x6F00956AL) , (*l_907)) , 8L) , l_948)))), g_431)) && 0x93L) , (**l_834)) == (*g_739)) >= 0L)) , 0x44CF6135L);
                        return l_950;
                    }
                    return g_54;
                }
                else
                {
                    char l_951 = 0x68L;
                    int l_961 = 0x098E78F2L;
                    l_961 = (((((**g_924) == (void*)0) < (g_2 , l_951)) <= (((((0UL > 0x20FDL) != (((g_67 , ((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(g_54, l_921)) , 0xFCL), g_156)) != g_22) , g_67) & g_345), l_960)), g_22)) | g_431)) != l_921) | 0x0BL)) || g_145) & (**g_83)) < (*g_84))) > g_2);
                    for (g_156 = (-25); (g_156 >= 25); ++g_156)
                    {
                        if (l_9)
                            break;
                        if ((*g_84))
                            continue;
                    }
                    for (g_755 = 28; (g_755 != 20); g_755 = safe_sub_func_uint16_t_u_u(g_755, 9))
                    {
                        if ((*g_84))
                            break;
                        (*l_907) |= func_39(g_103, (**g_924));
                        (**l_834) = (g_855 , func_48(&l_961));
                    }
                    (**g_924) = func_42((**g_924), (**g_924), l_966, g_22, &l_961);
                }
            }
        }
        else
        {
            unsigned l_967 = 0xF6607F14L;
            unsigned short l_977 = 65535UL;
            int **l_985 = &g_85;
            (**g_83) = (**g_83);
            if (((l_967 && 5UL) , (safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u(func_39(g_156, (*g_739)), g_431)), g_755)), (l_903 , ((l_976 == (void*)0) , 3UL)))) == l_977), g_345))))
            {
                unsigned l_984 = 0x6A4A6FACL;
                (**g_83) = ((((((((safe_lshift_func_uint16_t_u_u((g_145 , func_37(g_54)), ((g_156 <= (g_156 | (g_2 | l_967))) ^ (l_984 , (!l_977))))) & g_67) <= g_755) , l_985) == (void*)0) ^ 0L) , l_984) || (**g_83));
                (**g_83) ^= ((*g_83) == (void*)0);
                for (g_54 = (-11); (g_54 <= (-22)); g_54 = safe_sub_func_int8_t_s_s(g_54, 2))
                {
                    unsigned l_988 = 0x45305A2AL;
                    l_989 = l_988;
                    l_991 = (safe_unary_minus_func_int8_t_s(g_345));
                }
                for (l_967 = 11; (l_967 <= 47); ++l_967)
                {
                    const unsigned l_1001 = 0xF18986B0L;
                    int l_1002 = 0L;
                    if ((((safe_div_func_uint32_t_u_u((((g_145 > (l_996 , l_984)) && g_145) , ((((g_22 != ((0xDDADC51CL | (safe_div_func_uint16_t_u_u(g_156, (safe_lshift_func_uint16_t_u_s((((((*g_924) == (*g_924)) && l_1001) > g_156) , 1UL), g_755))))) >= l_984)) == g_431) || l_984) , 0xEA01CF49L)), l_1001)) , 0x1131L) >= g_2))
                    {
                        l_1002 |= 1L;
                    }
                    else
                    {
                        int *l_1003 = &g_855;
                        (*l_1003) |= (**g_83);
                        if (l_1002)
                            continue;
                        l_1003 = (**g_924);
                        if (l_1001)
                            continue;
                    }
                    (*g_84) = (0x35L || ((l_912 == (void*)0) != 0x83L));
                }
            }
            else
            {
                int *** const l_1004 = (void*)0;
                (**g_83) = ((((*g_84) > (!l_967)) , l_1004) == &l_985);
                return g_345;
            }
        }
        (**g_83) &= 0xE25325D0L;
    }
    l_1019 ^= (((void*)0 == (*l_976)) | (((safe_rshift_func_uint16_t_u_u(((*g_84) ^ (+(safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_1011, (safe_unary_minus_func_int16_t_s((l_1011 , (safe_rshift_func_int8_t_s_s(g_755, 7))))))), 3)))), (safe_mul_func_uint16_t_u_u(((g_22 , ((g_103 | 0x5DL) >= 0x0898L)) & l_1017), g_431)))) && (**g_83)) >= l_1018));
    return g_431;
}







static int * func_5(unsigned char p_6, int p_7, char p_8)
{
    int *l_21 = &g_2;
    (*g_739) = func_11(func_14(func_18(g_2, l_21), g_145, (*l_21)), (p_7 , p_8));
    return l_21;
}







static int * func_11(const int * p_12, unsigned short p_13)
{
    int *l_822 = &g_2;
    unsigned char l_827 = 0x16L;
    int **l_828 = &l_822;
    (*g_739) = func_42(l_822, (((((safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s(0L, ((*l_822) || g_103))), 0xB7L)) , ((((void*)0 == &g_739) , 0xBBC5A95DL) != (((+((func_25((p_12 != (void*)0), (*l_822), p_13, l_827, g_22) < p_13) , (*l_822))) & p_13) , (*l_822)))) < g_156) & 248UL) , (void*)0), p_13, g_345, l_822);
    p_12 = func_48(l_822);
    (*g_739) = l_822;
    (*l_828) = (*g_83);
    return (*g_739);
}







static const int * func_14(int * p_15, int p_16, unsigned p_17)
{
    unsigned char l_166 = 1UL;
    int l_228 = 1L;
    char l_257 = 1L;
    int **l_260 = &g_85;
    unsigned char l_283 = 0UL;
    unsigned char l_356 = 0xE7L;
    int l_398 = 0x285FCDEAL;
    unsigned short l_520 = 0x364DL;
    int l_588 = 0x7F77A0CFL;
    short l_591 = 0xBB6DL;
    short l_619 = 0x54F0L;
    unsigned char l_734 = 0xABL;
    const int l_782 = (-8L);
    unsigned l_787 = 0UL;
    unsigned l_790 = 4294967292UL;
    unsigned short l_817 = 65535UL;
    const int *l_821 = &g_54;
    for (g_54 = 0; (g_54 > 21); g_54++)
    {
        unsigned l_175 = 0x0D092960L;
        unsigned char l_202 = 1UL;
        int *l_241 = &g_54;
        short l_255 = 0x9CFFL;
        unsigned short l_258 = 0x2F28L;
        unsigned char l_261 = 0x1AL;
        int l_289 = (-1L);
        char l_294 = 0x64L;
        int l_319 = (-2L);
        int l_322 = 0x2BFC735EL;
        unsigned l_446 = 0x9933C3B5L;
        int *l_462 = &l_289;
        if ((g_22 || g_2))
        {
            int l_165 = (-1L);
            int *l_176 = &g_67;
            for (g_156 = (-21); (g_156 <= (-19)); g_156++)
            {
                return &g_54;
            }
            (*l_176) = ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((l_165 >= (((**g_83) & (((l_165 > (((l_166 >= ((safe_div_func_uint8_t_u_u((g_2 , (+(+p_16))), (safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s(l_165, (safe_mod_func_int32_t_s_s((*p_15), g_103)))), p_16)))) > p_16)) > g_126) != 0x9ADFC873L)) != p_16) & 0x6F01L)) , l_175)), (-2L))), g_156)) , 0xB29CEE28L);
        }
        else
        {
            unsigned l_184 = 0x22EBED49L;
            int *l_205 = &g_67;
            for (g_103 = 0; (g_103 == 16); ++g_103)
            {
                int l_183 = 0xB16CC9F8L;
                if ((*g_84))
                {
                    for (g_156 = 0; (g_156 < 28); g_156 = safe_add_func_uint16_t_u_u(g_156, 9))
                    {
                        int **l_181 = (void*)0;
                        int **l_182 = &g_85;
                        (*l_182) = (*g_83);
                    }
                }
                else
                {
                    int *l_185 = &l_183;
                    l_184 = (l_183 | l_166);
                    (*l_185) = 0xAF8784DFL;
                }
            }
            for (p_16 = 0; (p_16 < 26); p_16 = safe_add_func_uint32_t_u_u(p_16, 8))
            {
                int *l_188 = &g_67;
                (*l_188) = (**g_83);
                return p_15;
            }
            (*l_205) |= (safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(0x5C71L, ((safe_sub_func_uint16_t_u_u((p_15 == (void*)0), (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_126, l_202)), g_126)))) <= 1UL))), ((g_22 > ((safe_add_func_int32_t_s_s((*g_84), l_202)) && l_184)) > l_202))))), p_17));
            if ((*p_15))
            {
                unsigned short l_208 = 0UL;
                for (g_67 = (-8); (g_67 >= 10); g_67++)
                {
                    int **l_220 = &l_205;
                    short l_227 = 1L;
                    if (((l_208 < 1L) && p_16))
                    {
                        int *l_217 = (void*)0;
                        int *l_218 = &g_22;
                        g_156 = (safe_rshift_func_uint8_t_u_s((0x79DAL | (safe_add_func_uint16_t_u_u((!(8UL & g_126)), (safe_mul_func_uint8_t_u_u((l_202 , (p_16 > ((void*)0 == &g_84))), p_17))))), 7));
                        (*l_218) = (((safe_div_func_int8_t_s_s(((*l_205) < (p_17 <= ((0xA092L >= (l_166 , (*l_205))) >= 8L))), (~g_2))) , l_208) , (*p_15));
                        if ((**g_83))
                            break;
                    }
                    else
                    {
                        int *l_219 = &g_22;
                        (*l_219) &= (*p_15);
                    }
                    (*l_220) = func_48(p_15);
                    for (p_17 = 0; (p_17 == 3); p_17 = safe_add_func_uint16_t_u_u(p_17, 7))
                    {
                        unsigned char l_229 = 254UL;
                        int l_238 = 0x0BFE3058L;
                    }
                }
            }
            else
            {
                unsigned l_246 = 4294967288UL;
                unsigned short l_247 = 1UL;
                p_15 = func_48(&g_126);
                if ((*g_84))
                    break;
                (*l_205) = (safe_lshift_func_int16_t_s_u(((l_166 > ((*p_15) && ((l_241 != (l_228 , func_48(l_241))) >= (safe_rshift_func_int16_t_s_u(((p_16 && l_228) < (((safe_sub_func_uint8_t_u_u(l_246, p_17)) , (void*)0) != p_15)), 2))))) | (*l_241)), l_247));
            }
        }
        for (g_67 = 23; (g_67 > (-2)); g_67 = safe_sub_func_uint32_t_u_u(g_67, 7))
        {
            char l_254 = 0xCAL;
            int l_259 = 0x0A105E31L;
            int * const *l_264 = &g_85;
            for (p_16 = 22; (p_16 < 0); p_16--)
            {
                const unsigned l_256 = 0x2C76AACBL;
                int l_265 = 0x49FBD7E9L;
                l_259 ^= ((((safe_mod_func_uint32_t_u_u((((p_17 , l_254) , ((l_166 | ((g_67 ^ l_255) , g_22)) , 0x62L)) , l_256), l_257)) & 0xD6639746L) , g_103) , l_258);
                g_85 = &l_259;
                (**l_260) = (((l_260 == (l_261 , ((safe_lshift_func_int16_t_s_u(g_145, g_22)) , l_264))) , 0x76L) == 0L);
                l_265 &= ((g_22 <= (0L >= ((**l_260) ^ (~l_256)))) , (**g_83));
            }
        }
        if ((*p_15))
        {
            int *l_273 = &g_54;
            int *l_340 = &l_319;
            const int ** const *l_365 = (void*)0;
            short l_367 = 7L;
            unsigned short l_373 = 9UL;
            for (g_103 = 0; (g_103 > 16); g_103 = safe_add_func_int32_t_s_s(g_103, 6))
            {
                int l_270 = 0x7A937C5BL;
                int **l_284 = &l_241;
                if ((((((safe_sub_func_int8_t_s_s(g_22, ((l_270 | (safe_mul_func_int16_t_s_s((l_241 != ((l_273 != l_273) , p_15)), ((safe_add_func_uint16_t_u_u(p_16, ((g_156 , 6L) | (*l_273)))) , g_67)))) , 0x77L))) , p_16) , g_126) , 0x7CDF416EL) > (*p_15)))
                {
                    int *l_276 = &l_270;
                    (*l_276) &= (*l_273);
                }
                else
                {
                    int *l_277 = (void*)0;
                    int *l_278 = &g_156;
                    (*l_278) = (*p_15);
                    (*l_278) = (safe_rshift_func_int16_t_s_u((l_283 | (l_273 == ((((*l_241) > p_16) || g_54) , (void*)0))), 1));
                }
                (*l_284) = (*g_83);
            }
            if ((*l_273))
            {
                int ***l_285 = &l_260;
                int *l_286 = &g_126;
                if ((*p_15))
                    break;
                (*l_285) = &p_15;
                (*l_286) = (***l_285);
            }
            else
            {
                unsigned l_306 = 1UL;
                int l_330 = (-3L);
                for (l_255 = 0; (l_255 <= (-10)); --l_255)
                {
                    unsigned short l_305 = 0xA2A3L;
                    int l_323 = 0x2A1A66ECL;
                    l_289 = (*p_15);
                    if ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(g_145, (g_145 || ((p_16 , (l_294 , &p_15)) == (((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((((&g_83 != (((+(!(((safe_lshift_func_uint16_t_u_u(g_2, g_67)) & ((p_15 == (void*)0) != 0x8DL)) , p_16))) >= l_305) , (void*)0)) && (**g_83)) != g_103) < g_54) , g_54), g_67)), (*l_241))), g_67)) >= l_306), 11)) , (*l_273)) , (void*)0))))), g_67)))
                    {
                        l_289 = 5L;
                    }
                    else
                    {
                        const int l_318 = 0xE7674160L;
                        int *l_324 = &g_22;
                        l_323 = ((safe_lshift_func_uint8_t_u_s(((((*p_15) < ((safe_unary_minus_func_uint8_t_u(l_306)) || p_16)) < ((safe_add_func_uint16_t_u_u(((((safe_div_func_uint16_t_u_u((0x46L && 0UL), p_16)) || ((safe_add_func_int16_t_s_s((((safe_sub_func_int32_t_s_s(l_318, (l_319 , (safe_rshift_func_int8_t_s_u((*l_241), 0))))) || 1UL) , 0xD528L), p_17)) < (*l_241))) ^ g_156) || p_17), l_322)) <= (*p_15))) < l_318), 4)) || (-8L));
                        (*l_324) = ((void*)0 == &p_15);
                    }
                    for (l_202 = 0; (l_202 > 10); l_202 = safe_add_func_int8_t_s_s(l_202, 1))
                    {
                        short l_327 = 0x5D7FL;
                        if ((*p_15))
                            break;
                        l_327 = (&g_84 == ((p_16 == 0UL) , &p_15));
                        l_330 = ((safe_sub_func_uint8_t_u_u(255UL, ((((*p_15) != (0x92L | l_327)) != g_145) < (*l_241)))) , (*p_15));
                    }
                }
                for (g_126 = 0; (g_126 <= (-21)); g_126 = safe_sub_func_uint32_t_u_u(g_126, 6))
                {
                    int *l_333 = &g_67;
                    (*l_333) = ((&g_83 != &g_83) > g_126);
                    (*l_260) = p_15;
                }
            }
            (*l_340) = ((+((p_17 > (0x26L | (1UL != 0L))) && (*l_241))) && (safe_sub_func_int8_t_s_s(p_16, (l_273 == &l_322))));
            if (((((safe_sub_func_int8_t_s_s(g_126, g_145)) , ((+(safe_mul_func_uint16_t_u_u(((g_345 , &g_84) != (void*)0), p_17))) , &g_85)) == (void*)0) >= p_16))
            {
                unsigned short l_357 = 0x9AD0L;
                if ((((*l_241) != p_16) ^ g_156))
                {
                    int * const **l_366 = &g_83;
                    l_357 &= (~(safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_u(g_145, 6)) > g_126) >= ((((safe_add_func_uint16_t_u_u(((((((0x64595283L && (g_54 , ((g_145 , (*p_15)) & ((((safe_mul_func_int8_t_s_s(0L, p_16)) && (l_356 < p_17)) , 0xD0L) || 0L)))) , (void*)0) == (void*)0) , (-2L)) | g_22) > (*l_241)), p_17)) , p_15) == (*g_83)) | g_103)) > p_16), 1L)), g_22)));
                    (*l_260) = ((safe_add_func_uint8_t_u_u(l_357, (((safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_s((0x41L >= (-7L)), 1)))) | p_16) >= ((**g_83) > ((safe_rshift_func_uint16_t_u_u(g_22, 4)) , ((l_365 != l_366) , (l_367 == 0x2F9E332AL))))))) , (void*)0);
                    if ((p_16 || l_357))
                    {
                        (*l_340) ^= (***l_366);
                    }
                    else
                    {
                        unsigned l_370 = 0UL;
                        (*l_260) = p_15;
                        l_373 = (((safe_add_func_uint32_t_u_u(g_54, l_357)) , (((p_16 , l_357) , (l_370 >= (safe_lshift_func_uint16_t_u_s(p_17, l_357)))) , p_16)) , (l_357 & g_22));
                        (*l_340) |= (((***l_366) , (safe_sub_func_uint8_t_u_u(p_16, p_16))) ^ 0xF8F05132L);
                    }
                    g_85 = (((((safe_mod_func_uint32_t_u_u(g_103, (***l_366))) >= ((safe_lshift_func_uint8_t_u_s((*l_340), ((((((void*)0 == l_260) == (safe_mul_func_uint8_t_u_u(((g_345 , p_16) == ((p_17 , func_48(&l_319)) == (*g_83))), p_16))) < 3L) , p_16) & (*l_241)))) | p_17)) , 0x7FBF086CL) & 0x81969C1BL) , (void*)0);
                }
                else
                {
                    (*l_340) = (1L && ((**g_83) , (p_17 >= (safe_add_func_uint32_t_u_u(((0UL < (safe_sub_func_int8_t_s_s(g_54, ((safe_lshift_func_int8_t_s_s(g_156, 6)) | ((g_54 < (+((safe_sub_func_uint8_t_u_u((&p_15 == (void*)0), 0xDCL)) ^ p_17))) , 0x3C4A63CAL))))) ^ 0x6977L), 0xE9037DE9L)))));
                    for (l_322 = (-9); (l_322 < 13); l_322 = safe_add_func_uint16_t_u_u(l_322, 7))
                    {
                        if ((*p_15))
                            break;
                        (*l_260) = func_48(&g_156);
                    }
                }
                return &g_2;
            }
            else
            {
                unsigned char l_399 = 7UL;
                if ((safe_sub_func_uint8_t_u_u(p_17, (safe_sub_func_uint16_t_u_u((p_16 ^ g_22), (((safe_mod_func_uint8_t_u_u(l_398, (g_345 & ((p_15 != &l_322) <= 1UL)))) ^ l_399) , (-6L)))))))
                {
                    const int *l_400 = &g_126;
                    return l_400;
                }
                else
                {
                    if ((*p_15))
                    {
                        int **l_401 = &g_85;
                        (*l_401) = (*g_83);
                        (*l_340) |= (*g_84);
                        return p_15;
                    }
                    else
                    {
                        return &g_156;
                    }
                }
            }
        }
        else
        {
            unsigned short l_406 = 65533UL;
            char l_417 = (-1L);
            int *l_428 = (void*)0;
            int l_434 = 0x76A0469AL;
            short l_439 = 0L;
            int l_479 = 0L;
            const unsigned l_497 = 4294967295UL;
            const int *l_500 = &g_22;
            for (p_17 = 0; (p_17 != 31); p_17++)
            {
                const int * const l_407 = &g_156;
                char l_429 = 0x55L;
                int *l_430 = (void*)0;
                l_322 = (**g_83);
                if ((**g_83))
                {
                    const int **l_408 = (void*)0;
                    const int *l_410 = (void*)0;
                    const int **l_409 = &l_410;
                    l_406 ^= (safe_sub_func_uint32_t_u_u(0x514CB11CL, p_16));
                    (*l_260) = p_15;
                    (*l_409) = l_407;
                }
                else
                {
                    for (g_145 = 8; (g_145 >= 19); g_145 = safe_add_func_uint8_t_u_u(g_145, 7))
                    {
                        const int **l_414 = &g_413;
                        (*l_414) = g_413;
                    }
                    l_417 ^= (p_16 & ((g_22 , func_48(&g_2)) != ((safe_sub_func_int16_t_s_s(g_22, 0x3E0CL)) , func_48(&g_54))));
                }
                g_431 &= (((g_156 >= g_345) > 0xAFC3L) , ((safe_rshift_func_uint8_t_u_u(((g_54 , (g_54 , (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s((*p_15), (((p_15 != l_428) != ((*l_407) , p_16)) ^ 1UL))), (*l_407))) != (*p_15)) <= l_429) ^ (*l_241)), p_16)), 9L)))) < 0xAFL), g_22)) || 0x99L));
                for (l_406 = 8; (l_406 > 7); l_406--)
                {
                    l_434 = (**g_83);
                }
            }
            l_446 = ((safe_mul_func_int8_t_s_s((-5L), (*l_241))) | (safe_mod_func_uint8_t_u_u(((((l_439 , func_48(func_48(p_15))) != p_15) >= (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_431, p_16)), 13)), g_126))) >= p_17), p_17)));
            for (g_22 = 0; (g_22 <= 11); ++g_22)
            {
                int * const *l_470 = (void*)0;
                int **l_476 = &l_241;
                if ((**g_83))
                {
                    int *l_461 = &l_228;
                    (*l_260) = &l_319;
                    (*g_85) = ((safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_int16_t_s_u((((void*)0 == &g_83) ^ (safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(p_17, 6)), (safe_sub_func_int16_t_s_s(p_16, (((0x3FL >= (p_16 , p_17)) || 0x5B313F41L) != ((((l_461 != (void*)0) ^ 0xBF9DL) < p_16) <= p_17))))))), 4)) , l_462) != (void*)0) & g_345), p_17)) , (**l_260));
                    (*l_260) = func_48(p_15);
                    if ((*l_241))
                        break;
                }
                else
                {
                    int *l_469 = &l_319;
                    for (p_16 = (-10); (p_16 > (-20)); p_16 = safe_sub_func_uint32_t_u_u(p_16, 3))
                    {
                        int **l_471 = &l_428;
                        (*l_462) ^= (*p_15);
                        (*l_462) = ((((g_431 | (safe_mul_func_int16_t_s_s((((l_469 != l_469) , (*p_15)) >= (l_470 != l_471)), (*l_241)))) <= ((*l_241) != (**g_83))) , p_17) >= 0x1BCDL);
                        (*l_469) = (safe_mul_func_int16_t_s_s(((**g_83) , ((safe_mod_func_int16_t_s_s((p_16 ^ ((l_476 != (void*)0) ^ (g_431 , g_67))), p_16)) > (((safe_rshift_func_int8_t_s_s(p_16, (l_479 < 0xCDL))) < 255UL) > 0x66L))), g_2));
                    }
                    (*l_476) = func_48(func_48(&g_54));
                    for (l_166 = 0; (l_166 == 20); l_166 = safe_add_func_int8_t_s_s(l_166, 5))
                    {
                        unsigned char l_484 = 0x4FL;
                        (*l_462) |= (*p_15);
                        (*l_462) = ((safe_mod_func_int32_t_s_s(l_484, (p_16 , (**g_83)))) ^ (g_345 , (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((~(safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u(p_16, 65527UL)), ((g_431 == (l_484 & (*g_84))) == 0xED4B8A7DL))) < l_497), p_16)), p_16))), g_67)), 0xE57C5767L))));
                    }
                }
                for (l_257 = 0; (l_257 <= 24); l_257++)
                {
                    return l_500;
                }
                (*l_462) = ((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((g_345 > (safe_div_func_uint16_t_u_u((((7UL == (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0UL, ((void*)0 != &l_476))), (*l_500)))) , ((void*)0 != &l_462)) , g_22), p_16))), 3)) > (*l_462)), (-4L))) >= 1L);
            }
        }
        (*l_462) |= (**g_83);
    }
    if ((g_2 && l_356))
    {
        (*g_84) &= l_166;
    }
    else
    {
        int l_511 = 0xBAE8BA9BL;
        int l_531 = 0x013A0E75L;
        unsigned l_581 = 1UL;
        const int *l_584 = &g_22;
        unsigned l_594 = 3UL;
        unsigned l_618 = 0x2F28C824L;
        int ***l_625 = &l_260;
        const int l_639 = 0xD35BC134L;
        const int l_679 = 0L;
        int l_701 = 0xD4C58C74L;
        unsigned l_746 = 1UL;
        int l_813 = 0x158167C9L;
        if ((((g_67 , l_511) || (p_16 <= p_17)) > (+p_17)))
        {
            const unsigned char l_513 = 0x41L;
            unsigned l_548 = 0x5B2AB2FBL;
            int l_582 = 0x668301A6L;
            int **l_587 = (void*)0;
            unsigned short l_668 = 9UL;
            unsigned short l_669 = 65535UL;
            int *l_682 = (void*)0;
            int *l_683 = &g_156;
            if ((!3L))
            {
                int ***l_512 = &l_260;
                (*l_512) = &p_15;
            }
            else
            {
                unsigned l_514 = 0xABB6C9B9L;
                int *l_529 = &g_54;
                short l_583 = 0L;
                int *** const l_655 = &l_260;
                unsigned short l_656 = 0x50CBL;
                if ((l_513 != (((((l_514 & (p_16 != 0xF9L)) ^ (**g_83)) , 4294967295UL) , p_15) == p_15)))
                {
                    short l_515 = (-1L);
                    int ***l_530 = &l_260;
                    if ((*p_15))
                    {
                        int *l_526 = &g_156;
                        (*g_84) ^= (l_515 == 0x949B3072L);
                        (*g_84) ^= (safe_mod_func_uint16_t_u_u((g_67 & g_103), (0x97419092L ^ 4294967287UL)));
                        (*l_526) ^= (safe_mod_func_uint8_t_u_u(l_520, (((void*)0 == p_15) ^ (safe_unary_minus_func_uint8_t_u(((safe_mod_func_int16_t_s_s(func_37(p_17), (safe_mul_func_int16_t_s_s(g_145, ((p_16 == p_16) , (l_514 < g_2)))))) && p_17))))));
                    }
                    else
                    {
                        (**g_83) = (safe_add_func_uint8_t_u_u(((*g_83) != (*g_83)), p_16));
                        (*l_260) = l_529;
                        (*p_15) = (l_530 == l_530);
                        l_531 ^= (**l_260);
                    }
                }
                else
                {
                    unsigned char l_542 = 0xD8L;
                    unsigned char l_545 = 0UL;
                    const int **l_560 = (void*)0;
                    const int *** const l_559 = &l_560;
                    if ((((safe_mul_func_int16_t_s_s(g_67, 1L)) , ((safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s((*p_15), ((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_542, ((((void*)0 == &p_15) , (((l_513 <= (safe_add_func_int32_t_s_s((l_542 & p_17), (*p_15)))) , 0x43L) ^ g_126)) | 1UL))), p_16)) || 0x42C1A0AEL))) != p_16), 0xF128C0B6L)) == l_545)) > 0UL))
                    {
                        char l_561 = 1L;
                        (*p_15) = (safe_mul_func_uint16_t_u_u((&l_531 == (l_548 , (*g_83))), func_25(((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_511, (((((((safe_add_func_uint32_t_u_u(0x51C74924L, g_126)) , ((safe_mul_func_uint8_t_u_u(((0UL >= (-3L)) , (safe_rshift_func_int8_t_s_u(((l_559 == &g_83) > g_156), 6))), 0xFBL)) <= 0xC8DCL)) != p_16) < p_17) | l_561) , p_17) , 0L))), l_548)) , 0xCFF3EA69L), p_16, g_145, l_561, l_513)));
                        g_85 = (*g_83);
                        (*l_529) = (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((~((safe_add_func_int32_t_s_s(((*g_83) != ((((((safe_mul_func_uint16_t_u_u(g_67, (func_37(g_103) < g_126))) & ((l_548 , (~(((g_67 , l_581) <= (g_67 ^ 0x95L)) , p_16))) | l_582)) || 1UL) | p_16) == l_548) , &l_531)), 0x8BF01100L)) & l_583)), p_17)), g_103));
                        (*p_15) = ((1UL >= g_126) , (*g_85));
                    }
                    else
                    {
                        return &g_54;
                    }
                    return l_584;
                }
                if ((safe_mul_func_uint8_t_u_u(((void*)0 == l_587), func_25(func_25(p_16, l_588, (((safe_lshift_func_uint16_t_u_s((l_591 , 65530UL), ((((safe_add_func_uint8_t_u_u((p_17 <= func_25((*l_584), func_39(p_16, p_15), g_145, (*l_584), g_156)), p_16)) | 65532UL) , g_2) < p_16))) && 4294967291UL) > 0UL), p_17, l_594), p_16, (*l_584), g_156, g_345))))
                {
                    char l_603 = 0x99L;
                    for (l_591 = (-25); (l_591 >= 1); ++l_591)
                    {
                        unsigned char l_608 = 255UL;
                        int ***l_609 = &l_260;
                        (*l_529) = (4294967295UL != ((func_39((p_17 , (safe_add_func_uint8_t_u_u(p_16, (safe_mul_func_uint16_t_u_u((p_16 != ((((255UL < (l_603 & ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(p_16, 1)), 5)) < ((!((l_608 == l_603) , p_16)) || g_67)))) , p_16) , 65526UL) != (*l_584))), (-2L)))))), p_15) , 0x2AL) == p_16));
                        if (l_603)
                            continue;
                        (*l_609) = l_260;
                        (**l_609) = p_15;
                    }
                }
                else
                {
                    (*l_529) = (-6L);
                    (*l_260) = l_529;
                }
                (*l_529) |= (0xC9L | (*l_584));
                if ((safe_mod_func_int16_t_s_s(((((((p_17 <= ((func_39(((((safe_div_func_uint8_t_u_u(func_39((7UL == (((*p_15) <= ((*l_529) , ((safe_mod_func_uint8_t_u_u((*l_529), (((*p_15) >= (*g_84)) , (safe_add_func_int32_t_s_s((*p_15), p_17))))) >= (*l_529)))) || (**g_83))), &g_67), 0x87L)) >= p_17) ^ l_618) == p_17), p_15) ^ g_431) <= l_619)) & (*l_584)) >= 4294967293UL) , (*l_529)) ^ g_22) , p_17), p_16)))
                {
                    unsigned l_624 = 0x7CD1FFB2L;
                    int *l_630 = &g_156;
                    short l_631 = 0L;
                    int l_648 = (-7L);
                    (*l_630) ^= ((!(safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((l_624 , &g_413) == &p_15), (func_37((((void*)0 == l_625) , (((((0xA6L ^ (safe_lshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s((((g_431 , (*g_83)) == l_529) & p_16), 0xA9A40225L)), 7))) , (void*)0) != (void*)0) , &g_83) == &g_83))) != p_17))), 1L))) , (*p_15));
                    (**g_83) ^= (-1L);
                    (**g_83) = ((func_39(p_16, func_48(l_630)) || func_39(p_16, &g_126)) ^ l_631);
                    if ((*p_15))
                    {
                        int l_636 = (-9L);
                        (**g_83) = (safe_mod_func_int16_t_s_s(g_67, ((g_345 , (246UL && g_145)) , (((safe_lshift_func_uint16_t_u_u(65532UL, 8)) && (l_636 == ((*l_630) | g_126))) ^ func_37(g_431)))));
                        l_648 = ((!p_17) >= ((safe_sub_func_int32_t_s_s(((*l_584) > func_25(l_639, (safe_rshift_func_uint16_t_u_s(((((safe_div_func_uint16_t_u_u(p_17, p_16)) > (safe_mod_func_int32_t_s_s((*g_84), ((safe_mul_func_uint8_t_u_u(((g_103 && p_16) , 3UL), p_16)) ^ g_431)))) >= p_16) , 1UL), 12)), p_16, g_22, p_17)), (*l_584))) , 1UL));
                        (*l_630) |= ((safe_lshift_func_uint8_t_u_s(3UL, ((g_126 , 65535UL) == (((9L ^ ((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((void*)0 != (*l_625)) == g_67), ((p_17 , l_625) != l_655))), g_67)) , g_126)) > l_656) , l_636)))) , (*g_84));
                        return &g_2;
                    }
                    else
                    {
                        (**g_83) = 0xFD1227BAL;
                    }
                }
                else
                {
                    unsigned short l_672 = 9UL;
                    (*l_260) = &l_588;
                    for (l_618 = 0; (l_618 > 13); l_618 = safe_add_func_int32_t_s_s(l_618, 3))
                    {
                        (***l_625) = (((**l_260) <= (safe_mod_func_int8_t_s_s((func_25((safe_unary_minus_func_uint8_t_u((func_39(l_582, (**l_655)) < (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(g_145, (!(safe_rshift_func_uint8_t_u_s((l_668 && l_669), 3))))), p_16))))), (((safe_mul_func_uint16_t_u_u(((g_145 , g_103) | p_16), 0x751BL)) < l_672) , g_156), p_16, g_22, g_431) , p_16), l_672))) & p_17);
                        (***l_655) &= (*p_15);
                        if ((*g_84))
                            break;
                    }
                    (*l_529) ^= (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(0x01DF59F7L, (***l_655))), 14));
                    (*g_85) = (*p_15);
                }
            }
            (*l_683) |= (((safe_div_func_uint8_t_u_u((l_679 , ((*p_15) ^ (((*p_15) , &g_85) != (((p_17 && ((+((g_54 , (void*)0) == &g_84)) != (safe_div_func_uint32_t_u_u(p_16, g_126)))) , (-10L)) , (void*)0)))), 0xE5L)) != 0x46160F0DL) , 0x4CC2574BL);
        }
        else
        {
            unsigned short l_690 = 0xABBEL;
            int *l_691 = &l_588;
            const unsigned l_696 = 0xCEA17E63L;
            char l_763 = 0x90L;
            int ***l_774 = &g_739;
            int **l_814 = &g_85;
            (*l_691) |= ((safe_mod_func_uint16_t_u_u((((func_39((safe_rshift_func_int16_t_s_u(((((g_22 || (safe_lshift_func_uint8_t_u_u(func_39(p_17, p_15), g_22))) , 0x31DE41A3L) , ((0x9D026DEEL || (*p_15)) ^ g_345)) || (*l_584)), 5)), &g_2) ^ g_126) & 0xE10BB425L) > 4294967295UL), p_17)) == l_690);
            for (l_166 = 1; (l_166 < 45); l_166++)
            {
                unsigned l_735 = 4294967295UL;
                int *l_738 = &g_67;
                int ** const * const l_798 = (void*)0;
            }
            (*p_15) = (p_17 | l_813);
            (*l_814) = (*g_83);
        }
    }
    (**g_83) = ((safe_mod_func_uint16_t_u_u((~(func_37(p_17) , (p_16 , 0xA4BFL))), l_817)) , l_520);
    for (l_398 = 0; (l_398 == 16); l_398 = safe_add_func_int16_t_s_s(l_398, 1))
    {
        int l_820 = 1L;
        (*p_15) = l_820;
    }
    return l_821;
}







static int * func_18(const short p_19, int * p_20)
{
    unsigned char l_50 = 1UL;
    short l_107 = 0L;
    int * const l_137 = &g_126;
    for (g_22 = 28; (g_22 <= (-10)); g_22--)
    {
        int l_142 = (-5L);
        int *l_155 = &g_156;
        if (func_25(((safe_mod_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s(8L, 6)) ^ (safe_lshift_func_int8_t_s_s(g_22, 3))) ^ (((func_37((((func_39(p_19, func_42(p_20, func_48(p_20), ((g_22 , func_48(p_20)) != (void*)0), l_50, &g_2)) || 2UL) == 1UL) , 1UL)) || p_19) || 4L) & l_107)), p_19)) && p_19), p_19, g_22, g_22, g_2))
        {
            int **l_135 = &g_85;
            (*l_135) = (*g_83);
        }
        else
        {
            int *l_136 = &g_54;
            (*g_84) |= ((g_2 || 0xCFL) ^ l_50);
            return l_136;
        }
        (*g_85) = ((((*p_20) > (((*g_83) != l_137) < (safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s(g_2, 0x97B6L)), 0L)))) > (0xF0F8L < ((*l_137) >= (0xAFL & l_142)))) < (*p_20));
        (*l_155) |= (l_142 , ((safe_sub_func_int16_t_s_s(((*p_20) > p_19), (func_25((g_145 <= (safe_unary_minus_func_uint16_t_u((+g_67)))), (*l_137), p_19, ((((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(0x1EL, 7)), (safe_mod_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((*l_137), g_126)) && (*l_137)), g_22)))) && p_19) , 65535UL) >= g_2), l_142) > (-8L)))) == g_103));
    }
    (*g_84) ^= 0L;
    return &g_67;
}







static int func_25(const int p_26, char p_27, unsigned short p_28, unsigned char p_29, unsigned short p_30)
{
    char l_108 = (-3L);
    unsigned l_123 = 0xCB736C16L;
    int *l_127 = &g_54;
    (*g_84) ^= l_108;
    if (((&g_85 != (((l_108 <= 0xBAL) != ((func_39(((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint32_t_u_u(((l_108 < 1L) && l_108), (0x8FB872A0L <= (!(((((((safe_mul_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(g_54, ((safe_mul_func_uint16_t_u_u(((-5L) == l_108), g_103)) ^ p_26))) | 9UL) >= l_108), 0x7299L)) , (-8L)) , &g_84) == (void*)0) > g_103) , 0x10L) <= g_103))))), 9)) == g_67), &g_2) && g_2) , 0x91BBL)) , (void*)0)) > g_22))
    {
        const short l_124 = 9L;
        int *l_125 = &g_126;
        (*l_125) ^= (safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((((((func_37((p_30 & g_67)) < l_123) & (((p_29 , p_28) == p_28) != (0xA5FAL & g_2))) <= l_124) , l_123) == 9L) && p_27), 0x07E14A34L)), 0x80F4L));
        (**g_83) = (*g_84);
    }
    else
    {
        int **l_128 = &l_127;
        (**g_83) = (((void*)0 == l_127) != 0x143445DCL);
        (*l_128) = (func_39((*l_127), func_48(l_127)) , func_48(func_48(&g_2)));
        g_126 &= (safe_rshift_func_uint8_t_u_u(func_37((0xDD76C8E4L | ((((((p_30 , (safe_mod_func_int32_t_s_s(p_26, p_30))) , (**g_83)) <= (**l_128)) , (((&g_84 != ((p_29 && (safe_sub_func_uint16_t_u_u((**l_128), 8L))) , &g_85)) , g_67) <= p_30)) == p_28) , (**l_128)))), 4));
        (*g_84) = (**l_128);
    }
    return (*l_127);
}







static unsigned short func_37(unsigned p_38)
{
    short l_106 = 0xAF16L;
    (*g_84) = 0x9D5494CFL;
    l_106 ^= (safe_rshift_func_int8_t_s_u(((((0xD0L != (p_38 <= (4294967295UL ^ (safe_lshift_func_uint16_t_u_s(0xB513L, (safe_mul_func_int16_t_s_s(g_103, p_38))))))) || p_38) != (((((safe_mod_func_int8_t_s_s(g_67, 254UL)) < 0x1D1AL) < p_38) != 0UL) < (*g_84))) ^ 0x87DEF5A7L), g_22));
    return p_38;
}







static short func_39(unsigned char p_40, int * p_41)
{
    int *l_59 = &g_54;
    int *l_60 = &g_22;
    int **l_61 = &l_59;
    (*l_59) = (safe_rshift_func_int16_t_s_u((l_59 == &g_2), 6));
    (*l_61) = func_42(func_42(((*l_59) , &g_22), func_48(p_41), (*l_59), g_22, l_60), &g_22, g_2, g_22, p_41);
    for (g_54 = 0; (g_54 <= (-20)); --g_54)
    {
        int *l_66 = &g_67;
        (*l_66) = (g_54 & ((safe_mul_func_int16_t_s_s(0x618EL, ((void*)0 == &g_22))) , 0x9CL));
    }
    return p_40;
}







static int * func_42(int * p_43, int * p_44, int p_45, unsigned short p_46, int * p_47)
{
    for (p_46 = (-2); (p_46 == 59); ++p_46)
    {
        int *l_53 = &g_54;
        (*l_53) |= (p_45 <= p_45);
        (*l_53) = (safe_rshift_func_int16_t_s_s((~(-2L)), 6));
    }
    return &g_54;
}







static int * func_48(int * p_49)
{
    return p_49;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_755, "g_755", print_hash_value);
    transparent_crc(g_855, "g_855", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
