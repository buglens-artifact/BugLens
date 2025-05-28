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



static int g_10 = 0L;
static unsigned short g_15 = 4UL;
static int g_39 = 0x0016488AL;
static unsigned g_60 = 4294967286UL;
static int g_62 = (-8L);
static int *g_61 = &g_62;
static char g_72 = 0xABL;
static short g_75 = 0xB300L;
static int g_89 = 0x93E35F20L;
static volatile int g_122 = (-9L);
static volatile unsigned g_124 = 0x84D1B33BL;
static unsigned short g_144 = 65535UL;
static int *g_145 = &g_62;
static unsigned g_148 = 4294967293UL;
static char g_180 = 0L;
static int **g_198 = &g_61;
static char *g_262 = &g_72;
static char **g_261 = &g_262;
static short g_301 = 0L;
static int g_343 = (-1L);
static char g_388 = 1L;
static char g_393 = 0xB3L;
static int g_401 = 0L;
static unsigned g_402 = 0x58972562L;
static unsigned char *g_486 = (void*)0;
static unsigned char **g_485 = &g_486;
static unsigned short g_509 = 0UL;
static int g_538 = (-3L);
static volatile short g_544 = (-1L);
static int g_555 = 0xB340CAC3L;
static unsigned short *g_567 = &g_15;
static unsigned short **g_566 = &g_567;
static volatile unsigned char g_606 = 1UL;
static volatile int g_658 = (-1L);
static volatile unsigned short g_684 = 0xD851L;
static volatile unsigned short g_782 = 65535UL;
static unsigned *g_790 = &g_402;
static unsigned **g_789 = &g_790;
static int g_819 = 0x303491F1L;
static unsigned g_822 = 6UL;
static unsigned char g_862 = 0x33L;
static int ***g_884 = (void*)0;
static int ****g_883 = &g_884;



static unsigned char func_1(void);
static int * func_2(unsigned char p_3);
static short func_4(unsigned p_5, unsigned p_6, int p_7, unsigned p_8);
static int func_22(unsigned p_23, char p_24);
static unsigned func_25(short p_26);
static short func_27(int * p_28, short p_29, unsigned p_30);
static int * func_31(unsigned p_32, int * p_33, int p_34);
static unsigned func_35(unsigned short p_36, int * p_37);
static int * func_44(unsigned p_45, int * p_46, int p_47, unsigned char p_48);
static unsigned char func_49(unsigned short p_50, int * p_51, unsigned p_52, int * p_53, unsigned p_54);
static unsigned char func_1(void)
{
    char l_9 = 3L;
    int *l_38 = &g_39;
    unsigned *l_817 = (void*)0;
    unsigned *l_818 = &g_148;
    unsigned *l_820 = (void*)0;
    unsigned *l_821 = &g_822;
    unsigned char *l_864 = (void*)0;
    unsigned char *l_865 = &g_862;
    int **l_867 = &l_38;
    int ***l_881 = &l_867;
    int ****l_880 = &l_881;
    int *****l_882 = &l_880;
    int l_885 = 0L;
    unsigned char l_886 = 0xC7L;
    unsigned char l_887 = 0x46L;
    (*l_867) = func_2(((*l_865) = ((func_4(((*l_821) = ((g_10 = l_9) | (((*l_818) = ((safe_sub_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((g_15 | (safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((-10L) == (safe_mul_func_int16_t_s_s((func_22(func_25(func_27(func_31(func_35(g_15, l_38), l_38, (*g_145)), g_89, g_15)), g_555) || (*l_38)), l_9))), 1)) ^ g_15), 4))), (**g_566))) == 0x4ADCL), 8UL)) || (*l_38))) < g_819))), l_9, g_401, g_401) | g_401) >= (-7L))));

    ;
    ;


    g_62 = g_148;
    l_887 = g_862;
    return g_39;
}







static int * func_2(unsigned char p_3)
{
    int *l_866 = &g_343;
    l_866 = (void*)0;

    ;
    return l_866;


}







