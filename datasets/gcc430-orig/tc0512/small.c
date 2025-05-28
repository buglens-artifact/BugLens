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



static unsigned g_23 = 0xBFBD3AEBL;
static unsigned g_25 = 0x0176DF7EL;
static int g_37 = 0L;
static int g_68 = (-5L);
static short g_70 = (-1L);
static short *g_69 = &g_70;
static int g_85 = 0xC4114487L;
static unsigned char g_99 = 0xDCL;
static char g_107 = 0x60L;
static unsigned short g_117 = 0xB41FL;
static unsigned char g_123 = 0x6AL;
static unsigned g_135 = 0x68035757L;
static unsigned char g_176 = 0x9FL;
static unsigned char g_178 = 0xD3L;
static const char g_184 = 0x35L;
static int g_232 = (-1L);
static char g_243 = 0xE8L;
static int g_272 = 0x9275E4F8L;
static short **g_305 = (void*)0;
static short ***g_304 = &g_305;
static unsigned short g_307 = 0UL;
static int *g_310 = (void*)0;
static volatile char g_313 = 0x46L;
static volatile char *g_312 = &g_313;
static volatile char **g_311 = &g_312;
static int g_320 = 0xBCCA8746L;
static unsigned char g_334 = 0UL;
static const volatile unsigned char *g_456 = (void*)0;
static const volatile unsigned char **g_455 = &g_456;
static int ***g_530 = (void*)0;
static unsigned char g_544 = 0x75L;
static short g_634 = 0L;
static const volatile unsigned char ***g_647 = &g_455;
static const volatile unsigned char ****g_646 = &g_647;
static char g_684 = 0xA8L;
static unsigned short *g_767 = &g_307;
static unsigned short **g_766 = &g_767;
static unsigned char g_777 = 0UL;
static int *g_793 = &g_320;
static char g_812 = 0x03L;
static const char g_833 = (-1L);
static int g_852 = 0xCFC3E09FL;
static unsigned g_907 = 4294967295UL;
static char *g_948 = &g_684;
static char **g_947 = &g_948;
static char ** const *g_946 = &g_947;
static short *g_977 = (void*)0;
static unsigned char **g_980 = (void*)0;
static unsigned char ***g_979 = &g_980;
static unsigned char ****g_978 = &g_979;
static unsigned *g_1004 = (void*)0;
static unsigned **g_1003 = &g_1004;
static const int g_1077 = (-3L);
static const int g_1079 = 0x86AA34C3L;



