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



static unsigned g_3 = 0xF93905C8L;
static char g_19 = 0xB3L;
static int g_34 = 0L;
static int g_39 = 0xC1D686A3L;
static int * const g_38 = &g_39;
static unsigned short g_42 = 65533UL;
static int *g_82 = (void*)0;
static const int *g_95 = &g_39;
static const int **g_94 = &g_95;
static const int ***g_93 = &g_94;
static short g_101 = (-2L);
static int g_106 = 0x28949F0EL;
static unsigned g_114 = 1UL;
static unsigned g_136 = 4294967295UL;
static short **g_145 = (void*)0;
static char *g_192 = &g_19;
static char **g_191 = &g_192;
static char ***g_190 = &g_191;
static unsigned char g_203 = 0xA0L;
static char g_213 = 0x7DL;
static unsigned short g_266 = 65527UL;
static int g_341 = 0x27E7C447L;
static const unsigned char g_366 = 0x61L;
static short *g_393 = &g_101;
static short **g_392 = &g_393;
static int g_550 = 0xA1083C83L;
static unsigned char *g_604 = &g_203;
static unsigned char ** const g_603 = &g_604;
static char g_607 = (-1L);
static unsigned short **g_727 = (void*)0;
static unsigned g_772 = 0xA8CECC0AL;
static short g_848 = 0x31B8L;
static unsigned char g_910 = 0xD2L;
static const int * const *g_929 = &g_95;
static const int * const **g_928 = &g_929;
static const short **g_937 = (void*)0;
static const short ***g_936 = &g_937;
static short ***g_946 = &g_392;
static short ****g_945 = &g_946;
static short *****g_944 = &g_945;
static short ***** const *g_943 = &g_944;
static char g_948 = (-3L);



static unsigned func_1(void);
static short func_14(unsigned p_15, unsigned char p_16, unsigned p_17);
static unsigned char func_20(char * p_21, char * p_22);
static char * func_23(unsigned p_24, int p_25, int p_26);
static int * func_35(int * const p_36, int * p_37);
static int * func_40(unsigned short p_41);
static int func_43(char p_44);
static int func_45(int p_46, unsigned char p_47);
static unsigned func_55(int p_56, char p_57);
static char * func_58(char * const p_59, const unsigned char p_60, char * p_61, unsigned short p_62);
static unsigned func_1(void)
{
    const unsigned char l_743 = 255UL;
    short ******l_947 = &g_944;
    if ((safe_unary_minus_func_int16_t_s(g_3)))
    {
        unsigned l_741 = 9UL;
        char *l_899 = &g_19;
        int l_903 = 1L;
        for (g_3 = 0; (g_3 != 31); g_3 = safe_add_func_uint16_t_u_u(g_3, 1))
        {
            char *l_18 = &g_19;
            int *l_33 = &g_34;
            int **l_729 = &g_82;
            int **l_730 = (void*)0;
            int **l_731 = &g_82;
            int **l_732 = &g_82;
            int **l_733 = &g_82;
            int **l_734 = (void*)0;
            int **l_735 = &g_82;
            int **l_736 = &g_82;
            int **l_737 = &g_82;
            int **l_738 = &g_82;
            int **l_739 = (void*)0;
            int *l_740 = &g_106;
            unsigned l_742 = 0xE1EC82D2L;
            unsigned *l_744 = (void*)0;
            unsigned *l_745 = &l_741;
            int *l_921 = &g_550;
            int l_939 = (-1L);
            short l_949 = 1L;
        }
    }
    else
    {
        int l_954 = 0x2D30988FL;
        (*g_38) = (safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_743, ((***g_946) ^ l_954))), ((((safe_rshift_func_int8_t_s_s((**g_191), 4)) && l_954) & g_39) || ((***g_946) ^ l_743))));
    }
    (*g_38) = l_743;
    (*g_38) = (*g_95);
    return g_203;
}







static short func_14(unsigned p_15, unsigned char p_16, unsigned p_17)
{
    short * const *l_905 = &g_393;
    short * const **l_904 = &l_905;
    int l_908 = 0x471E1D25L;
    unsigned char *l_909 = &g_910;
    int l_915 = 0xA9414D82L;
    int *l_916 = (void*)0;
    l_916 = func_40(((&g_145 == l_904) == ((safe_rshift_func_uint8_t_u_u(((*l_909) = ((**g_603) = (l_908 || (**g_191)))), (safe_add_func_uint16_t_u_u(0x1512L, (func_43((l_915 = (safe_add_func_uint8_t_u_u(((void*)0 == &g_341), l_908)))) & 3L))))) | l_908)));



    ;
    return (*l_916);
}







static unsigned char func_20(char * p_21, char * p_22)
{
    unsigned short l_900 = 0x32A0L;
    int *l_901 = (void*)0;
    int **l_902 = &g_82;
    (*g_94) = ((*l_902) = l_901);

    ;
    ;
    return (*g_604);
}