static short func_4(unsigned p_5, unsigned p_6, int p_7, unsigned p_8)
{
    int ***l_825 = &g_198;
    unsigned l_829 = 4294967295UL;
    unsigned **l_845 = &g_790;
    int *l_854 = &g_819;
    int l_855 = 0xD3C810F0L;
    short *l_856 = &g_301;
    unsigned char *l_861 = &g_862;
    int **l_863 = &g_145;
    for (g_180 = 0; (g_180 == (-6)); g_180 = safe_sub_func_uint16_t_u_u(g_180, 3))
    {
        int ***l_827 = &g_198;
        int ****l_826 = &l_827;
        int l_828 = 0x36E7E63EL;
        l_828 = (l_825 == ((*l_826) = l_825));
        (*g_145) &= l_829;
        for (g_15 = 0; (g_15 == 6); g_15++)
        {
            unsigned l_837 = 0x33BFE98FL;
            int l_843 = 0xA9B5EA59L;
            if ((safe_lshift_func_int8_t_s_u(1L, 7)))
            {
                char ***l_834 = &g_261;
                short *l_838 = &g_301;
                int l_839 = 1L;
                unsigned short *l_840 = &g_509;
                int *l_844 = &g_555;
                (*l_844) |= ((*g_145) = (((((*l_834) = &g_262) != &g_262) && ((**g_261) | (safe_add_func_int8_t_s_s(p_6, (((*l_838) ^= l_837) ^ l_839))))) && (l_843 || 4L)));
                (*l_844) &= (&g_790 == (l_845 = &g_790));
                (*g_145) &= (0x13DF5487L >= (safe_lshift_func_int16_t_s_u((g_555 > (&g_822 != &p_8)), (safe_mod_func_int8_t_s_s(p_8, (**g_261))))));
            }
            else
            {
                (*g_145) = p_8;
            }
        }
        return g_15;
    }
    (*l_854) = (safe_add_func_int32_t_s_s((l_855 = ((*g_145) = ((0xF8L & (g_401 && (*g_145))) | (**g_566)))), p_5));
    (*l_863) = &l_855;

    ;
    return p_7;


}







static int func_22(unsigned p_23, char p_24)
{
    int *l_787 = (void*)0;
    int **l_788 = &g_61;
    if (p_24)
    {
        unsigned short l_796 = 0x94CCL;
        int *l_801 = &g_343;
        (*g_145) = (-1L);
        (*l_788) = (void*)0;
        if (p_23)
        {
            short *l_793 = (void*)0;
            short *l_794 = &g_301;
            int l_795 = 0x49837155L;
            (*g_145) = (((void*)0 != g_789) & (safe_mod_func_int8_t_s_s(((((((*l_794) = g_62) == p_23) && l_796) != l_796) && (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((**g_566) && l_796), p_23)) && 0L), (*g_262)))), (**g_261))));
            return (*g_145);
        }
        else
        {
            (*l_788) = l_801;

            ;
        }

        ;
        (*l_788) = l_801;
    }
    else
    {
        unsigned l_806 = 0x8C822394L;
        short *l_807 = &g_301;
        unsigned **l_808 = (void*)0;
        int l_813 = 0x1D96B2C3L;
        int *l_814 = &g_62;
        for (g_72 = (-11); (g_72 <= (-12)); g_72 = safe_sub_func_uint16_t_u_u(g_72, 6))
        {
            return (*g_145);
        }
        (*g_145) |= (-2L);
        (*g_145) = ((safe_sub_func_int16_t_s_s(((*l_807) = l_806), (p_24 < (((void*)0 != l_808) >= (+(((**g_566) ^ 0x5233L) >= p_24)))))) | p_23);
        (*g_145) = ((4L > (*g_145)) == (safe_mul_func_uint16_t_u_u(p_24, p_24)));
    }

    ;
    return p_24;
}







static unsigned func_25(short p_26)
{
    int **l_786 = &g_61;
    (*l_786) = (void*)0;

    ;
    (*g_145) = 9L;
    return g_658;
}







static short func_27(int * p_28, short p_29, unsigned p_30)
{
    (*g_145) ^= (*p_28);
    return p_29;
}