static char func_1(void);
static const char func_9(unsigned short p_10, int p_11);
static unsigned char func_14(int p_15, int p_16, int p_17, short p_18);
static int func_19(unsigned p_20, int p_21, const short p_22);
static int * func_27(int p_28);
static int func_31(unsigned p_32, unsigned short p_33, int p_34, int * p_35);
static const short func_40(short p_41, int * p_42, const int * p_43);
static unsigned func_48(int p_49);
static const short func_61(const unsigned short p_62, unsigned char p_63, short * p_64, unsigned short p_65);
static short func_74(short * p_75, unsigned * p_76, const int p_77);
static char func_1(void)
{
    unsigned char l_4 = 0xB7L;
    unsigned *l_24 = &g_25;
    int l_26 = 0xD004DDE9L;
    unsigned char *l_543 = &g_544;
    int *l_545 = &g_232;
    short ***l_855 = (void*)0;
    unsigned *l_868 = (void*)0;
    unsigned l_869 = 1UL;
    int *l_870 = &g_68;
    const short l_881 = 7L;
    unsigned l_903 = 2UL;
    unsigned l_904 = 4294967288UL;
    int **l_916 = &g_793;
    int ***l_915 = &l_916;
    const unsigned l_1006 = 0x091BF473L;
    int l_1008 = 1L;
    char l_1011 = 0x0EL;
    unsigned short l_1025 = 0xB1B0L;
    const unsigned short l_1061 = 0xFEE3L;
    const int *l_1078 = &g_1079;
    short *l_1087 = &g_634;
    unsigned short * const **l_1090 = (void*)0;
    g_852 |= (safe_mod_func_int8_t_s_s(l_4, (0x28L && (safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u((func_9(l_4, ((*l_545) = (safe_sub_func_int16_t_s_s(l_4, (((*l_543) ^= func_14(func_19(g_23, (l_26 = (((g_23 ^ ((*l_24) = 1UL)) ^ ((&g_23 != &g_23) != l_4)) > 1UL)), g_23), l_4, l_4, g_23)) || 0x2DL))))) >= g_833), l_4)), g_184)))));
    if ((safe_div_func_uint16_t_u_u((l_26 , l_26), l_869)))
    {
lbl_902:
        l_870 = &l_26;
        if ((*l_870))
        {
            return (**g_311);
        }
        else
        {
            return (*g_312);
        }
    }
    else
    {
        short l_894 = 0xB1A0L;
        short l_926 = 1L;
        int *l_927 = &g_85;
        char *l_954 = &g_812;
        unsigned *l_963 = (void*)0;
        char l_1000 = (-2L);
        unsigned *l_1014 = &g_25;
        short **l_1024 = &g_69;
        unsigned *l_1062 = &l_903;
        if ((safe_add_func_int32_t_s_s((*g_793), g_852)))
        {
            short l_882 = 0x8C3DL;
            char *l_893 = &g_812;
            char ** const l_892 = &l_893;
            (*g_793) = ((safe_sub_func_int16_t_s_s(0xB760L, 0x83CBL)) , 0x4D6528F2L);
            for (g_272 = 13; (g_272 < 4); --g_272)
            {
                char l_887 = (-3L);
                char *l_891 = &g_684;
                char **l_890 = &l_891;
                int l_895 = 1L;
                l_895 = (+((safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_881 ^ ((*l_870) = l_882)), 65529UL)), (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((l_887 >= (*g_312)), (((func_48((((safe_div_func_uint8_t_u_u(g_178, l_887)) , (l_890 = l_890)) == l_892)) , l_887) > (-2L)) , 0x5630L))), l_882)))) > l_894));
                if (l_887)
                    continue;
            }
        }
        else
        {
lbl_1051:
            for (g_334 = (-6); (g_334 >= 41); ++g_334)
            {
                for (g_684 = 0; (g_684 >= 15); ++g_684)
                {
                    int * const l_900 = (void*)0;
                    int **l_901 = &l_870;
                    (*g_793) = 0xDA3100FAL;
                    (*l_901) = l_900;
                    (*l_901) = (*l_901);
                }
            }
            if (g_178)
                goto lbl_902;
        }
        if ((l_903 >= (0x4B8AL <= l_904)))
        {
            unsigned l_905 = 9UL;
            short ****l_917 = (void*)0;
            int l_930 = 0x5DBB34C9L;
            short *l_960 = &g_634;
            unsigned char l_983 = 251UL;
            if ((l_905 = (*g_793)))
            {
                int **l_906 = &g_310;
                (*l_906) = (g_117 , (void*)0);
                return g_907;
            }
            else
            {
                short ****l_918 = (void*)0;
                int l_950 = 6L;
                const unsigned short l_965 = 1UL;
                const int l_966 = 1L;
                char l_976 = 0xC6L;
                for (g_23 = 0; (g_23 != 57); ++g_23)
                {
                    short *****l_919 = (void*)0;
                    short ****l_921 = &g_304;
                    short *****l_920 = &l_921;
                    unsigned char l_922 = 250UL;
                    unsigned short *l_923 = &g_307;
                    char *l_928 = (void*)0;
                    char *l_929 = &g_812;
                    int *l_955 = &g_85;
                    char l_969 = (-1L);
                    if ((*l_927))
                    {
                        unsigned char *l_941 = &g_178;
                        char ** const **l_949 = &g_946;
                        int * const *l_953 = &g_310;
                        int * const **l_952 = &l_953;
                        int * const ***l_951 = &l_952;
                        l_930 = ((*g_793) = (g_833 , (((*g_947) = (((safe_lshift_func_int8_t_s_u((((((safe_add_func_int8_t_s_s((*g_312), (safe_sub_func_int8_t_s_s((((*l_543) = ((*l_927) ^ l_922)) | (((safe_sub_func_uint8_t_u_u(((*l_941) = l_922), (safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((((*l_949) = g_946) == &g_311), func_31(((***l_915) , ((*g_947) != (void*)0)), (**g_766), l_950, (**l_915)))), 14)))) , (void*)0) != &g_767)), 0L)))) , (void*)0) == l_951) & 0xFB6AL) < l_922), 0)) <= l_950) , l_954)) == (void*)0)));
                        g_310 = (void*)0;
                    }
                    else
                    {
                        (***l_915) = (*g_793);
                        (**l_915) = l_955;
                        (*g_793) &= 0L;
                        if (l_950)
                            continue;
                    }
                    if ((safe_lshift_func_int8_t_s_s((-3L), ((((((safe_add_func_uint8_t_u_u(0xF2L, (((*l_543) = l_950) >= ((void*)0 != l_960)))) , 8L) , (**l_916)) , ((*l_543) = (safe_lshift_func_uint8_t_u_u(func_74(&g_634, (l_963 = l_955), (**l_916)), 6)))) < (***g_946)) < (*g_312)))))
                    {
                        const int l_964 = 8L;
                        int *l_984 = &l_930;
                        (***l_915) = l_950;
                        (*l_927) = (*l_955);
                        g_852 |= ((*l_984) = ((((*g_312) , ((*l_960) = ((**l_916) <= ((**g_766) || ((g_978 = (void*)0) != (void*)0))))) , (safe_add_func_int32_t_s_s(((*l_927) = (*g_793)), 0xD5DCAE8DL))) || l_983));
                        (*g_793) = (*l_927);
                    }
                    else
                    {
                        int l_985 = 6L;
                        return l_985;
                    }
                    for (l_903 = 29; (l_903 < 28); l_903--)
                    {
                        int l_988 = 0xCF5E8720L;
                        l_950 ^= ((***l_915) = l_988);
                        return (*g_312);
                    }
                    for (g_243 = 0; (g_243 > 9); g_243++)
                    {
                        unsigned l_991 = 0xA134E3CCL;
                        (*g_793) = (-8L);
                        return l_991;
                    }
                }
            }
            (***l_915) = (*g_793);
        }
        else
        {
            short *l_992 = (void*)0;
            int l_999 = 0x4CCC3B90L;
            (**l_916) = ((g_243 , &g_70) != ((&l_4 != &l_4) , l_992));
            if (((((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((&l_881 == (void*)0), ((g_684 & ((**g_947) == (**g_947))) , l_1000))), 9)), (***l_915))) , (***l_915)) , g_334) | l_999))
            {
                char l_1007 = 0x62L;
                int l_1012 = 0xFF4038F5L;
                if ((*g_793))
                {
                    return (**g_947);
                }
                else
                {
                    int l_1005 = 7L;
                    (*g_793) = (safe_sub_func_uint8_t_u_u((g_1003 != (void*)0), l_1008));
                    for (g_634 = (-7); (g_634 > (-23)); g_634 = safe_sub_func_uint8_t_u_u(g_634, 7))
                    {
                        short *l_1013 = &l_894;
                        int l_1015 = 0x077DB1A9L;
                        (*l_927) ^= ((((4294967295UL >= func_48(g_320)) , (!0xB9272EE5L)) , (l_1012 ^= l_1011)) , (**l_916));
                        if ((*g_793))
                            continue;
                        (**l_915) = (*l_916);
                        return l_1025;
                    }
                    (**l_916) ^= ((*l_927) < l_1012);
                }
                (*g_793) = 0L;
            }
            else
            {
                unsigned l_1044 = 0x6363BA70L;
                int l_1045 = 0x0DBC4B3AL;
                int l_1048 = 0x3B698560L;
                for (g_123 = 0; (g_123 >= 33); g_123 = safe_add_func_uint32_t_u_u(g_123, 7))
                {
                    unsigned char l_1028 = 0UL;
                    short *l_1029 = (void*)0;
                    short *l_1046 = &g_70;
                    short *l_1047 = &l_894;
                    unsigned **l_1054 = &l_1014;
                    (*g_793) = ((g_634 = l_1028) < (~l_1048));
                    for (g_99 = 0; (g_99 == 3); g_99 = safe_add_func_int16_t_s_s(g_99, 9))
                    {
                        unsigned char **l_1052 = (void*)0;
                        unsigned **l_1053 = &l_1014;
                        if ((*l_927))
                            break;
                        if (g_272)
                            goto lbl_1051;
                        (**g_978) = l_1052;
                        (**l_916) = (((*g_793) ^ ((l_1053 = &g_1004) != l_1054)) != (safe_add_func_uint32_t_u_u(l_1044, l_1028)));
                    }
                }
            }
        }
        g_37 |= ((safe_div_func_uint32_t_u_u(((*l_24) = (&g_530 == (func_31(((*l_1062) = (safe_lshift_func_uint8_t_u_u(0x74L, (l_1061 , (*l_927))))), (*l_927), g_99, l_963) , &g_530))), 2L)) >= (**g_766));
    }
    g_852 &= ((**l_916) = 0xE10172E7L);
    if ((*g_793))
    {
        int *l_1063 = &g_37;
        short **l_1066 = &g_69;
        (*l_1063) = ((***l_915) = (*g_793));
        for (g_852 = 14; (g_852 != (-2)); g_852--)
        {
            short ** const l_1067 = &g_69;
            int l_1068 = 1L;
            (*l_1063) |= (*g_793);
            if ((l_1066 == l_1067))
            {
                (*g_793) = (l_1068 >= l_1068);
            }
            else
            {
                short l_1069 = 0L;
                if (l_1069)
                    break;
            }
            (*g_793) ^= (l_1068 , (l_1068 ^ (*l_1063)));
        }
    }
    else
    {
        const int *l_1076 = &g_1077;
        int l_1080 = 9L;
        int *l_1083 = &g_852;
        unsigned short ***l_1084 = &g_766;
        unsigned short ****l_1085 = (void*)0;
        unsigned short ****l_1086 = &l_1084;
        const unsigned l_1088 = 0x4FCD9080L;
        unsigned char l_1089 = 246UL;
        (**l_916) = 0x6C813873L;
        (*l_1083) &= ((safe_mod_func_int16_t_s_s((func_19((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((l_1078 = (l_1076 = &l_1008)) != &l_1008), ((**l_916) == (*g_767)))), 5)), l_1080, (safe_div_func_int16_t_s_s((**l_916), (**g_766)))) & (***l_915)), (-3L))) >= (***l_915));
        (*l_916) = &l_1080;
        (*l_916) = &g_852;
    }
    return (*g_312);
}