static char * func_23(unsigned p_24, int p_25, int p_26)
{
    int *l_750 = &g_39;
    unsigned short l_860 = 65535UL;
    char *l_864 = &g_607;
    int * const l_890 = (void*)0;
    for (g_136 = 0; (g_136 > 14); g_136 = safe_add_func_uint32_t_u_u(g_136, 3))
    {
        int l_782 = 0x99694825L;
        const int *l_783 = &g_106;
        char ** const *l_789 = &g_191;
        unsigned short *l_804 = &g_266;
        unsigned short *l_805 = (void*)0;
        unsigned short *l_806 = (void*)0;
        unsigned short *l_807 = &g_42;
        unsigned l_839 = 0x3D782C50L;
        int *l_842 = (void*)0;
        unsigned l_859 = 0xC51F548DL;
        short *l_861 = &g_101;
        const char * const *l_873 = (void*)0;
        const char * const **l_872 = &l_873;
        const char * const ***l_871 = &l_872;
        int l_884 = 0x310D228CL;
        for (p_24 = 9; (p_24 > 52); ++p_24)
        {
            short l_765 = (-8L);
            int *l_787 = &g_39;
            (*g_94) = func_35(&g_106, l_750);

            ;
            for (p_26 = 20; (p_26 <= 3); --p_26)
            {
                int l_753 = 0xD291A084L;
                char *l_786 = &g_19;
                const int **l_788 = &l_783;
                (*l_750) = 0x2E6C8697L;
                if (l_753)
                {
                    char l_756 = (-1L);
                    if ((safe_add_func_int16_t_s_s((*l_750), (l_756 == 0x3E864516L))))
                    {
                        short ***l_781 = &g_392;
                        (*g_94) = (*g_94);
                        (*l_750) = (((~g_136) != (p_24 && (safe_add_func_int8_t_s_s(p_25, ((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_765, 5UL)), 6)) & ((!(safe_lshift_func_int8_t_s_u(l_756, 2))) <= (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u(g_772, (safe_sub_func_uint32_t_u_u(l_765, p_24)))) <= l_756), (*g_604))))), 0x9DC397D0L)) != p_25))))) != (***g_190));
                        l_782 = (safe_lshift_func_int8_t_s_s(((*g_604) < ((*g_95) >= p_25)), (((**g_392) = (((safe_div_func_uint32_t_u_u((l_765 > (safe_sub_func_uint32_t_u_u((((void*)0 != l_781) > (0x58L < (p_25 && (*g_95)))), p_24))), p_24)) == p_24) >= 254UL)) && (-4L))));
                    }
                    else
                    {
                        (**g_93) = l_783;

                        ;
                    }

                    ;
                }
                else
                {
                    for (l_765 = 0; (l_765 != (-30)); l_765--)
                    {
                        (*l_750) = p_24;
                        return l_786;


                    }
                }

                ;
                (*l_788) = ((*g_94) = func_35(l_750, func_35(&l_753, l_787)));

                ;
                ;
            }
        }


        ;
        (*l_750) = (9L & (p_26 != g_136));
        if (((*g_38) = (((*l_807) = ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0UL, 4294967287UL)), 15)) == ((*g_38) & (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((((*l_804) = g_39) || p_24), (*l_750))), 0x1AA0BFD9L))))) == func_43(p_26))))
        {
            unsigned l_814 = 7UL;
            int *l_823 = &g_106;
            if (((*l_823) = (safe_rshift_func_int16_t_s_u((((l_814 = (safe_sub_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(((*g_38) = (-1L)), (l_750 != (void*)0))) || 1UL), (p_24 ^ p_26)))) != (*g_192)) || (safe_rshift_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((*l_750), (safe_div_func_int16_t_s_s((**g_392), p_24)))), (*l_750))) <= (*l_750)) & (**g_191)), l_814))), p_25))))
            {
                unsigned short l_824 = 0x7F24L;
                (*l_750) = l_824;
                return (**g_190);


            }
            else
            {
                int * const l_829 = &g_34;
                int *l_831 = &g_106;
                char *****l_868 = (void*)0;
                char ****l_870 = &g_190;
                char *****l_869 = &l_870;
                const char * const ****l_874 = &l_871;
                for (g_114 = (-12); (g_114 >= 45); g_114++)
                {
                    int l_836 = 0xCCA29354L;
                    int * const l_840 = &g_34;
                    short *l_846 = (void*)0;
                    short *l_847 = &g_848;
                    for (g_101 = 0; (g_101 != 22); g_101 = safe_add_func_uint8_t_u_u(g_101, 6))
                    {
                        int *l_830 = &g_39;
                        int **l_832 = &l_823;
                        int *l_833 = &g_39;
                        (*g_94) = func_35(func_35(l_829, l_750), l_830);
                        (*l_832) = func_35(func_35(func_35(&g_106, ((*l_832) = l_831)), &g_106), l_833);

                        ;
                        (*l_823) = (safe_sub_func_uint32_t_u_u(l_836, (*g_38)));
                    }
                    if ((**g_94))
                    {
                        int * const l_837 = &g_39;
                        int **l_838 = &l_750;
                        (*g_38) = ((l_837 != ((*l_838) = &g_34)) || (((*l_829) = (***g_93)) != l_839));

                        ;
                        (*g_38) = 5L;
                        (**g_93) = func_35(l_840, &g_39);
                    }
                    else
                    {
                        int **l_841 = &l_823;
                        (**g_93) = func_35(((*l_841) = l_840), l_842);

                        ;
                        ;
                    }

                    ;
                    if ((*l_823))
                        break;
                    (*l_840) = ((safe_rshift_func_int16_t_s_s((*g_393), 6)) | (((~func_43((safe_unary_minus_func_int16_t_s(((*l_847) = p_25))))) | (*l_829)) <= 0xB851133AL));

                    ;
                }

                ;
                ;
                if (p_26)
                {
                    (*g_38) = ((*l_829) = 0x43756484L);
                }
                else
                {
                    unsigned *l_856 = &g_136;
                    unsigned **l_855 = &l_856;
                    l_783 = (*g_94);

                    ;
                    if ((((*l_804) = p_25) ^ 0xFC5BL))
                    {
                        (**g_93) = (*g_94);
                        l_831 = l_856;

                        ;
                    }
                    else
                    {
                        (**g_93) = l_856;

                        ;
                        if ((***g_93))
                            continue;
                    }

                    ;
                    ;
                    return (**g_190);


                }
                if ((*g_38))
                {
                    short **l_862 = &l_861;
                    int l_863 = 0xB54DABF6L;
                    (*g_94) = l_783;

                    ;
                    (*l_750) = (((2L & (((*g_392) == ((*l_862) = l_861)) == (*l_823))) < 65531UL) ^ l_863);
                    return l_864;


                }
                else
                {
                    int **l_865 = &l_823;
                    (**g_93) = func_35(l_842, ((*l_865) = l_823));

                    ;
                    if ((**l_865))
                        break;
                    (*g_94) = func_35((*l_865), &g_39);

                    ;
                    for (p_26 = (-9); (p_26 >= (-2)); p_26++)
                    {
                        (*l_831) = ((*l_829) <= g_3);
                        if ((*l_750))
                            continue;
                        return (**g_190);


                    }
                }

                ;
                if ((((*l_869) = &g_190) == ((*l_874) = l_871)))
                {
                    (**g_93) = func_35(func_35(l_831, l_842), l_831);

                    ;
                    if (p_26)
                    {
                        (*g_38) = (*g_38);
                    }
                    else
                    {
                        (*l_823) = 0x6BE6100DL;
                        (**g_93) = l_750;

                        ;
                        (*g_94) = l_831;

                        ;
                    }
                    (**g_93) = (*g_94);
                    l_884 = (((*l_807) = 0x5D95L) > ((*l_804) = ((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int32_t_s(((*g_95) & (-3L)))), 5)) == (((g_341 != (safe_add_func_uint32_t_u_u(((*l_829) == ((safe_div_func_uint16_t_u_u((*l_823), (safe_mod_func_int32_t_s_s((l_864 == (void*)0), g_19)))) <= (-10L))), (*l_750)))) && 0xB4F7L) && (*g_604)))));
                }
                else
                {
                    unsigned char l_885 = 0x0CL;
                    if (l_885)
                        break;
                    for (g_848 = 0; (g_848 <= (-2)); --g_848)
                    {
                        return (**g_190);


                    }
                }

                ;
            }

            ;
            ;
            (*g_94) = (*g_94);
        }
        else
        {
            (*g_38) = (*g_95);
        }

        ;
    }


    ;
    for (g_550 = 15; (g_550 < 26); g_550 = safe_add_func_int8_t_s_s(g_550, 7))
    {
        (**g_93) = l_750;

        ;
        (*l_750) = (**g_94);
    }
    (*g_94) = func_35(l_890, &g_39);

    ;
    for (p_26 = 0; (p_26 == 3); p_26 = safe_add_func_int8_t_s_s(p_26, 1))
    {
        int *l_893 = &g_39;
        int l_896 = 0L;
        (*g_94) = l_893;
        (*l_893) = (safe_div_func_int32_t_s_s(((-1L) ^ func_43(((*g_603) == l_864))), (l_896 = (*l_750))));
        (*l_750) = (0x73L < ((*g_604) = func_43((safe_sub_func_uint8_t_u_u((*g_604), (p_24 | (g_136 < p_25)))))));
    }
    return (*g_191);


}