static int * func_31(unsigned p_32, int * p_33, int p_34)
{
    int *l_558 = &g_343;
    unsigned short **l_568 = &g_567;
    int l_639 = 0L;
    int l_656 = 0x9F62E9FAL;
    unsigned char **l_720 = &g_486;
    unsigned char ***l_721 = &g_485;
    int l_744 = 0xD3E77C2CL;
    int l_748 = (-9L);
    int l_753 = (-6L);
    int l_756 = 1L;
    int l_772 = 1L;
    int l_773 = 0x6E80C633L;
    int *l_785 = &l_748;
    for (g_144 = 3; (g_144 > 15); g_144 = safe_add_func_int8_t_s_s(g_144, 4))
    {
        int l_570 = (-5L);
        unsigned short ***l_571 = &g_566;
        int l_678 = 0xD3156D31L;
        unsigned *l_717 = (void*)0;
        unsigned **l_716 = &l_717;
        unsigned ***l_718 = &l_716;
    }
    (*l_558) = (safe_unary_minus_func_uint8_t_u((l_720 == ((*l_721) = l_720))));
    g_145 = func_44(((((safe_rshift_func_uint8_t_u_s((*l_558), 7)) >= (((*p_33) & ((*l_558) > (safe_add_func_int16_t_s_s((*l_558), (*l_558))))) || (((safe_lshift_func_int8_t_s_u((((*l_558) != (p_32 ^ (*g_567))) == 0x11L), p_34)) <= (-1L)) <= 0x52D2L))) <= (*l_558)) & 0x2EL), (*g_198), (*g_61), (*l_558));


    ;

    for (p_32 = 0; (p_32 <= 7); p_32++)
    {
        int *l_730 = (void*)0;
        int *l_731 = &g_39;
        int *l_732 = &g_555;
        int *l_733 = &l_639;
        int *l_734 = &g_62;
        int *l_735 = &l_656;
        int l_736 = 0x90AF5F02L;
        int *l_737 = &g_39;
        int *l_738 = &l_656;
        int l_739 = 0xDB8553A2L;
        int l_740 = 0L;
        int *l_741 = &l_656;
        int *l_742 = (void*)0;
        int *l_743 = (void*)0;
        int *l_745 = &l_656;
        int *l_746 = &l_736;
        int *l_747 = &l_736;
        int l_749 = 0L;
        int *l_750 = &g_555;
        int *l_751 = &l_744;
        int *l_752 = (void*)0;
        int *l_754 = &l_736;
        int *l_755 = (void*)0;
        int *l_757 = &g_555;
        int *l_758 = &l_639;
        int l_759 = 0x62AD116BL;
        int *l_760 = (void*)0;
        int *l_761 = &l_759;
        int l_762 = 1L;
        int *l_763 = &l_762;
        int *l_764 = &g_555;
        int *l_765 = &l_740;
        int *l_766 = &l_762;
        int *l_767 = &g_62;
        int *l_768 = (void*)0;
        int l_769 = 0x63EF2154L;
        int *l_770 = &l_769;
        int *l_771 = &l_769;
        int *l_774 = &l_656;
        int *l_775 = &l_769;
        int *l_776 = &l_749;
        int *l_777 = &l_762;
        int *l_778 = &l_749;
        int *l_779 = &g_39;
        int *l_780 = (void*)0;
        int *l_781 = (void*)0;
        (*g_145) = 0x57667E57L;
        if ((*g_145))
            break;
        g_782--;
    }
    return &g_343;


}







static unsigned func_35(unsigned short p_36, int * p_37)
{
    short l_55 = 0x423CL;
    int *l_56 = (void*)0;
    for (p_36 = 0; (p_36 > 10); p_36 = safe_add_func_int8_t_s_s(p_36, 9))
    {
        unsigned short l_57 = 65535UL;
        unsigned *l_59 = &g_60;
        int **l_553 = &g_145;
        int *l_554 = &g_555;
    }
    (*g_198) = p_37;


    return l_55;
}