static const char func_9(unsigned short p_10, int p_11)
{
    unsigned char *l_552 = &g_176;
    unsigned char **l_551 = &l_552;
    unsigned char ***l_550 = &l_551;
    int l_556 = 0xF63F7DB0L;
    unsigned l_571 = 4294967292UL;
    unsigned short *l_652 = &g_117;
    int **l_757 = &g_310;
    short *l_758 = &g_70;
    short *l_762 = (void*)0;
    short ****l_776 = &g_304;
    char ***l_835 = (void*)0;
    if ((safe_unary_minus_func_uint8_t_u(p_10)))
    {
        short l_549 = 0x5B79L;
        unsigned char ****l_553 = &l_550;
        int *l_554 = &g_85;
        int *l_555 = &g_68;
        char *l_586 = &g_107;
        char **l_585 = &l_586;
        char l_589 = 0x2EL;
        int l_683 = 0x3935A4C5L;
        int l_707 = (-1L);
lbl_604:
        (*l_555) = (safe_add_func_uint16_t_u_u(l_549, (((*l_553) = l_550) != (((+g_25) < (((*l_554) |= l_549) || (~p_10))) , &l_551))));
        if (l_556)
        {
            int l_566 = 0xBF0C102AL;
            int *l_592 = &g_272;
            for (g_25 = 0; (g_25 > 51); ++g_25)
            {
                unsigned l_561 = 0xD24E46B2L;
                int l_588 = 0x46CE4A80L;
                (*l_554) &= (((safe_div_func_uint8_t_u_u((l_561 == (safe_add_func_int8_t_s_s((&g_307 == &p_10), (safe_lshift_func_int16_t_s_u(((p_10 & (((*l_555) |= (l_556 = (((0xDA0DL ^ func_48(l_566)) != (~(safe_add_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_s(l_561, 0)) & 0x92L) | p_10) <= p_10), 1L)))) ^ l_571))) ^ 0xE7159D5EL)) && (*l_555)), g_117))))), p_11)) != (-7L)) < p_10);
                for (l_566 = 0; (l_566 > (-20)); l_566--)
                {
                    unsigned short *l_574 = &g_307;
                    unsigned short *l_587 = (void*)0;
                    char * const *l_591 = &l_586;
                    char * const **l_590 = &l_591;
                    int **l_593 = &l_555;
                    unsigned *l_603 = &l_571;
                    unsigned **l_602 = &l_603;
                    (*l_590) = ((func_19((((*l_574) ^= (func_48(g_70) > (*l_555))) , l_566), ((&g_455 == ((l_588 = (((0xA1DD7417L | (&g_312 != ((safe_div_func_uint16_t_u_u(func_19(((*l_555) >= (safe_mod_func_uint32_t_u_u(func_19(((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((+(**g_311)), g_135)), p_10)) , g_232), p_11, p_11), g_184))), g_178, (*l_555)), p_11)) , l_585))) != g_37) , g_176)) , (*l_553))) , l_589), l_556) < p_11) , (void*)0);
                    (*l_593) = l_592;
                    (*l_554) = ((*l_555) = (safe_rshift_func_uint8_t_u_u(0x18L, 2)));
                    if ((safe_div_func_uint8_t_u_u(((*l_555) |= p_11), (p_11 | ((safe_lshift_func_uint16_t_u_s(65535UL, (safe_add_func_uint16_t_u_u(((*g_311) == (void*)0), ((void*)0 == l_602))))) != 255UL)))))
                    {
                        if (g_23)
                            goto lbl_604;
                        (*l_554) = p_10;
                    }
                    else
                    {
                        return p_11;
                    }
                }
                return (*g_312);
            }
        }
        else
        {
            unsigned short *l_626 = &g_117;
            int l_630 = 0x519E11B6L;
            unsigned short l_631 = 9UL;
            unsigned l_635 = 0x1205CD75L;
            unsigned short *l_653 = &g_307;
            unsigned *l_713 = &g_135;
            int l_754 = (-1L);
            g_310 = &l_556;
            (*g_310) = (*l_555);
            if ((p_11 >= (*g_310)))
            {
                int l_629 = 0xF2374E34L;
                int l_649 = 1L;
                for (l_549 = (-7); (l_549 > 16); ++l_549)
                {
                    unsigned *l_609 = &g_23;
                    unsigned short *l_625 = (void*)0;
                    unsigned short **l_624 = &l_625;
                    short *l_632 = &g_70;
                    short *l_633 = &g_634;
                    (*l_554) &= (*g_310);
                    (*l_554) = (safe_sub_func_int8_t_s_s((((*l_609) = 0x27A88AF2L) == (safe_div_func_uint8_t_u_u(((((*l_633) ^= ((*l_632) = (safe_div_func_uint8_t_u_u((p_11 & ((safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s((((g_184 && (safe_rshift_func_uint16_t_u_s(((+(safe_div_func_int8_t_s_s((((*l_624) = &p_10) != l_626), ((safe_sub_func_int16_t_s_s(p_10, l_571)) & (0xD7L & ((l_556 ^= (65535UL < l_629)) <= 0x05C85182L)))))) <= (*g_312)), l_630))) | g_107) & 0x95L), g_232)), l_571)), l_631)) == g_123)), g_70)))) & l_630) ^ p_10), l_635))), 0L));
                }
                for (g_544 = 28; (g_544 <= 59); ++g_544)
                {
                    unsigned l_638 = 4294967290UL;
                    int *l_639 = (void*)0;
                    if (l_638)
                    {
                        int *l_645 = &g_320;
                        short l_648 = 3L;
                        l_639 = (void*)0;
                        if (l_635)
                            continue;
                        (*l_554) |= l_629;
                        l_649 ^= ((*l_555) = ((*l_645) = (!(((l_630 , g_243) <= (((safe_lshift_func_int8_t_s_s((!((safe_unary_minus_func_int16_t_s((*l_554))) > ((((safe_lshift_func_int8_t_s_s((p_10 < ((((~func_31(p_10, l_629, p_11, l_645)) && l_629) | p_10) , (*l_645))), 7)) , g_646) != (void*)0) && (-1L)))), 1)) ^ (*g_310)) >= p_10)) > l_648))));
                    }
                    else
                    {
                        g_310 = l_554;
                        if ((*g_310))
                            continue;
                    }
                }
                (*g_310) &= (safe_rshift_func_int16_t_s_s(((l_652 == l_653) | ((safe_mod_func_uint8_t_u_u(l_649, (safe_rshift_func_int8_t_s_u((*g_312), 7)))) || func_48(g_232))), 14));
            }
            else
            {
                unsigned *l_662 = &g_135;
                unsigned *l_663 = &g_23;
                const int l_664 = (-1L);
                short *l_667 = &g_70;
                const unsigned l_685 = 0x75D7CE25L;
                unsigned l_686 = 0x7A87C6D3L;
                if ((p_10 || (safe_rshift_func_uint8_t_u_s((0xA323L < (((9UL ^ (safe_sub_func_int32_t_s_s(0xB5B868FDL, ((*l_663) &= ((*l_662) = l_635))))) , ((*l_554) &= (((*l_667) = (((((*g_310) |= p_10) > l_664) > ((safe_rshift_func_uint8_t_u_u(l_571, 0)) > ((*l_662) = (p_11 , g_68)))) == 0xF2L)) == 65529UL))) | 0x28AD16CEL)), 4))))
                {
                    int *l_682 = &g_37;
                    int *l_691 = &g_232;
                    short *l_711 = &g_70;
                    short **l_712 = &l_667;
                    const short *l_718 = (void*)0;
                    const short **l_717 = &l_718;
                    const short ***l_716 = &l_717;
                    const short ****l_719 = &l_716;
                    (*l_554) &= (p_10 , (func_48((((g_178 , (safe_add_func_int32_t_s_s(((safe_div_func_uint16_t_u_u(p_11, (safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((0L ^ (((g_307 = (safe_mod_func_uint32_t_u_u(p_11, l_685))) && l_635) == 1L)), (*l_555))) >= l_635) == (*g_312)), 5)))) & 0xFE43FBA1L), 0x5513B137L))) == g_320) != l_686)) == l_686));
                    for (l_549 = 7; (l_549 >= (-13)); l_549--)
                    {
                        (*g_310) ^= (safe_mod_func_int16_t_s_s((*l_555), 0x1A53L));
                    }
                    if ((func_48(g_184) && (((*l_555) = ((((*l_667) &= ((func_19(p_11, ((*l_691) = (0x8ADCL < l_571)), (safe_rshift_func_int16_t_s_s(p_10, 10))) && p_10) || (p_10 > p_10))) >= 65533UL) , (*g_310))) , 0xED28L)))
                    {
                        int l_698 = 0x9E7C880DL;
                        (*l_554) = func_74(((((*l_662) ^= (safe_div_func_uint16_t_u_u((((g_334 > (safe_add_func_int32_t_s_s(l_698, ((l_571 , ((func_74(l_652, l_682, l_686) != ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(func_48(((safe_add_func_int32_t_s_s(func_48(g_544), l_571)) | l_707)), p_10)) , 0x338EL), g_313)) & 0UL)) < l_630)) || 5L)))) < p_11) <= (*l_682)), 0xA9A2L))) <= 0x201C832BL) , (void*)0), &l_686, l_698);
                    }
                    else
                    {
                        unsigned char l_708 = 1UL;
                        (*g_310) = l_708;
                    }
                    (*l_555) = (safe_add_func_uint32_t_u_u(func_31((l_630 ^ func_74(((*l_712) = l_711), l_713, (*g_310))), func_19((safe_add_func_int16_t_s_s(p_10, (((&g_305 == ((*l_719) = l_716)) ^ (**g_311)) | p_10))), l_686, l_635), p_11, l_663), l_635));
                }
                else
                {
                    int l_720 = 0L;
                    (*l_555) = l_720;
                }
            }
            for (g_684 = 19; (g_684 < (-29)); --g_684)
            {
                int l_731 = 0x05990372L;
                const unsigned *l_739 = &l_571;
                const unsigned **l_738 = &l_739;
                for (l_630 = 12; (l_630 >= 22); l_630++)
                {
                    unsigned short l_741 = 1UL;
                    for (g_68 = 0; (g_68 != 24); g_68 = safe_add_func_int16_t_s_s(g_68, 8))
                    {
                        unsigned char l_740 = 0x39L;
                        unsigned *l_742 = &g_23;
                        int *l_753 = &g_37;
                        (*l_554) &= (safe_lshift_func_uint16_t_u_s(g_334, 5));
                        (*g_310) |= ((safe_add_func_int8_t_s_s((func_48(l_731) , ((safe_mod_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((0x1DEEFFADL < ((**g_311) , ((*l_742) = ((((((*l_713) = (g_70 , (p_11 , (safe_unary_minus_func_int16_t_s(((((((g_307 > (safe_unary_minus_func_uint32_t_u((0x74L || 0UL)))) || p_11) <= g_68) >= p_10) >= 9UL) == 0x3E78L)))))) , l_738) != &l_713) < l_740) <= l_741)))), p_10)) >= p_10) > 1L), 255UL)) == 0xFFCD64DFL)), 9UL)) || 0L);
                        (*g_310) = 6L;
                        (*g_310) = ((*l_753) ^= (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(func_48((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((((-5L) > 0L) < g_243) == (func_74(l_626, &g_135, (*l_554)) <= ((*l_586) = l_740))), p_11)), 3)), 1L))), 2)), 0x9DL)));
                    }
                    l_754 &= 1L;
                    return p_10;
                }
                if (p_11)
                    continue;
            }
        }
    }
    else
    {
        unsigned short l_761 = 0x3AE8L;
        short *l_796 = &g_70;
        short *l_798 = (void*)0;
        int **l_842 = &g_793;
        int *l_851 = &g_85;
    }
    return (*g_312);
}