static int * func_35(int * const p_36, int * p_37)
{
    unsigned short ***l_728 = &g_727;
    (*l_728) = g_727;
    return p_37;


}







static int * func_40(unsigned short p_41)
{
    unsigned char l_48 = 0UL;
    char *l_65 = &g_19;
    unsigned l_66 = 0xBE618B25L;
    char **l_150 = &l_65;
    const char l_421 = (-1L);
    int *l_428 = &g_39;
    unsigned char l_480 = 0x31L;
    short l_483 = 1L;
    unsigned l_509 = 0x82322006L;
    unsigned *l_600 = (void*)0;
    unsigned **l_599 = &l_600;
    short **l_644 = (void*)0;
    short *****l_648 = (void*)0;
    unsigned char **l_685 = &g_604;
    int *l_726 = (void*)0;
    if (func_43(((func_45(((((((((l_48 == (safe_lshift_func_uint16_t_u_u((0xE905L || ((safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(func_55((0xD2BBL <= ((0L > (65535UL < (((*l_150) = func_58(&g_19, (1L & (safe_lshift_func_uint8_t_u_u(g_19, 2))), l_65, l_66)) != (void*)0))) ^ p_41)), g_19), 0x9593A49EL)), g_19)) && l_66)), g_3))) | l_66) && 0x08E25E92L) < 0x5B8FL) != l_66) | 0x69L) != 0xD4B51E4AL) && p_41), p_41) <= p_41) <= g_19)))
    {
        short ***l_425 = &g_145;
        short ****l_424 = &l_425;
        short *****l_423 = &l_424;
        int l_460 = 0L;
        int *l_520 = &l_460;
        if (l_421)
        {
            short *****l_422 = (void*)0;
            short ******l_426 = &l_423;
            char ***l_434 = &g_191;
            char ****l_435 = &l_434;
            char ****l_436 = &g_190;
            unsigned char *l_439 = &l_48;
            int l_449 = (-9L);
            unsigned char l_463 = 0x89L;
            unsigned *l_484 = &g_114;
            unsigned l_491 = 0x4FAAABB8L;
            unsigned char l_527 = 0x24L;
            if ((l_422 != ((*l_426) = l_423)))
            {
                int **l_427 = &g_82;
                (**g_93) = ((*l_427) = (void*)0);

                ;
                ;
                l_428 = l_428;
                (**g_93) = (*g_94);
            }
            else
            {
                for (g_203 = 4; (g_203 < 52); ++g_203)
                {
                    int *l_431 = &g_39;
                    (*g_94) = (*g_94);
                    l_431 = l_428;
                    (**g_93) = (*g_94);
                }
                (*g_94) = (void*)0;

                ;
            }

            ;
            if ((safe_lshift_func_uint8_t_u_u((((*l_435) = l_434) != ((*l_436) = &g_191)), ((*l_439) = (safe_lshift_func_uint16_t_u_u((p_41 = 65535UL), 2))))))
            {
                unsigned *l_444 = &g_114;
                const char l_461 = 1L;
                int l_462 = 0xF0915C99L;
                const int *l_464 = &l_460;
                if (((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((((*l_444) = g_39) < (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(func_43(l_449), 4)) || ((((safe_mod_func_int8_t_s_s((***g_190), ((func_43((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(((*g_393) = ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((((0x437D2ABBL || (4294967293UL <= p_41)) ^ p_41) | p_41) <= p_41), 5)), l_449)) <= 9UL)), (-1L))), g_39))) ^ 0xC41A2DBAL) ^ 0x4DD0L))) || (*g_38)) ^ p_41) < l_460)), 14))), 8UL)), p_41)) > (*l_428)))
                {
                    (*l_428) = l_463;
                }
                else
                {
                    (*g_94) = l_428;
                }

                ;
                (*g_94) = (void*)0;

                ;
                l_464 = (**g_93);

                ;
            }
            else
            {
                unsigned **l_485 = &l_484;
                int l_488 = 0x75723CCAL;
                char ** const *l_542 = (void*)0;
                char ** const **l_541 = &l_542;
                (*g_38) = (*l_428);
                (**g_93) = &l_449;

                ;
                for (g_42 = (-12); (g_42 < 56); g_42 = safe_add_func_uint16_t_u_u(g_42, 1))
                {
                    unsigned char **l_468 = &l_439;
                    unsigned char ***l_467 = &l_468;
                    int l_475 = 0x537D9901L;
                    char *l_478 = (void*)0;
                    char *l_479 = &g_213;
                    (*g_94) = (**g_93);
                    (*l_467) = (void*)0;

                    ;
                    if (((safe_mod_func_uint8_t_u_u(g_341, (0xF4B5L || 65535UL))) || (safe_add_func_uint16_t_u_u(65535UL, func_43((l_480 = ((*l_479) = (((l_475 || (safe_sub_func_int32_t_s_s(0x5249B644L, 8L))) ^ (p_41 < p_41)) & p_41))))))))
                    {
                        (*g_94) = &l_449;

                        ;
                    }
                    else
                    {
                        (*g_94) = (*g_94);
                        if (l_463)
                            continue;
                        l_483 = (func_43((***g_190)) < ((l_460 = ((*g_393) | p_41)) > g_3));

                        ;
                    }
                }

                ;
                if (((((*l_485) = l_484) == (void*)0) == (((safe_mod_func_int16_t_s_s((l_488 | 0xF815L), ((**g_191) || p_41))) && 0x6384L) > p_41)))
                {
                    char l_498 = 4L;
                    (*l_428) = (~(***g_93));
                    for (g_341 = 0; (g_341 <= 0); g_341++)
                    {
                        unsigned l_492 = 4294967286UL;
                        int *l_495 = &l_488;
                        if (l_491)
                            break;
                        l_492 = func_43((***g_190));

                        ;
                        (*l_428) = ((func_43((g_136 || (p_41 != l_492))) != 0xF5L) && l_488);
                        (*l_495) = ((*l_428) = l_492);
                    }
                    if ((safe_lshift_func_int16_t_s_u(p_41, p_41)))
                    {
                        (*l_428) = p_41;
                    }
                    else
                    {
                        int l_514 = 0xD59CA45EL;
                        int *l_515 = &l_460;
                        (*l_428) = p_41;
                        (*l_515) = (((*l_428) = ((safe_sub_func_uint32_t_u_u(0x1FEC4C33L, ((**l_485) = (p_41 <= (((safe_mod_func_int32_t_s_s(l_449, (safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(p_41, func_43((0x18AE3D7AL > ((p_41 ^ l_460) == p_41))))), l_488)))) == l_514) | 9L))))) | p_41)) || p_41);

                        ;
                    }
                }
                else
                {
                    int l_518 = 0x1A3B16C7L;
                    int l_519 = 0xCA076E5CL;
                    char ****l_539 = &g_190;
                    char *****l_540 = &l_436;
                    unsigned char *l_549 = &g_203;
                    if ((((**g_191) < (((0x93L == l_518) <= ((1L ^ (*l_428)) != (l_519 = l_488))) == (-7L))) <= 0x47L))
                    {
                        (*g_94) = (void*)0;

                        ;
                    }
                    else
                    {
                        (*g_94) = &l_488;

                        ;
                        l_520 = &l_449;

                        ;
                    }

                    ;
                    ;
                    for (l_491 = 0; (l_491 > 31); ++l_491)
                    {
                        int *l_528 = &l_519;
                        (*g_94) = (**g_93);
                        (*g_38) = (safe_rshift_func_int16_t_s_s((0L || (safe_mod_func_uint32_t_u_u(g_106, func_43(p_41)))), ((*l_428) <= l_527)));

                        ;
                        return &g_106;



                    }
                    (*l_520) = (safe_add_func_int8_t_s_s((***g_190), ((safe_sub_func_uint16_t_u_u((((safe_div_func_int32_t_s_s(l_518, p_41)) >= (safe_rshift_func_uint8_t_u_u((g_550 = ((*l_549) = ((*l_439) = ((((safe_add_func_int32_t_s_s((((*l_540) = l_539) == l_541), (p_41 <= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(((0x013763A9L == l_488) <= (safe_lshift_func_uint16_t_u_s(((g_42 <= l_518) <= 65533UL), 11))), g_136)), 15))))) || 0xE2L) | p_41) < l_527)))), p_41))) && g_3), (*l_428))) ^ l_449)));
                }

                ;
                ;
            }


            ;
            for (l_463 = 0; (l_463 >= 57); l_463++)
            {
                for (l_66 = 21; (l_66 <= 6); l_66 = safe_sub_func_uint16_t_u_u(l_66, 2))
                {
                    char **l_559 = &l_65;
                    unsigned short *l_566 = (void*)0;
                    unsigned short *l_567 = &g_42;
                    (**g_93) = &l_460;

                    ;
                    (*l_520) = ((l_463 | (((*l_484) = ((**g_392) > (safe_div_func_uint8_t_u_u(p_41, (*l_520))))) == (safe_lshift_func_int16_t_s_s((!((void*)0 != l_559)), ((safe_div_func_uint32_t_u_u(p_41, (***g_93))) ^ ((*l_428) = (safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((*l_567) = l_449), g_203)), p_41)))))))) && g_366);
                }
            }


        }
        else
        {
            int **l_568 = &l_520;
            int **l_569 = (void*)0;
            int **l_570 = &l_428;
            (*g_38) = (**g_94);
            (**g_93) = (**g_93);
            l_460 = ((((*l_568) = &g_106) != ((*l_570) = l_428)) || 0x24A4L);

            ;
        }



        for (g_101 = 0; (g_101 >= (-10)); g_101 = safe_sub_func_int32_t_s_s(g_101, 9))
        {
            char *l_575 = &g_213;
            int l_576 = 0L;
            int l_577 = (-4L);
            unsigned char *l_578 = (void*)0;
            unsigned l_579 = 0x74BF43E6L;
            short *l_580 = &l_483;
            unsigned short *l_605 = &g_266;
            char *l_606 = &g_607;
            l_577 = ((*l_428) = (safe_lshift_func_uint16_t_u_u((p_41 != ((((*l_580) = (((l_576 = ((*l_575) = (*l_428))) < (l_579 = l_577)) < (*l_428))) || (*g_393)) >= ((safe_add_func_int32_t_s_s(p_41, (safe_sub_func_uint32_t_u_u(g_3, (safe_rshift_func_int16_t_s_u(l_577, 7)))))) < func_43((**g_191))))), l_577)));

            ;
            (*g_38) = (((*g_604) = (((*l_606) = (***g_190)) || 1L)) || (*l_428));
            (*g_94) = (*g_94);
        }
    }
    else
    {
        char **l_614 = &g_192;
        int l_618 = 1L;
        int l_627 = (-3L);
        int *l_656 = &l_618;
        const unsigned char *l_673 = &l_480;
        unsigned char *l_676 = &l_480;
        short ***l_693 = &l_644;
        short ****l_692 = &l_693;
        short *****l_691 = &l_692;
        for (g_136 = 0; (g_136 < 5); ++g_136)
        {
            char l_615 = (-6L);
            unsigned short *l_619 = (void*)0;
            unsigned short *l_620 = (void*)0;
            unsigned short *l_621 = &g_42;
            int *l_628 = &l_627;
            short **l_664 = &g_393;
            unsigned char *l_675 = &g_203;
            unsigned l_682 = 0x806480FBL;
            if (((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s(func_43((p_41 < (l_615 != (safe_add_func_uint32_t_u_u((((*l_621) = ((l_618 = 0UL) > 0UL)) & ((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((0x2D93L | (safe_unary_minus_func_uint16_t_u(p_41))), p_41)), g_266)) && p_41)), (*g_95)))))), l_615)), l_627)) != p_41))
            {
                int *l_629 = &l_627;
                char *l_637 = &g_213;
                short ***l_647 = (void*)0;
                short ****l_646 = &l_647;
                short **** const *l_645 = &l_646;
                int *l_678 = (void*)0;
                const int *l_680 = &g_39;
                l_629 = l_628;
                if (((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((*l_629) & ((~p_41) != (safe_rshift_func_uint16_t_u_u((*l_629), 9)))))), 0x28L)) ^ (safe_lshift_func_uint16_t_u_s((((p_41 && ((func_43((l_618 = ((*l_637) = ((*l_628) <= p_41)))) | (-2L)) ^ p_41)) < (*g_38)) ^ 1UL), l_627))))
                {
                    unsigned l_641 = 0x54518FB6L;
                    short ******l_649 = &l_648;
                    short *****l_651 = &l_646;
                    short ******l_650 = &l_651;
                    short ***l_665 = &g_392;
                    char * const l_672 = &g_19;
                    const unsigned char **l_674 = &l_673;
                    int l_677 = 0xB0E2C566L;
                    if ((safe_lshift_func_uint16_t_u_u((((*l_637) = (safe_unary_minus_func_uint8_t_u((l_641 != (safe_div_func_int16_t_s_s((+(l_644 == &g_393)), (((8UL != (l_645 != ((*l_650) = ((*l_649) = l_648)))) | ((void*)0 == &g_191)) | (***g_190)))))))) <= 255UL), 0)))
                    {
                        int **l_657 = &l_628;
                        (**g_93) = ((*l_657) = l_656);

                        ;
                        ;
                        (*g_94) = (*l_657);
                    }
                    else
                    {
                        if ((**g_94))
                            break;
                        (*l_428) = p_41;
                        (**g_93) = (void*)0;

                        ;
                        (*l_428) = (!p_41);
                    }

                    ;
                    ;
                    ;
                    (*l_428) = (((*l_628) && (safe_sub_func_uint8_t_u_u(((*g_604) = (safe_lshift_func_uint16_t_u_s((*l_628), (*l_628)))), (*l_628)))) | ((l_664 = ((*l_665) = l_664)) == &g_393));
                    if ((((*l_629) >= (((*g_393) & ((safe_sub_func_uint8_t_u_u((**g_603), func_43((**g_191)))) && (safe_rshift_func_uint8_t_u_u((l_672 == l_672), 2)))) > (((l_677 = (((*l_674) = l_673) == (l_676 = l_675))) == p_41) > p_41))) && g_607))
                    {
                        (*l_629) = ((*g_38) = (*l_428));
                        (*g_94) = (**g_93);
                        (**g_93) = &l_677;

                        ;
                        (**g_93) = l_678;

                        ;
                    }
                    else
                    {
                        short ***l_679 = &l_664;
                        (*l_656) = (&g_392 == ((**l_645) = l_679));

                        ;
                        (**g_93) = &l_677;

                        ;
                    }

                    ;
                    ;
                    ;
                    l_680 = (*g_94);

                    ;
                }
                else
                {
                    int *l_681 = &g_106;
                    return l_681;


                }


                ;
                ;
                ;

                (*l_656) = func_43(l_682);

                ;
            }
            else
            {
                int l_690 = 0x1446D9E0L;
                if (func_43((safe_rshift_func_int8_t_s_u(1L, 3))))
                {
                    unsigned short l_694 = 0x7144L;
                    int *l_707 = &g_106;
                    int *l_708 = &g_550;
                    int *l_709 = (void*)0;
                    int *l_710 = &g_341;
                    char l_715 = 0x2EL;
                    unsigned char ***l_725 = &l_685;
                    (*g_38) = (1UL <= p_41);
                    if ((safe_add_func_int32_t_s_s(p_41, 0x42D005B8L)))
                    {
                        return &g_106;


                    }
                    else
                    {
                        char *l_703 = (void*)0;
                        char *l_704 = &g_213;
                        (**g_93) = &l_690;

                        ;
                        (*l_656) = ((*g_38) = ((**g_392) >= (safe_mod_func_uint32_t_u_u(p_41, 1UL))));
                        (**g_93) = l_707;

                        ;
                    }

                    ;
                    (*l_428) = p_41;
                }
                else
                {
                    (*g_94) = (**g_93);
                }

                ;
                (*g_94) = l_628;

                ;
            }

            ;
        }

        ;
        ;
        (*g_94) = (**g_93);
    }



    (*g_94) = l_428;

    ;
    (*g_94) = l_726;

    ;
    return &g_106;


}