static int * func_44(unsigned p_45, int * p_46, int p_47, unsigned char p_48)
{
    char l_65 = 0xA4L;
    int l_70 = 0x8DFCE249L;
    int l_114 = (-1L);
    int l_123 = 0x94720237L;
    int *l_154 = (void*)0;
    short l_155 = 0x9F6CL;
    int *l_281 = &l_114;
    unsigned short l_341 = 0x886FL;
    unsigned short l_428 = 0xDDCEL;
    unsigned short *l_530 = (void*)0;
    unsigned short *l_531 = &l_428;
    unsigned *l_532 = &g_148;
    unsigned short **l_534 = &l_530;
    unsigned short ***l_533 = &l_534;
    unsigned short **l_536 = &l_530;
    unsigned short ***l_535 = &l_536;
    unsigned short **l_537 = &l_530;
    int *l_552 = &g_39;
    if (((*p_46) &= (safe_mod_func_int16_t_s_s(g_60, 1L))))
    {
        char *l_71 = &g_72;
        unsigned short *l_73 = (void*)0;
        unsigned short *l_74 = (void*)0;
        int l_81 = 0x79B6842AL;
        int l_83 = 0xE1D62101L;
        int l_97 = 0x8A42286EL;
        int l_112 = 0x7401D8B2L;
        unsigned *l_177 = &g_148;
        unsigned char l_271 = 0xDBL;
        (*p_46) = (l_65 ^= (*g_61));
        if (((safe_add_func_uint8_t_u_u(((*g_61) < (g_39 <= ((safe_add_func_int16_t_s_s((((0x9991L != 0x39F4L) && l_65) ^ l_70), (g_75 = (p_45 | ((*l_71) = (((!(&g_60 != &p_45)) != g_62) | 0xDAL)))))) == p_45))), p_45)) >= p_47))
        {
            int *l_76 = (void*)0;
            int *l_77 = &l_70;
            int *l_78 = &g_62;
            int *l_79 = &l_70;
            int *l_80 = &l_70;
            int *l_82 = &g_39;
            int *l_84 = &g_39;
            int *l_85 = &l_70;
            int l_86 = (-1L);
            int *l_87 = &g_39;
            int *l_88 = &g_39;
            int *l_90 = &l_86;
            int *l_91 = (void*)0;
            int *l_92 = &l_86;
            int *l_93 = &l_70;
            int *l_94 = &g_39;
            int *l_95 = &g_62;
            int *l_96 = &l_70;
            int *l_98 = &g_39;
            int *l_99 = &l_81;
            int *l_100 = &g_62;
            int *l_101 = &l_86;
            int *l_102 = (void*)0;
            int *l_103 = &l_70;
            int *l_104 = &g_39;
            int *l_105 = (void*)0;
            int *l_106 = &g_62;
            int *l_107 = &l_86;
            int *l_108 = &l_83;
            int *l_109 = &l_86;
            int *l_110 = &l_97;
            int *l_111 = &l_97;
            int *l_113 = &l_83;
            int *l_115 = &l_83;
            int *l_116 = &l_86;
            int *l_117 = &g_39;
            int *l_118 = &l_112;
            int *l_119 = &l_114;
            int *l_120 = &l_83;
            int *l_121 = &l_70;
            unsigned short *l_143 = &g_144;
            unsigned l_146 = 0xA650A970L;
            unsigned *l_147 = &g_148;
            (*p_46) = (p_45 & p_47);
            g_124--;
            (*l_87) = ((((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((p_48 != (&l_65 != &g_72)) > g_75), (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((func_49(((safe_mul_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s(0x2BL, 2)) ^ (l_70 >= g_122)) | l_70), l_83)) | g_89), &g_39, l_146, &g_62, l_97) & g_75), p_47)), g_89)))), l_114)), 0x71L)) == g_72) != (-6L)) > 0x4F5AL);
            (*l_110) |= (((*l_85) = (*g_61)) <= ((*l_147) = 0x830BE999L));
        }
        else
        {
            int l_149 = 1L;
            int **l_152 = (void*)0;
            int **l_153 = (void*)0;
            unsigned short *l_160 = (void*)0;
            unsigned short *l_161 = &g_144;
            (*g_145) = (((-8L) || l_149) && ((*l_161) = func_49(func_49((+((l_149 < ((safe_sub_func_int16_t_s_s((l_123 || (&g_62 == (l_154 = (p_46 = &l_97)))), l_155)) | (safe_sub_func_uint16_t_u_u(((*l_161) = (safe_rshift_func_int8_t_s_u(((*l_71) = g_62), 1))), g_148)))) != 2L)), &g_62, g_39, &g_62, p_45), &l_123, p_47, &g_39, g_60)));

            ;
            ;
            for (g_60 = 17; (g_60 <= 57); g_60 = safe_add_func_uint16_t_u_u(g_60, 5))
            {
                int *l_168 = &g_39;
                unsigned *l_169 = &g_148;
                int *l_170 = &l_70;
                (*g_145) = (*g_61);
                (*l_168) = (safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(7L, p_47)) || ((func_49((~6UL), l_168, ((*l_169) = p_47), (l_170 = &p_47), (p_47 < g_62)) && 0x60C0ABB7L) > 0L)), p_48));

                ;
            }
        }

        ;
        ;
        if ((0x4CEF870AL && ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_48, 0)), g_60)) < ((*g_61) = (g_62 || ((*l_71) = (((g_180 = (+((safe_sub_func_uint32_t_u_u(g_39, ((*l_177) = p_48))) & (safe_add_func_uint8_t_u_u(((l_97 >= p_45) ^ (l_83 ^ 0L)), l_97))))) < (*g_145)) && g_72)))))))
        {
            int *l_181 = &l_112;
            int l_215 = 0x06647E6CL;
            int l_226 = 0xCDC6EB25L;
            int *l_283 = (void*)0;
            l_181 = &g_39;

            ;
            for (l_97 = 0; (l_97 >= 13); l_97 = safe_add_func_uint16_t_u_u(l_97, 3))
            {
                unsigned l_186 = 0xB54F4E0BL;
                int l_191 = 7L;
                unsigned char l_253 = 0x86L;
                unsigned short l_278 = 0xC644L;
            }
            for (l_155 = (-26); (l_155 == (-24)); l_155++)
            {
                int l_292 = 0x739B9925L;
                char *l_295 = &l_65;
                short *l_300 = &g_301;
                int ***l_312 = &g_198;
                (*g_145) = (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(0x2C66L, (((0x2B21L >= g_75) && ((*l_281) &= (safe_mul_func_int16_t_s_s(l_292, (((*g_262) != ((void*)0 == l_295)) >= g_62))))) > ((*l_300) = (safe_lshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(p_47, p_48)) & 0x5388961EL), 0)))))), (-8L)));
                if (((*p_46) <= (-2L)))
                {
                    (*g_198) = &l_226;
                }
                else
                {
                    unsigned short l_306 = 65530UL;
                    if (((((p_45 >= (((*l_181) | p_47) || ((safe_sub_func_int8_t_s_s(((*l_71) &= (-1L)), (((safe_mod_func_int16_t_s_s(g_62, g_301)) == l_306) || (safe_mod_func_int8_t_s_s(func_49(g_180, &l_292, p_47, (*g_198), g_144), p_45))))) != (*l_281)))) || 0x44L) <= p_47) | 1UL))
                    {
                        (**g_198) = (safe_sub_func_uint32_t_u_u(0x383916AAL, (0xD3L <= 1L)));
                    }
                    else
                    {
                        int l_311 = 9L;
                        if (l_311)
                            break;
                        (*g_61) ^= 0x1CBB092BL;
                    }
                    if (l_292)
                        break;
                    (*g_198) = (*g_198);
                }
                (*l_181) |= (((*l_312) = &p_46) != &p_46);

                ;
            }

            ;
            ;
            ;
        }
        else
        {
            char l_319 = (-8L);
            for (l_70 = (-17); (l_70 > 23); l_70 = safe_add_func_uint8_t_u_u(l_70, 1))
            {
                int l_320 = (-4L);
                unsigned short **l_323 = &l_74;
                unsigned char *l_328 = &l_271;
                short *l_329 = &g_75;
                (**g_198) = (((*l_329) = (((void*)0 == &g_262) && (safe_lshift_func_uint8_t_u_u((p_45 <= (safe_lshift_func_uint16_t_u_u((--g_144), 15))), ((*l_328) = (((0x1878L & (((*l_323) = &g_15) == &g_15)) == 0xBBE3L) != ((safe_rshift_func_uint8_t_u_u(g_75, (safe_lshift_func_int8_t_s_s((**g_261), 3)))) ^ (*g_262)))))))) || l_320);
            }

            ;
            (*g_145) = 0xC36080E9L;
        }



        ;
        ;
        for (g_60 = 0; (g_60 < 4); g_60 = safe_add_func_uint8_t_u_u(g_60, 8))
        {
            int *l_335 = &g_39;
            unsigned l_340 = 0UL;
            int ***l_342 = &g_198;
            for (g_75 = (-30); (g_75 > (-23)); g_75 = safe_add_func_uint32_t_u_u(g_75, 1))
            {
                int *l_334 = &g_62;
                (*g_145) = ((func_49((((l_112 &= ((**g_261) = (p_48 <= (func_49(p_47, l_334, ((*l_177) = 0UL), l_335, g_39) != (safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_48, ((*g_145) || (*l_334)))), (-2L))))))) || 0L) < 0xFF730B3DL), &l_114, l_340, l_335, l_81) <= l_341) > 4294967295UL);
                (*l_335) &= (*g_145);
                if ((*l_334))
                    break;
            }
            (*g_198) = &p_47;
            p_47 = g_343;
        }



    }
    else
    {
        unsigned l_411 = 4294967294UL;
        int *l_416 = (void*)0;
        unsigned l_431 = 0x8AC3DA44L;
        unsigned char l_450 = 8UL;
        int ***l_465 = &g_198;
        unsigned short *l_470 = &g_15;
        unsigned short **l_469 = &l_470;
        unsigned l_472 = 0UL;
        int l_497 = (-1L);
        short *l_527 = &l_155;
        for (p_48 = 0; (p_48 != 29); ++p_48)
        {
            unsigned char l_346 = 0x02L;
            int *l_347 = &l_70;
            int *l_348 = &g_39;
            int *l_349 = &g_343;
            int *l_350 = &g_39;
            int *l_351 = &l_70;
            int *l_352 = (void*)0;
            int *l_353 = &l_114;
            int *l_354 = &l_123;
            int *l_355 = &l_123;
            int *l_356 = &g_39;
            int *l_357 = &l_123;
            int l_358 = 0x6BEBD653L;
            int *l_359 = &g_343;
            int *l_360 = &g_62;
            int *l_361 = (void*)0;
            int *l_362 = &g_62;
            int *l_363 = (void*)0;
            int *l_364 = &l_114;
            int *l_365 = &l_123;
            int *l_366 = &l_358;
            int *l_367 = &l_114;
            int *l_368 = &l_70;
            int *l_369 = (void*)0;
            int *l_370 = &l_114;
            int *l_371 = &g_62;
            int *l_372 = (void*)0;
            int *l_373 = &l_123;
            int *l_374 = (void*)0;
            int *l_375 = &g_39;
            int *l_376 = (void*)0;
            int *l_377 = (void*)0;
            int *l_378 = &g_39;
            int *l_379 = (void*)0;
            int *l_380 = &l_123;
            int *l_381 = &l_114;
            int *l_382 = &l_114;
            int *l_383 = &g_343;
            int *l_384 = (void*)0;
            int *l_385 = &g_62;
            int *l_386 = &g_62;
            int *l_387 = &l_358;
            int *l_389 = &g_62;
            int *l_390 = &g_62;
            int *l_391 = (void*)0;
            int *l_392 = (void*)0;
            int *l_394 = &l_358;
            int *l_395 = (void*)0;
            int *l_396 = &g_62;
            int *l_397 = &l_114;
            int *l_398 = (void*)0;
            int l_399 = (-9L);
            int *l_400 = &l_70;
            if (l_346)
                break;
            (*g_61) = (*l_281);
            ++g_402;
        }
        for (l_341 = 26; (l_341 >= 50); l_341++)
        {
            int *l_415 = &l_70;
            int l_444 = (-1L);
            char l_483 = 0x9DL;
            unsigned short l_517 = 0x9E40L;
            int *l_525 = &g_62;
        }
        (*l_281) = (((*l_527) &= (***l_465)) && p_45);
    }




    ;
    if (((func_49(((*l_531) = (safe_lshift_func_int16_t_s_u((-3L), 5))), &l_70, p_47, &p_47, ((*l_532) = p_47)) && (&l_530 != (l_537 = ((*l_535) = ((*l_533) = &l_530))))) || (~(*l_281))))
    {
        unsigned short l_547 = 0UL;
        int *l_548 = &l_123;
        int *l_550 = &g_62;
        if (g_538)
        {
            unsigned char l_541 = 0x58L;
            (*l_281) = func_49(p_48, &p_47, ((safe_mul_func_uint16_t_u_u((4294967295UL <= l_541), ((safe_rshift_func_uint16_t_u_s((p_48 || g_544), (((*l_531) = p_47) <= (p_45 <= (safe_rshift_func_uint16_t_u_u((p_47 || p_45), 9)))))) == 0xDEC53D9AL))) == l_547), &g_39, l_547);
            (*g_145) = ((*l_548) = func_49(p_45, &l_70, g_122, l_548, (*l_548)));
        }
        else
        {
            int *l_549 = &l_114;
            l_549 = (p_46 = l_549);

            ;
            return l_550;




        }
    }
    else
    {
        int l_551 = 7L;
        (*l_281) |= l_551;
    }
    return l_552;




}







static unsigned char func_49(unsigned short p_50, int * p_51, unsigned p_52, int * p_53, unsigned p_54)
{
    unsigned l_58 = 4294967295UL;
    (*p_53) = g_39;
    return l_58;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_684, "g_684", print_hash_value);
    transparent_crc(g_782, "g_782", print_hash_value);
    transparent_crc(g_819, "g_819", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