static unsigned char func_14(int p_15, int p_16, int p_17, short p_18)
{
    int *l_524 = (void*)0;
    short *l_528 = &g_70;
    int ***l_529 = (void*)0;
    int l_533 = 0x0C2A9477L;
    unsigned char *l_540 = &g_334;
    char *l_541 = &g_243;
    unsigned char *l_542 = &g_99;
    l_524 = func_27((safe_lshift_func_int8_t_s_s(g_25, 4)));
    p_15 = (safe_lshift_func_uint8_t_u_u((g_99 > (*l_524)), ((safe_unary_minus_func_int8_t_s(func_74(l_528, l_524, p_17))) == (((l_529 != g_530) , (safe_sub_func_int16_t_s_s(func_19(p_18, g_117, (*l_524)), l_533))) != g_37))));
    g_320 ^= (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((*l_542) = ((((((safe_lshift_func_int8_t_s_u(0x27L, 5)) && ((((*l_541) = ((*g_312) && ((*l_540) = g_272))) <= g_176) != (func_31((p_15 > p_17), g_232, p_17, (g_310 = &p_15)) ^ 0L))) <= 0x96L) >= p_17) <= p_16) & g_184)), 0xB7L)) , (*l_524)), 2));
    return p_16;
}







static int func_19(unsigned p_20, int p_21, const short p_22)
{
    return g_25;
}