static int func_43(char p_44)
{
    int *l_420 = &g_39;
    (**g_93) = l_420;

    ;
    return (*l_420);
}







static int func_45(int p_46, unsigned char p_47)
{
    char l_253 = 0x28L;
    char **l_256 = &g_192;
    short *l_261 = &g_101;
    unsigned short *l_262 = (void*)0;
    unsigned short *l_263 = &g_42;
    unsigned char l_264 = 0x67L;
    unsigned short *l_265 = &g_266;
    int l_267 = 0x54BAD24CL;
    short ***l_305 = &g_145;
    int l_368 = (-1L);
    int **l_381 = &g_82;
    int ***l_380 = &l_381;
    (*g_38) = func_55(g_39, (**g_191));
    if ((safe_sub_func_uint16_t_u_u(g_213, (safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((l_267 = (((*l_265) = (safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((((safe_mod_func_int32_t_s_s((l_253 >= (safe_sub_func_int8_t_s_s(((l_256 != ((*g_190) = l_256)) || ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((*l_261) = l_253), (0x9BF4L & ((*l_263) = (1L | (&l_256 != &l_256)))))), g_106)) ^ l_264)), l_253))), g_19)) != p_46) ^ p_47), g_136)), l_253))) && g_213)), 15)) >= l_264), l_253)))))
    {
        int *l_268 = &g_39;
        int **l_269 = &l_268;
        (**g_93) = (void*)0;

        ;
        (*g_38) = 0x2959A4AAL;
        (**g_93) = ((*l_269) = l_268);

        ;
    }
    else
    {
        char *l_274 = (void*)0;
        char *l_275 = &l_253;
        int l_276 = 0xE4B54E12L;
        short *l_283 = &g_101;
        short ** const *l_306 = (void*)0;
        short ****l_321 = &l_305;
        int l_370 = 0xD4794F53L;
        unsigned char *l_404 = (void*)0;
        unsigned char **l_403 = &l_404;
        if ((safe_rshift_func_uint16_t_u_s((((*l_275) = (p_46 & (~(((func_55((safe_rshift_func_uint16_t_u_u((p_47 < p_46), g_3)), (!l_267)) > p_47) > (**g_191)) & 0xC1L)))) && l_276), 7)))
        {
            unsigned short *l_282 = &g_42;
            short **l_284 = &l_261;
            short **l_285 = &l_283;
            int *l_286 = &l_276;
            int l_287 = 0x746A5809L;
            int *l_288 = &l_267;
            short ****l_324 = &l_305;
            if (((safe_unary_minus_func_uint8_t_u((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((&g_203 == (void*)0) >= (l_287 = ((*l_286) = ((*g_38) = ((((l_282 == (void*)0) >= g_42) && ((*l_263) = (((*l_285) = ((*l_284) = l_283)) != l_265))) ^ 0x4925L))))) > ((*l_288) = p_47)), p_46)), p_47)))) || (*l_288)))
            {
                short **l_291 = &l_283;
                int l_301 = 0L;
                short ** const **l_307 = &l_306;
                int l_308 = 0xDD29B11EL;
                short *****l_322 = (void*)0;
                short *****l_323 = &l_321;
                for (l_276 = 0; (l_276 < 3); l_276 = safe_add_func_uint32_t_u_u(l_276, 3))
                {
                    short **l_296 = &l_283;
                    int l_302 = (-1L);
                    (**g_93) = &l_267;

                    ;
                    (**g_93) = (**g_93);
                    (*g_38) = func_55((l_291 == l_284), ((safe_rshift_func_uint8_t_u_s(247UL, 0)) | (p_47 || ((safe_lshift_func_uint8_t_u_s((((&l_261 != l_296) && ((!p_47) == (((((l_301 = (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((l_276 && (p_46 & p_46)), l_301)), l_302))) != 65530UL) >= 65535UL) >= (**g_94)) >= p_46))) | p_47), 7)) | l_302))));


                    if (p_47)
                        break;
                }


                if ((((1UL > ((l_305 != ((*l_307) = l_306)) || l_308)) && (((safe_sub_func_int8_t_s_s((+0xE0L), (((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s(0xAEE22B1FL, (safe_lshift_func_int16_t_s_u((l_276 && (p_46 < ((*l_265) = (safe_mod_func_int16_t_s_s((((*l_323) = l_321) == l_324), g_42))))), 11)))), 0xD949C42CL)) < 0L) != l_308))) >= l_276) < 7UL)) > p_47))
                {
                    (*l_288) = 0x79E7B3D9L;
                }
                else
                {
                    short ***l_329 = (void*)0;
                    unsigned char *l_332 = &l_264;
                    int l_367 = 0x88CE28C6L;
                    unsigned *l_379 = (void*)0;
                    if ((func_55((p_46 = ((safe_div_func_uint8_t_u_u(p_47, p_47)) >= ((safe_sub_func_uint8_t_u_u(p_47, func_55(g_266, (&g_145 != l_329)))) >= (safe_lshift_func_uint8_t_u_s(((*l_332) = p_47), (l_267 == g_101)))))), (**g_191)) != l_276))
                    {
                        return p_47;


                    }
                    else
                    {
                        int **l_335 = &g_82;
                        short *l_338 = &g_101;
                        int l_344 = 0x6154BDA2L;
                        (*l_286) = ((safe_lshift_func_int8_t_s_u((*g_192), ((void*)0 == l_335))) & ((*l_282) = l_308));
                        (*l_335) = &l_267;

                        ;
                        l_344 = (g_106 & (safe_add_func_int16_t_s_s((l_267 = (((253UL <= ((l_338 == l_338) == (safe_rshift_func_int8_t_s_u((l_253 <= g_39), (**l_335))))) ^ (g_341 = 0L)) | (safe_add_func_uint32_t_u_u(p_46, 4294967295UL)))), l_276)));
                        (*l_335) = &l_308;

                        ;
                    }

                    ;
                    for (g_39 = 25; (g_39 > 9); g_39--)
                    {
                        char ****l_352 = &g_190;
                        const unsigned char **l_363 = (void*)0;
                        const unsigned char *l_365 = &g_366;
                        const unsigned char **l_364 = &l_365;
                        int l_369 = (-4L);
                        (*g_82) = (safe_div_func_int16_t_s_s(((safe_add_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((((l_276 = (!((((((*l_352) = &g_191) == (void*)0) <= ((g_203 = (l_276 && (l_368 = (safe_lshift_func_uint16_t_u_s(g_213, (((*l_288) = ((((safe_add_func_int8_t_s_s(((*l_275) = (safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((~(g_42 & (+(safe_sub_func_int16_t_s_s(((((*l_364) = &p_47) == &g_203) > 0x7AL), ((&l_307 == (void*)0) & g_213)))))), l_308)), l_276))), l_367)) || (*g_82)) == l_276) != 0L)) != l_308)))))) & (-7L))) >= l_369) | l_369))) > l_369) | l_370))), 1L)) || 4L), g_19));

                        ;
                    }
                    (*g_94) = &l_287;

                    ;
                    (*g_82) = ((((*g_94) != (*g_94)) == ((((safe_div_func_int8_t_s_s((*l_288), ((safe_div_func_uint32_t_u_u(((l_367 && 6L) && (g_101 == ((l_367 < (safe_lshift_func_int8_t_s_u((g_266 & ((l_368 = l_367) && 0x33C78702L)), g_42))) ^ 0xDC22L))), 1UL)) ^ (***g_93)))) == l_267) != (***g_190)) >= g_101)) & 0UL);
                }

                ;

            }
            else
            {
                char ****l_382 = &g_190;
                short **l_391 = &l_283;
                if ((l_380 == (void*)0))
                {
                    (*l_286) = ((l_382 == (void*)0) >= 0UL);
                }
                else
                {
                    unsigned l_387 = 4294967288UL;
                    const unsigned l_394 = 0x98A097C5L;
                    int *l_395 = &l_267;
                    for (l_370 = 12; (l_370 < (-28)); l_370 = safe_sub_func_int8_t_s_s(l_370, 2))
                    {
                        unsigned char *l_390 = &l_264;
                        (*g_38) = ((*l_286) = (((safe_add_func_uint32_t_u_u(l_387, (((~((*l_275) = (safe_rshift_func_uint16_t_u_u(((*l_282) = func_55((*l_288), (***g_190))), g_3)))) > (*g_192)) & ((*l_390) = p_47)))) == ((l_391 == g_392) && (*g_393))) <= l_394));
                        l_395 = &g_39;

                        ;
                        return (*g_38);
                    }
                }
                (*g_94) = &l_287;

                ;
            }



            (*g_94) = &l_276;

            ;
            (*g_94) = (**g_93);
            (*g_38) = (~((*l_286) = p_46));
        }
        else
        {
            int *l_417 = &g_106;
            for (l_368 = 15; (l_368 != 20); l_368 = safe_add_func_int8_t_s_s(l_368, 9))
            {
                unsigned char *l_400 = &l_264;
                int l_405 = 7L;
                int l_410 = 1L;
                (*g_38) = ((((*l_400) = (safe_div_func_uint16_t_u_u(p_46, g_203))) <= (p_47 <= (p_47 || (safe_sub_func_int8_t_s_s(((void*)0 == l_403), (p_47 < l_405)))))) & ((safe_lshift_func_uint8_t_u_u(((((l_410 = (g_266 = ((safe_rshift_func_uint16_t_u_s((g_39 & p_46), 2)) || (*g_192)))) ^ p_47) ^ 0UL) >= (*g_393)), g_101)) && 0x6F04L));
                for (p_46 = 24; (p_46 <= (-15)); p_46 = safe_sub_func_uint16_t_u_u(p_46, 1))
                {
                    (**l_380) = &l_410;

                    ;
                    (***l_380) = (safe_lshift_func_uint16_t_u_s(p_47, 8));
                    for (g_114 = 0; (g_114 == 50); ++g_114)
                    {
                        (*l_381) = l_417;

                        ;
                    }

                    ;
                    if (p_47)
                        continue;
                }


            }


        }



        return (*g_38);


    }

    ;
    for (p_46 = 0; (p_46 > (-25)); p_46--)
    {
        (*l_381) = (void*)0;

        ;
        return p_47;
    }
    (**g_93) = (**l_380);

    ;
    return l_267;
}