static int * func_27(int p_28)
{
    int *l_36 = &g_37;
    int l_308 = 0L;
    unsigned short l_309 = 9UL;
    int *l_319 = &g_320;
    short *l_341 = &g_70;
    unsigned *l_349 = (void*)0;
    short *l_352 = &g_70;
    unsigned char *l_363 = &g_99;
    int **l_372 = &l_319;
    int *** const l_371 = &l_372;
    unsigned char *l_404 = &g_176;
    unsigned l_405 = 1UL;
    unsigned char l_406 = 250UL;
    int l_429 = 0xF5507126L;
    char *l_504 = &g_107;
    char ** const l_503 = &l_504;
    (*l_319) &= func_31(p_28, (((void*)0 == l_36) && (p_28 , ((safe_add_func_int32_t_s_s((((g_23 , (((g_23 & 0UL) || p_28) != func_19(((*l_36) = (func_40((p_28 && p_28), l_36, &g_37) > l_308)), p_28, l_308))) > (-1L)) == 65535UL), 0UL)) ^ g_184))), l_309, g_310);
    for (g_23 = 0; (g_23 >= 46); g_23 = safe_add_func_int8_t_s_s(g_23, 9))
    {
        int l_323 = 4L;
        (*l_36) |= l_323;
    }
    if (g_123)
    {
        unsigned short l_329 = 0xA3F3L;
        int l_332 = (-1L);
        unsigned *l_333 = (void*)0;
        short l_335 = 0x6F30L;
        int **l_336 = (void*)0;
        int **l_337 = (void*)0;
        int **l_338 = &g_310;
        short **l_353 = &l_341;
        (*l_319) ^= ((func_48((!((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(((l_329 = 0x8DCCL) <= ((safe_sub_func_uint16_t_u_u((0x76989875L > (0x80L | g_272)), g_23)) != l_335)))), 0UL)) < 0xE5EAA200L), 7L)) == (*l_36)))) != g_70) >= g_243);
        (*l_338) = &p_28;
        for (g_178 = 28; (g_178 > 12); --g_178)
        {
            unsigned *l_342 = &g_25;
            const int l_343 = 0x65085B15L;
            short **l_348 = &l_341;
            unsigned l_350 = 0x0ABED83BL;
            int **l_351 = &l_319;
            l_36 = ((*l_338) = &p_28);
            l_350 |= ((0xAFF0L | (**l_338)) >= (safe_add_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((p_28 || (*l_36)), 13)) | 0xA98C11E5L) & 255UL), p_28)));
            (*l_351) = ((*l_338) = &g_68);
        }
        (*l_36) |= (l_352 != ((*l_353) = &l_335));
    }
    else
    {
        int *l_361 = (void*)0;
        int *l_362 = &g_232;
        short *l_370 = &g_70;
        int l_373 = 0x96C7F075L;
        unsigned l_374 = 0x52F3DC0DL;
        unsigned l_375 = 5UL;
        int l_376 = 0xDC45FFFDL;
        unsigned * const *l_389 = &l_349;
        for (g_85 = 0; (g_85 == (-9)); g_85 = safe_sub_func_uint32_t_u_u(g_85, 2))
        {
            int **l_356 = &l_36;
            (*l_356) = &p_28;
        }
        if (((safe_lshift_func_uint8_t_u_s((((((0UL || ((*l_319) < ((g_25 | ((((*l_362) = 0x0BF4E508L) , &g_178) != l_363)) < ((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((((safe_mod_func_uint16_t_u_u((((void*)0 == l_370) < (l_371 == (void*)0)), 0x7293L)) <= l_373) != p_28), 15)), l_374)) < 0x27BCC0BFL)))) == l_375) ^ 0x2B8CC005L) , l_375) , l_373), 5)) >= l_376))
        {
            unsigned char l_379 = 246UL;
            unsigned short *l_380 = &g_307;
            int l_390 = 0xBCA4E295L;
            (*l_372) = &g_320;
            (**l_371) = &g_320;
            (***l_371) = func_19((p_28 , (safe_rshift_func_uint8_t_u_s((l_390 < l_376), (**g_311)))), l_379, l_375);
        }
        else
        {
            return &g_68;
        }
        (*l_319) = (*l_319);
    }
    if ((((((**l_372) = (((1UL == (safe_add_func_uint8_t_u_u((g_334 < (safe_unary_minus_func_int32_t_s((!(p_28 = (p_28 < (safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((func_48(g_23) , (safe_add_func_int32_t_s_s(((func_31(g_25, (***l_371), p_28, (((*l_404) |= ((*l_363) = (safe_div_func_int8_t_s_s((*g_312), p_28)))) , (void*)0)) && 65535UL) || 65533UL), g_25))), l_405)), 0xFEF23D16L)), 1)))))))), g_272))) >= 65535UL) | g_85)) <= l_406) & 0x003BL) || 0x7660L))
    {
        unsigned l_409 = 0x0A6ADBB8L;
        unsigned *l_410 = (void*)0;
        unsigned *l_411 = &g_25;
        unsigned l_428 = 0UL;
        unsigned char *l_430 = &g_123;
        int l_449 = 7L;
        short *l_450 = &g_70;
        int l_451 = 5L;
        if (func_48((safe_rshift_func_int8_t_s_u((((((*l_411) = (((((*l_36) = func_48(g_184)) , l_409) , &l_309) != &g_307)) , ((((((safe_div_func_int8_t_s_s(((***l_371) | ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((*g_312) > (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((((l_409 , ((((*l_36) = (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((0x27L != l_428) , (-1L)), 8L)), g_107)), g_70))) && g_184) , p_28)) & l_428) < l_428) > (-1L)) <= g_320), g_70)), l_429))), l_409)), 13)) > l_409)), 253UL)) != l_409) >= (***l_371)) , l_409) ^ g_70) , l_430)) == (void*)0) < g_334), 0))))
        {
            unsigned l_431 = 0xB8063B84L;
            short ***l_447 = &g_305;
            int l_489 = 0L;
            if (((**l_372) |= l_431))
            {
                unsigned short l_434 = 0x4CBEL;
                int *l_453 = &g_37;
                short *l_457 = &g_70;
                if ((g_243 <= ((void*)0 == &l_431)))
                {
                    short ****l_448 = &l_447;
                    int *l_452 = &l_308;
                    (*l_452) &= (func_48((safe_mod_func_uint8_t_u_u((l_451 |= ((&l_349 == &l_349) < (l_434 && func_31(((((**l_372) = func_31((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((safe_div_func_int16_t_s_s((((*l_363) = (((*l_404) = (0xCCE9L && (safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((*l_319), (safe_rshift_func_uint8_t_u_s(((*l_430) = func_19(func_74(((((*l_430) = (((*l_404) = (&g_305 != ((*l_448) = l_447))) != (!(l_449 ^= (((l_431 , func_74(((0xD20AL ^ 0xC30AL) , (void*)0), &g_135, l_434)) >= p_28) >= p_28))))) ^ 0x2DL) , l_450), &g_23, p_28), g_272, p_28)), 3)))), 14)))) , l_431)) , 0xC32AL), 0x8249L)) || p_28), 0x15L)), 0x2341L)), p_28, p_28, &g_37)) == 0xA5DF5567L) , 0x24B4B0B1L), l_409, g_243, l_411)))), 0x1EL))) <= p_28);
                }
                else
                {
                    short *l_458 = &g_70;
                    const int l_459 = 0x77B6B181L;
                    int l_472 = 0x3839BA00L;
                    if ((*l_453))
                    {
                        unsigned char ***l_454 = (void*)0;
                        g_455 = (void*)0;
                    }
                    else
                    {
                        int *l_460 = &g_37;
                        unsigned short *l_469 = &l_434;
                        unsigned short *l_470 = (void*)0;
                        unsigned short *l_471 = &g_307;
                        char *l_475 = (void*)0;
                        char *l_476 = &g_107;
                        (**l_372) = func_74(l_457, &g_23, ((*l_460) = (func_74(l_458, &g_135, l_459) && p_28)));
                        l_472 &= (safe_mod_func_int16_t_s_s(p_28, (safe_mod_func_int32_t_s_s((((((((safe_mod_func_uint8_t_u_u((*l_453), l_451)) || ((***l_371) = (((4294967295UL & (*l_319)) , p_28) | (safe_lshift_func_int16_t_s_u(0x169DL, func_48(((~((*l_469) = g_232)) | ((*l_471) &= (*l_460))))))))) , 6UL) , (*g_455)) == (void*)0) <= 0xAEEEL) >= 1UL), (*l_453)))));
                        (*l_453) = (((*l_476) = ((((*l_430) ^= (***l_371)) , func_48((*l_453))) != (safe_div_func_int32_t_s_s(l_431, 0x538693B9L)))) | (safe_sub_func_int8_t_s_s((*g_312), g_117)));
                    }
                    (**l_371) = (*l_372);
                }
            }
            else
            {
                unsigned l_487 = 1UL;
                g_310 = &p_28;
                for (p_28 = (-25); (p_28 > (-24)); p_28 = safe_add_func_uint32_t_u_u(p_28, 7))
                {
                    unsigned l_488 = 0UL;
                    int *l_490 = &g_85;
                    (***l_371) ^= 0xD1089F1AL;
                    (*l_490) ^= (safe_rshift_func_int16_t_s_s((l_450 != l_352), (!(safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_487, ((***l_371) ^ (**l_372)))), (l_489 |= (p_28 , ((((*l_319) || l_487) > (func_19(p_28, l_488, (**l_372)) == g_123)) & (-1L)))))))));
                }
            }
        }
        else
        {
            const unsigned l_508 = 0xB5344A76L;
            int *l_514 = &l_429;
            int *l_515 = &l_451;
            if (l_451)
            {
                int l_491 = 0x669404FBL;
                (*l_36) = ((*l_319) = l_491);
            }
            else
            {
                const unsigned char *l_493 = &g_334;
                const unsigned char **l_492 = &l_493;
                int l_502 = 0xE16218FCL;
                if (((void*)0 != l_492))
                {
                    int *l_498 = &g_320;
                    char **l_505 = &l_504;
                    (*l_319) = (safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(0UL, 5)), ((*l_352) = p_28)));
                    (*l_372) = l_498;
                    for (l_451 = 0; (l_451 < 3); l_451++)
                    {
                        int **l_501 = &l_36;
                        (*l_501) = ((**l_371) = &p_28);
                        if (p_28)
                            continue;
                    }
                    p_28 = (p_28 & ((1UL != l_502) , ((*l_498) = (((p_28 , l_503) != (l_505 = (p_28 , (void*)0))) ^ ((!p_28) != ((p_28 , p_28) >= p_28))))));
                }
                else
                {
                    char l_511 = 0x81L;
                    (**l_372) |= (g_334 , (safe_sub_func_uint16_t_u_u(((((l_508 != 0x09L) , ((safe_rshift_func_int16_t_s_s(func_48(l_511), 1)) || l_511)) < (safe_sub_func_uint32_t_u_u((((*l_504) = (**g_311)) || l_511), (l_428 & 255UL)))) & 0xB0L), g_123)));
                    p_28 = p_28;
                }
            }
            (**l_371) = l_514;
            return &g_272;
        }
    }
    else
    {
        char l_516 = 1L;
        g_272 ^= func_19(l_516, ((safe_div_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((safe_sub_func_uint16_t_u_u(((!(p_28 || ((***l_371) & p_28))) > ((safe_add_func_int16_t_s_s(p_28, 0x780DL)) <= p_28)), p_28)))), g_313)) ^ p_28), p_28);
        (**l_371) = (**l_371);
    }
    return &g_272;
}







static int func_31(unsigned p_32, unsigned short p_33, int p_34, int * p_35)
{
    volatile char ***l_314 = &g_311;
    int l_318 = 1L;
    (*l_314) = g_311;
    for (g_68 = 26; (g_68 >= (-19)); --g_68)
    {
        unsigned char l_317 = 0xE3L;
        return l_317;
    }
    return l_318;
}







static const short func_40(short p_41, int * p_42, const int * p_43)
{
    short l_52 = (-10L);
    short *l_53 = &l_52;
    int l_59 = 0L;
    unsigned *l_60 = &g_25;
    int l_66 = 0x37C50821L;
    int *l_67 = &g_68;
    short ** const *l_286 = (void*)0;
    int * const **l_298 = (void*)0;
    int * const ***l_299 = &l_298;
    int * const l_303 = (void*)0;
    int * const *l_302 = &l_303;
    int * const **l_301 = &l_302;
    int * const ***l_300 = &l_301;
    unsigned short *l_306 = &g_307;
    for (g_37 = 24; (g_37 != 15); g_37--)
    {
        if (g_25)
            break;
    }
    if ((safe_mod_func_uint8_t_u_u((!((((((*l_53) = (func_48(g_23) && l_52)) >= ((((*l_60) |= (safe_div_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(l_59)), g_37))) & ((func_61(func_48((((func_48(g_23) || (((*l_67) ^= ((l_66 = (p_41 , (&g_23 == (void*)0))) <= (*p_42))) , 0x0F33E235L)) | 0xB6AFL) > 0x8364B2CBL)), p_41, g_69, g_23) , (*l_67)) > g_23)) || 0xAA67L)) ^ 0x4BL) == 0UL) > (*p_42))), (-8L))))
    {
        const int *l_269 = (void*)0;
        const int **l_268 = &l_269;
        unsigned *l_273 = &g_135;
        (*l_268) = p_43;
        for (p_41 = 0; (p_41 != (-27)); p_41 = safe_sub_func_uint32_t_u_u(p_41, 1))
        {
            g_272 &= (*p_42);
        }
        (*l_67) = g_85;
        if (g_99)
        {
            unsigned **l_274 = &l_60;
            short **l_276 = (void*)0;
            short ***l_275 = &l_276;
            const short *l_278 = (void*)0;
            const short **l_277 = &l_278;
            int l_281 = (-1L);
            (*l_67) = (!func_74(&l_52, ((*l_274) = l_273), (((((*l_275) = &g_69) != &g_69) , (((**l_275) = &l_52) == ((*l_277) = &l_52))) , (((*l_67) >= (*l_67)) , (safe_mod_func_int16_t_s_s(l_281, (**l_268)))))));
            (*l_268) = &g_85;
        }
        else
        {
            const unsigned l_285 = 0x7B09F382L;
            if ((((*l_67) = (safe_unary_minus_func_int32_t_s((p_41 | (((l_285 || (((void*)0 != &l_60) , ((*p_42) & 0x664DEEC2L))) , l_286) != ((l_285 ^ (g_107 = (safe_add_func_int16_t_s_s((-9L), 0x27ACL)))) , l_286)))))) < g_272))
            {
                (*l_268) = &g_68;
            }
            else
            {
                unsigned short l_289 = 0x0604L;
                (*p_42) |= l_289;
            }
        }
    }
    else
    {
        unsigned short *l_290 = &g_117;
        int *l_295 = &g_232;
        (*p_42) = (((*l_290) |= ((g_99 , p_41) > (*g_69))) , (((safe_sub_func_uint8_t_u_u((g_123 &= (func_48((*l_67)) > 0xA6C4L)), p_41)) || p_41) < (0xB2L != (*l_67))));
        (*l_67) &= func_48(((*l_295) &= g_107));
    }
    l_67 = ((((-7L) > (g_117 , ((*l_67) , 65535UL))) > ((*l_306) = ((safe_sub_func_uint16_t_u_u((((*l_300) = ((*l_67) , ((*l_299) = l_298))) != (void*)0), ((g_304 == &g_305) & (-2L)))) < 65535UL))) , (void*)0);
    return p_41;
}