static unsigned func_55(int p_56, char p_57)
{
    short *l_155 = (void*)0;
    unsigned short *l_156 = &g_42;
    int l_160 = 0x2C81858AL;
    char *l_170 = &g_19;
    char **l_169 = &l_170;
    unsigned short l_179 = 0x1A91L;
    int l_180 = (-1L);
    short l_228 = 0xC598L;
    if (((((((p_56 < g_3) <= (safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((*l_156) = (l_155 != l_155)), 0xDD18L)), g_19))) ^ g_136) <= (l_156 == l_156)) | p_57) ^ 5UL))
    {
        (*g_94) = &g_106;

        ;
        (*g_38) = (safe_mod_func_int32_t_s_s((*g_38), p_57));
        return g_39;
    }
    else
    {
        unsigned l_159 = 1UL;
        (*g_38) = l_159;
    }
    if ((((l_160 >= l_160) && p_57) | (safe_sub_func_uint16_t_u_u(g_101, (&g_42 == (void*)0)))))
    {
        int **l_166 = (void*)0;
        int ***l_165 = &l_166;
        int **l_168 = &g_82;
        int ***l_167 = &l_168;
        (*g_38) = (p_57 == (((*l_165) = (void*)0) != ((*l_167) = &g_82)));
        if (p_57)
        {
            (**l_167) = (**l_167);
            return g_3;
        }
        else
        {
            char ***l_171 = &l_169;
            (**g_93) = &l_160;

            ;
            (**g_93) = &l_160;
            (*l_171) = l_169;
            for (g_42 = 0; (g_42 < 28); g_42++)
            {
                int *l_174 = (void*)0;
                (*g_94) = l_174;

                ;
            }

            ;
        }

        ;
        (*g_38) = (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(l_179, g_39)), l_180));
    }
    else
    {
        int *l_181 = &g_39;
        char * const *l_189 = &l_170;
        char * const **l_188 = &l_189;
        int l_216 = 0x1FBBDD62L;
        (*g_38) = p_57;
        (*g_38) = p_57;
        (*g_94) = l_181;

        ;
        if ((g_42 != g_136))
        {
            for (g_39 = 17; (g_39 > (-14)); --g_39)
            {
                char ****l_193 = (void*)0;
                char ****l_194 = &g_190;
                int *l_195 = &g_39;
                int l_214 = 0xA2F0C718L;
                if ((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(g_19, (l_188 != ((*l_194) = g_190)))), 7L)))
                {
                    short **l_198 = &l_155;
                    short ***l_199 = (void*)0;
                    short ***l_200 = &g_145;
                    unsigned char *l_202 = &g_203;
                    int l_211 = (-3L);
                    (*g_94) = l_195;
                    if ((safe_add_func_int8_t_s_s((l_198 == ((*l_200) = g_145)), ((*l_202) = (((-1L) < l_180) != (safe_unary_minus_func_int32_t_s((*l_195))))))))
                    {
                        int *l_204 = &g_106;
                        char *l_212 = &g_213;
                        (*l_204) = 0xCD9E10D4L;
                        l_214 = (((*l_212) = ((safe_rshift_func_int16_t_s_u(0xA948L, (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_202) = (p_56 && l_211)), 2)), g_136)))) & (-1L))) > l_211);
                    }
                    else
                    {
                        short *l_215 = &g_101;
                        if (p_56)
                            break;
                        l_211 = (l_215 != &g_101);
                        l_216 = (-6L);
                    }
                }
                else
                {
                    int *l_217 = &g_106;
                    (**g_93) = (**g_93);
                    (*l_217) = (*l_195);
                }
            }
        }
        else
        {
            char l_220 = 0x8BL;
            for (p_57 = 0; (p_57 != (-3)); p_57 = safe_sub_func_int32_t_s_s(p_57, 6))
            {
                int l_231 = 0xBD25B421L;
                int *l_232 = (void*)0;
                (**g_93) = &l_160;

                ;
                (*l_181) = (**g_94);
                l_180 = l_220;
                if ((*l_181))
                {
                    short * const l_221 = &g_101;
                    int l_222 = 6L;
                    unsigned *l_223 = &g_114;
                    int **l_230 = &l_181;
                    int ***l_229 = &l_230;
                    if (((((*l_181) = ((((**g_94) & (~g_213)) <= (***g_190)) >= ((*l_223) = (!((l_221 == (void*)0) | l_222))))) <= ((1UL < (***g_93)) && (safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(l_228, (-10L))), p_57)))) | p_57))
                    {
                        (*g_94) = (*g_94);
                    }
                    else
                    {
                        (*l_181) = ((void*)0 != l_229);
                        (*g_38) = l_231;
                        (**g_93) = (*l_230);

                        ;
                    }

                    ;
                    (**g_93) = l_232;

                    ;
                    if (((*g_38) = (g_42 ^ p_57)))
                    {
                        return l_220;
                    }
                    else
                    {
                        char l_235 = 0xE6L;
                        int *l_236 = &l_160;
                        (*l_236) = ((**l_230) = (safe_sub_func_uint8_t_u_u(p_56, l_235)));
                    }
                    (*g_38) = (safe_sub_func_uint32_t_u_u(p_56, 5L));
                }
                else
                {
                    for (g_203 = 14; (g_203 == 2); g_203 = safe_sub_func_int16_t_s_s(g_203, 8))
                    {
                        return p_56;


                    }
                }

                ;
            }

            ;
            (*l_181) = l_220;
        }

        ;
    }

    ;
    return g_101;


}