static unsigned func_48(int p_49)
{
    int *l_50 = &g_37;
    int **l_51 = &l_50;
    (*l_51) = l_50;
    return g_23;
}







static const short func_61(const unsigned short p_62, unsigned char p_63, short * p_64, unsigned short p_65)
{
    unsigned l_73 = 0xF849EC59L;
    short l_89 = 0xB612L;
    int **l_90 = (void*)0;
    int *l_92 = &g_85;
    int **l_91 = &l_92;
    short *l_218 = (void*)0;
    (*l_91) = (((((safe_sub_func_int16_t_s_s(((*g_69) = func_48((g_23 > l_73))), ((((-8L) != (func_74(g_69, (p_62 , &g_23), (p_62 < (safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(0x73L, 4L)), 1UL)))) >= l_73)) >= g_68) && 0xFC85E2D2L))) , 0x70A1L) != l_89) ^ 0UL) , (void*)0);
    if ((safe_add_func_int16_t_s_s((&g_70 == &l_89), 0x276AL)))
    {
        int *l_97 = &g_37;
        unsigned char *l_98 = &g_99;
        unsigned *l_102 = &g_23;
        char *l_105 = (void*)0;
        char *l_106 = &g_107;
        short *l_108 = &l_89;
        int l_109 = 0xA57EF93BL;
        int *l_110 = (void*)0;
        int *l_111 = &g_85;
        unsigned l_228 = 0x7DD12019L;
        if (((*l_111) = ((0UL | ((safe_rshift_func_uint8_t_u_u(((p_65 , (l_97 = l_97)) == (*l_91)), (((p_63 &= ((*l_98) = 8UL)) == ((*l_106) = (safe_lshift_func_uint16_t_u_u((((((*l_108) ^= func_74(p_64, l_102, (g_23 != ((*l_106) |= (((safe_rshift_func_uint16_t_u_s(p_65, (*p_64))) || g_70) < 0xE755E18DL))))) == l_109) , g_85) && 0xCD71L), g_70)))) <= g_23))) , 0x2C1F1FEDL)) ^ l_109)))
        {
            int *l_125 = &g_37;
            short l_172 = 0x3A2DL;
            short l_207 = 7L;
            if (p_62)
            {
                unsigned short *l_116 = &g_117;
                unsigned char *l_122 = &g_123;
                int l_124 = 0xCFB6DD93L;
                g_68 = (func_48((safe_mul_func_uint16_t_u_u(((*l_116) = (g_107 ^ ((*l_111) &= (safe_div_func_int32_t_s_s(0L, g_107))))), (g_68 > g_99)))) & (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_122) = func_48((((p_63 && g_23) & 0xA1EEL) ^ 0L))), 7)), l_124)));
                g_68 = (((*l_111) &= p_62) && 0x1E483D77L);
            }
            else
            {
                unsigned l_140 = 0x42EE2B1DL;
                int l_158 = 0x7F956F52L;
                g_68 = g_117;
                l_97 = l_125;
                for (g_99 = 23; (g_99 >= 40); g_99 = safe_add_func_uint16_t_u_u(g_99, 6))
                {
                    unsigned l_137 = 4UL;
                    int l_148 = 1L;
                    const int *l_150 = &g_37;
                    const int **l_149 = &l_150;
                    short *l_153 = (void*)0;
                    (*l_111) = (p_63 == (((*l_125) , &p_63) == (p_63 , &g_99)));
                    if (p_62)
                    {
                        unsigned *l_134 = &g_135;
                        int ***l_136 = &l_90;
                        (*l_111) = (safe_lshift_func_uint8_t_u_u(p_65, 1));
                        (*l_136) = ((safe_lshift_func_uint8_t_u_u((p_63 , (safe_add_func_uint32_t_u_u(((*l_134) = p_65), g_99))), 3)) , (void*)0);
                        (*l_91) = l_125;
                    }
                    else
                    {
                        int l_143 = 0x11BA0C28L;
                        l_148 = (~(+((func_48(l_137) ^ ((safe_add_func_uint16_t_u_u((l_140 != (((~((safe_mod_func_uint16_t_u_u(g_135, (l_143 , (safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(g_68, g_123)), 0))))) > (*g_69))) > (0x25344571L < 4294967295UL)) , l_137)), p_62)) <= 0x376BL)) != 1UL)));
                    }
                    (*l_111) = (((*l_106) &= (l_149 != &l_111)) && (safe_mod_func_uint16_t_u_u((*l_97), (l_140 ^ ((void*)0 == l_153)))));
                    for (p_65 = (-5); (p_65 == 21); p_65 = safe_add_func_int32_t_s_s(p_65, 1))
                    {
                        l_148 = (safe_rshift_func_int16_t_s_u((g_68 | p_62), 6));
                        return (*g_69);
                    }
                }
                l_158 ^= p_62;
            }
            if (g_135)
            {
                unsigned l_159 = 0xFAE34B66L;
                int l_160 = 0xD9B2BB32L;
                const unsigned l_167 = 0UL;
                short *l_179 = &l_172;
                (*l_111) = p_65;
                if ((l_160 = (l_159 < (((*l_125) | g_70) >= g_23))))
                {
                    unsigned l_182 = 0UL;
                    char *l_183 = (void*)0;
                    unsigned **l_197 = &l_102;
                    unsigned **l_198 = (void*)0;
                    unsigned *l_200 = &l_182;
                    unsigned **l_199 = &l_200;
                    unsigned *l_202 = &g_23;
                    unsigned **l_201 = &l_202;
                    unsigned *l_208 = &l_159;
                    for (l_109 = 0; (l_109 == (-14)); l_109 = safe_sub_func_uint16_t_u_u(l_109, 3))
                    {
                        unsigned char *l_173 = &g_123;
                        unsigned char *l_174 = (void*)0;
                        unsigned char *l_175 = &g_176;
                        unsigned char *l_177 = &g_178;
                        (*l_111) = g_99;
                        if ((*l_125))
                            continue;
                        g_85 = (((safe_rshift_func_uint8_t_u_u(((((((*l_106) &= (((safe_mod_func_uint32_t_u_u(l_167, (safe_mod_func_int32_t_s_s((p_62 != p_62), (((*l_177) = (safe_mod_func_int8_t_s_s(l_172, ((*l_175) |= ((*l_173) = ((p_63 , (-1L)) == ((*l_98) = (&g_107 == (void*)0)))))))) , g_68))))) == l_167) ^ 0xA954L)) ^ 0x5EL) > 4294967295UL) != 0x1769B01DL) >= (*l_111)), 0)) | g_70) > p_65);
                        (*l_91) = &g_85;
                    }
                    (*l_111) = func_74(l_179, ((safe_sub_func_uint8_t_u_u(0UL, l_182)) , (func_74(&l_172, &g_135, (((*g_69) , l_183) == &g_107)) , l_125)), g_184);
                    (*l_111) = (safe_add_func_int16_t_s_s(0x8842L, ((*p_64) = ((safe_lshift_func_uint16_t_u_u(func_74(((safe_lshift_func_uint8_t_u_u(((void*)0 != &l_160), (((safe_rshift_func_uint16_t_u_u(g_135, (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(((*l_208) = ((((func_74(&g_70, ((*l_201) = (((*l_98) = (*l_125)) , ((*l_199) = ((*l_197) = &l_182)))), (g_85 &= func_48(((safe_rshift_func_uint16_t_u_s(((((((safe_mod_func_uint32_t_u_u(g_68, l_207)) == g_37) && g_123) < (*l_125)) || 1L) && 0xFB355C91L), (*p_64))) , p_63)))) , (void*)0) == (void*)0) <= p_63) >= 0x5F44L)), g_135)), (*g_69))))) && g_99) , 0x05L))) , (void*)0), &g_23, g_23), 0)) > p_62))));
                    (*l_91) = l_208;
                }
                else
                {
                    g_85 ^= p_65;
                }
            }
            else
            {
                return (*g_69);
            }
        }
        else
        {
            const int *l_209 = &g_37;
            const int **l_210 = (void*)0;
            const int **l_211 = &l_209;
            (*l_211) = l_209;
            for (g_135 = 0; (g_135 <= 44); g_135++)
            {
                const short *l_215 = (void*)0;
                const short **l_214 = &l_215;
                int l_227 = 0x4E4E45ECL;
                int *l_229 = &g_85;
                int *l_230 = (void*)0;
                int *l_231 = &g_68;
                (*l_111) |= ((((*l_214) = l_108) == (void*)0) , g_117);
                g_232 &= ((safe_add_func_int32_t_s_s(func_48(p_65), p_62)) != func_74(l_218, &g_23, ((*l_231) |= ((*l_229) = ((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(p_65, (safe_sub_func_uint8_t_u_u(((*l_98) = (&l_91 == ((g_107 > ((((safe_mod_func_uint8_t_u_u((l_227 ^= ((*g_69) >= 65535UL)), 0x8FL)) & (*l_97)) , p_62) , g_70)) , &l_210))), 0xB0L)))), (*g_69))) != l_228)))));
            }
        }
        for (g_85 = 0; (g_85 <= 11); g_85++)
        {
            short l_241 = 0xCDFCL;
            int *l_254 = &g_85;
            unsigned short l_264 = 0x0CE0L;
            if (g_99)
            {
                short l_256 = (-3L);
                if ((*l_97))
                {
                    char *l_242 = &g_243;
                    unsigned *l_244 = &l_228;
                    unsigned short *l_251 = &g_117;
                    int l_252 = 0x71EECA51L;
                    int l_253 = 0x728450BEL;
                    g_68 &= (safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((((*l_244) = ((safe_lshift_func_uint16_t_u_u(g_107, 6)) & ((&g_23 != (void*)0) >= ((*l_242) |= (func_48(g_37) != (7L > l_241)))))) || (safe_lshift_func_uint8_t_u_s((((safe_div_func_int8_t_s_s((&g_85 != (((*g_69) = (safe_sub_func_uint16_t_u_u((~(l_252 = ((*l_251) = 0xCFADL))), 0x6420L))) , &l_252)), 255UL)) , p_62) != g_176), 1))), l_253)), g_135));
                }
                else
                {
                    unsigned short l_255 = 1UL;
                    int *l_257 = &l_109;
                    (*l_91) = l_254;
                    (*l_257) &= (l_255 , l_256);
                    (*l_91) = &g_68;
                    (*l_92) &= (safe_mod_func_int32_t_s_s(g_117, l_256));
                }
            }
            else
            {
                for (g_107 = (-16); (g_107 >= 22); g_107 = safe_add_func_uint8_t_u_u(g_107, 1))
                {
                    int *l_265 = &g_85;
                    (*l_91) = ((safe_div_func_int32_t_s_s(l_264, (g_178 , p_62))) , l_265);
                    return (*g_69);
                }
            }
        }
        (*l_91) = &g_37;
    }
    else
    {
        (*l_91) = &g_85;
    }
    g_68 |= ((+0xA1BA6F03L) > (safe_add_func_uint32_t_u_u(p_65, (**l_91))));
    (*l_91) = (void*)0;
    return (*p_64);
}







static short func_74(short * p_75, unsigned * p_76, const int p_77)
{
    int *l_84 = &g_85;
    unsigned char l_86 = 5UL;
    int *l_87 = &g_85;
    int l_88 = (-3L);
    (*l_87) &= ((l_86 = (func_48(g_68) , (safe_rshift_func_uint8_t_u_s(g_68, ((l_84 = p_76) == (void*)0))))) && 1UL);
    l_88 &= g_85;
    return (*l_84);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_634, "g_634", print_hash_value);
    transparent_crc(g_684, "g_684", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_833, "g_833", print_hash_value);
    transparent_crc(g_852, "g_852", print_hash_value);
    transparent_crc(g_907, "g_907", print_hash_value);
    transparent_crc(g_1077, "g_1077", print_hash_value);
    transparent_crc(g_1079, "g_1079", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