static char * func_58(char * const p_59, const unsigned char p_60, char * p_61, unsigned short p_62)
{
    char l_74 = 0x10L;
    int **l_75 = (void*)0;
    int *l_87 = &g_39;
    short *l_100 = &g_101;
    for (g_42 = 17; (g_42 <= 37); ++g_42)
    {
        int *l_71 = &g_39;
        const unsigned l_73 = 0x616691CFL;
        int ***l_76 = &l_75;
        for (p_62 = 0; (p_62 > 10); p_62++)
        {
            const int *l_72 = &g_39;
            (*g_38) = ((l_71 != l_72) ^ g_3);
        }
        l_74 = l_73;
        (*l_76) = l_75;
    }
    for (l_74 = 0; (l_74 != (-3)); l_74--)
    {
        int *l_84 = &g_39;
        int *l_88 = &g_39;
        if (((*g_38) = (p_60 & (~g_3))))
        {
            char *l_79 = &g_19;
            return l_79;


        }
        else
        {
            int *l_81 = &g_39;
            int **l_80 = &l_81;
            g_82 = ((*l_80) = &g_39);

            ;
            if ((*g_38))
            {
                unsigned l_83 = 0UL;
                (*g_38) = p_60;
                if (l_83)
                    continue;
            }
            else
            {
                return p_61;


            }
            (*l_80) = l_84;
            for (g_42 = 5; (g_42 >= 55); g_42 = safe_add_func_int8_t_s_s(g_42, 3))
            {
                (*l_81) = 0x3D2215ACL;
            }
        }

        ;
        l_88 = l_87;
    }

    ;
    (*l_87) = ((((*p_59) == ((safe_lshift_func_uint8_t_u_u((0xB4L > (safe_lshift_func_uint16_t_u_s(g_3, ((*l_100) = (+(((((*p_61) & ((*g_38) > (((((g_93 == &g_94) <= 0x94L) < (safe_rshift_func_uint16_t_u_s(((safe_div_func_uint32_t_u_u(0xA905BEA6L, p_62)) >= p_62), 7))) | (*l_87)) >= p_60))) != 0xFEL) < p_60) == 0x9AAE9A15L)))))), p_62)) < (-1L))) != (*p_61)) > 255UL);
    if ((*l_87))
    {
        short l_116 = 0xFD42L;
        (*g_94) = (void*)0;

        ;
        if (p_62)
        {
            unsigned l_107 = 0xAB65697BL;
            char *l_109 = &g_19;
            char **l_108 = &l_109;
            for (g_42 = 0; (g_42 == 44); g_42 = safe_add_func_int8_t_s_s(g_42, 3))
            {
                int l_104 = 1L;
                int *l_105 = &g_106;
                char ***l_110 = &l_108;
                unsigned *l_113 = &g_114;
                l_107 = ((*l_105) = ((*g_38) = l_104));
                (*l_110) = l_108;
                (*l_105) = ((*g_38) = (l_107 != ((*l_113) = (safe_sub_func_uint32_t_u_u(((*g_38) & p_62), ((*l_87) > p_62))))));
            }
        }
        else
        {
            char l_115 = 0x16L;
            unsigned *l_119 = (void*)0;
            unsigned *l_120 = &g_114;
            unsigned short *l_121 = &g_42;
            (*g_94) = l_87;

            ;
            (*l_87) = (((l_115 & l_116) < ((*l_121) = ((safe_sub_func_uint32_t_u_u(((l_115 <= ((*l_120) = g_101)) != g_106), p_62)) || ((void*)0 == &g_19)))) ^ g_106);
        }

        ;
    }
    else
    {
        const unsigned short l_122 = 5UL;
        char *l_144 = &g_19;
        const int *l_147 = &g_39;
        const int **l_146 = &l_147;
        if (l_122)
        {
            char ***l_123 = (void*)0;
            char *l_126 = (void*)0;
            char **l_125 = &l_126;
            char ***l_124 = &l_125;
            int l_133 = 0xA28A71BBL;
            unsigned l_137 = 4294967295UL;
            (*l_124) = (void*)0;

            ;
            for (g_106 = (-21); (g_106 < 8); g_106++)
            {
                int *l_129 = (void*)0;
                int **l_130 = &l_129;
            }
            for (g_39 = 7; (g_39 == 15); ++g_39)
            {
                int **l_141 = &g_82;
                int *l_142 = &g_106;
                int *l_143 = &l_133;
                if (p_62)
                {
                    unsigned l_134 = 0x5BCBD5E9L;
                    int l_135 = 1L;
                    (**g_93) = (**g_93);
                    if (l_133)
                        continue;
                    l_135 = l_134;
                    if (g_136)
                        continue;
                }
                else
                {
                    int *l_138 = &l_133;
                    if (l_137)
                    {
                        (**g_93) = l_87;

                        ;
                    }
                    else
                    {
                        (**g_93) = l_138;

                        ;
                        (*l_138) = 0x8E76B2DCL;
                    }
                    (*l_138) = l_133;
                }
                (*l_143) = ((*l_142) = (safe_add_func_int16_t_s_s(((*l_100) = 0x5518L), (((*l_141) = &g_39) != (*g_94)))));

                ;
                if ((**g_94))
                    continue;
                (*g_94) = (*g_94);
            }

            ;
            return l_144;



        }
        else
        {
            g_145 = (void*)0;
        }
        (*g_94) = (void*)0;

        ;
        (*l_146) = ((*g_94) = (**g_93));

        ;
        (*g_38) = (safe_div_func_uint32_t_u_u(g_101, p_62));
    }

    ;
    return &g_19;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_550, "g_550", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_772, "g_772", print_hash_value);
    transparent_crc(g_848, "g_848", print_hash_value);
    transparent_crc(g_910, "g_910", print_hash_value);
    transparent_crc(g_948, "g_948", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
