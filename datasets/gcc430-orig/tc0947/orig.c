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


struct S0 {
   unsigned f0 : 21;
   signed f1 : 22;
   signed : 0;
   signed f2 : 12;
};

struct S1 {
   unsigned f0 : 14;
   unsigned f1 : 27;
   signed f2 : 6;
   unsigned f3 : 21;
};

struct S2 {
   unsigned f0 : 9;
   unsigned char f1;
   short f2;
   unsigned char f3;
};


static struct S1 g_4 = {79,5713,-6,727};
static int g_8 = 0xC2489102L;
static struct S0 g_21 = {217,1396,-45};
static int g_22 = (-1L);
static struct S1 *g_50 = &g_4;
static struct S1 **g_49 = &g_50;
static unsigned char g_63 = 1UL;
static struct S2 g_64 = {7,0xA0L,0x94A7L,2UL};
static int g_72 = 0L;
static int *g_76 = &g_72;
static short g_81 = 0x78C3L;
static short g_82 = 0L;
static unsigned g_85 = 0x8270AEE9L;
static unsigned short g_97 = 0x64ACL;
static struct S2 **g_136 = (void*)0;
static unsigned char **g_138 = (void*)0;
static unsigned char g_170 = 6UL;
static int g_176 = 0x04EE4DB1L;
static int *g_193 = &g_72;
static short *g_211 = &g_64.f2;
static short **g_210 = &g_211;
static char g_216 = 0x4FL;
static int g_231 = 4L;
static int g_233 = (-7L);
static int g_234 = 0x8F6B6309L;
static struct S2 g_242 = {15,0xDDL,-3L,0x0EL};
static struct S2 *g_241 = &g_242;
static struct S1 g_328 = {6,7302,-2,324};
static unsigned short g_402 = 4UL;
static unsigned short g_476 = 0UL;
static int g_494 = (-7L);
static struct S0 *g_505 = &g_21;
static short g_528 = (-3L);
static struct S2 ****g_737 = (void*)0;
static unsigned char **g_758 = (void*)0;
static int **g_769 = &g_193;
static int ***g_768 = &g_769;
static short ***g_793 = &g_210;
static short ****g_792 = &g_793;
static char g_814 = 1L;
static char g_822 = 5L;
static short **g_857 = &g_211;
static int g_916 = 3L;
static int ****g_931 = &g_768;
static int *****g_930 = &g_931;
static int *****g_932 = (void*)0;
static short g_972 = 8L;
static unsigned g_980 = 0x9EE9E7C8L;
static unsigned g_983 = 4294967295UL;
static int g_985 = 0xF9CC91B5L;
static unsigned g_1003 = 0UL;
static unsigned short *g_1011 = &g_476;
static unsigned short **g_1010 = &g_1011;
static struct S0 g_1043 = {713,-342,-25};
static unsigned char g_1066 = 7UL;



static struct S1 func_1(void);
static short func_2(struct S1 p_3);
static unsigned func_5(struct S1 p_6);
static int func_11(int p_12);
static struct S2 func_13(char p_14, struct S1 p_15, unsigned p_16, struct S1 p_17, unsigned short p_18);
static char func_19(struct S0 p_20);
static struct S0 func_25(struct S0 p_26, unsigned p_27, int p_28);
static struct S0 func_29(struct S2 p_30, char p_31, int p_32);
static int * func_40(struct S1 * p_41, short p_42);
static struct S1 * func_43(struct S1 * p_44, struct S1 ** p_45, unsigned char p_46, struct S0 p_47, unsigned p_48);
static struct S1 func_1(void)
{
    struct S1 l_910 = {108,1774,-0,916};
    struct S1 l_911 = {15,248,2,297};
    int ****l_924 = &g_768;
    struct S1 l_925 = {10,1363,-1,690};
    struct S2 ***l_929 = &g_136;
    unsigned char l_944 = 0x69L;
    char *l_995 = &g_216;
    char **l_994 = &l_995;
    struct S1 ***l_1008 = &g_49;
    struct S0 l_1040 = {1223,-862,16};
    struct S1 l_1049 = {70,6155,1,1234};
    char l_1057 = 0xE5L;
    unsigned char *l_1077 = &g_242.f1;
    int *l_1083 = &g_234;
    unsigned char l_1104 = 1UL;
    if (((func_2(g_4) , (((safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s((safe_add_func_int32_t_s_s((*g_76), (l_911.f2 , ((*g_505) , (((g_82 || g_21.f2) <= g_64.f0) >= 0x8DE8L))))))) != g_64.f1), 255UL)) | 255UL) , l_910.f3)) , 1L))
    {
        unsigned char l_912 = 4UL;
        int ****l_914 = (void*)0;
        int *****l_913 = &l_914;
        unsigned char *l_915 = &g_170;
        struct S0 *l_917 = &g_21;
        struct S1 *l_926 = &l_911;
        (*g_769) = (((l_912 < (((*l_915) = (((*l_913) = &g_768) == &g_768)) && (~g_242.f1))) && (*g_76)) , &g_72);
        g_505 = l_917;
        (*****l_913) = ((((safe_add_func_int32_t_s_s((-6L), (safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((0x2AL <= (3UL < (0UL <= func_5(((*l_926) = (((****g_792) <= (((((l_924 == &g_768) , func_5(l_925)) <= g_328.f1) ^ (**g_210)) || (*****l_913))) , l_911)))))) & 0xA3CEL), g_916)) == (****l_924)), g_82)))) || 0xEF2CCF95L) != (****l_924)) , 0xD7575BD3L);
    }
    else
    {
        int l_933 = 0xE3047012L;
        struct S1 l_935 = {9,2154,-0,73};
        struct S0 *l_940 = &g_21;
        int l_951 = 0x97C6A224L;
        struct S2 l_958 = {17,251UL,0x3F97L,0x3EL};
        char **l_971 = (void*)0;
        unsigned l_976 = 4294967289UL;
        int l_1028 = 0L;
        char l_1047 = 1L;
        unsigned char **l_1099 = (void*)0;
        (*g_76) = (*g_76);
        for (g_242.f1 = 0; (g_242.f1 <= 39); g_242.f1 = safe_add_func_uint8_t_u_u(g_242.f1, 3))
        {
            unsigned *l_934 = &g_85;
            int l_943 = (-4L);
            struct S1 l_953 = {9,961,1,1080};
            struct S2 **l_1015 = (void*)0;
            unsigned short l_1016 = 0x6B36L;
            struct S1 *l_1039 = &g_4;
            struct S1 l_1051 = {10,7836,-5,1006};
            struct S1 l_1056 = {112,2709,-6,245};
            struct S2 ****l_1097 = &l_929;
        }
    }
    if (g_328.f1)
        goto lbl_1110;
lbl_1110:
    (*l_1083) = 0x8AFE22F8L;
    g_328 = l_1049;
    return g_4;
}







static short func_2(struct S1 p_3)
{
    struct S1 l_7 = {73,1610,-7,1226};
    unsigned short *l_708 = &g_476;
    unsigned char *l_709 = &g_64.f1;
    struct S0 l_740 = {891,-1504,-15};
    int *l_753 = (void*)0;
    struct S2 *l_777 = &g_64;
    struct S2 **l_783 = &l_777;
    short ****l_787 = (void*)0;
    short *****l_786 = &l_787;
    struct S1 *l_788 = &g_328;
    short l_789 = 1L;
    unsigned char **l_806 = &l_709;
    int l_821 = 0x7FBF1079L;
    int ***l_864 = &g_769;
    int ***l_866 = &g_769;
lbl_878:
    if ((func_5(l_7) || (((*l_709) = (safe_mod_func_int16_t_s_s(l_7.f1, ((*l_708) = l_7.f3)))) , (-1L))))
    {
        short l_714 = 0xED94L;
        unsigned *l_715 = &g_85;
        int l_721 = 4L;
        struct S1 l_742 = {100,8477,-2,917};
        unsigned char **l_751 = &l_709;
        struct S0 l_772 = {250,1785,-21};
        (*g_241) = func_13((((safe_lshift_func_int16_t_s_s(0x499BL, 12)) & ((*l_715) = (p_3.f0 >= (safe_lshift_func_int8_t_s_u(l_714, 2))))) , 1L), p_3, (safe_unary_minus_func_int32_t_s(((*g_193) = 0x076D994CL))), p_3, (p_3.f0 , (safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(l_721, g_328.f1)), l_721))));
        for (g_494 = 0; (g_494 < (-29)); g_494 = safe_sub_func_uint32_t_u_u(g_494, 2))
        {
            int *l_724 = &g_72;
            int **l_725 = &g_193;
            struct S2 ***l_739 = (void*)0;
            struct S2 ****l_738 = &l_739;
            struct S0 l_743 = {305,-1093,-23};
            struct S1 l_767 = {51,7873,1,901};
            unsigned l_776 = 0UL;
            (*l_725) = l_724;
            for (g_242.f3 = 0; (g_242.f3 < 27); g_242.f3 = safe_add_func_int32_t_s_s(g_242.f3, 8))
            {
                int *l_728 = &g_233;
                (*g_49) = &p_3;
                (*l_725) = ((**g_210) , &g_234);
                g_193 = l_728;
            }
        }
    }
    else
    {
        int *l_781 = &g_72;
        struct S2 *l_782 = &g_242;
        (**g_768) = l_781;
        (*g_769) = func_40(&p_3, p_3.f1);
        l_782 = &g_242;
        (*g_49) = (*g_49);
    }
    (*g_769) = l_753;
    (*l_783) = l_777;
    if (((((*g_505) = (*g_505)) , ((*l_777) = func_13(((safe_sub_func_int8_t_s_s(p_3.f0, (((*g_50) , l_786) == (l_740 , &l_787)))) , 0L), ((*l_788) = l_7), l_789, p_3, g_242.f1))) , 0x9B29232EL))
    {
        short ****l_794 = &g_793;
        int ***l_799 = &g_769;
        char *l_800 = &g_216;
        struct S2 **l_807 = (void*)0;
        int l_818 = 0L;
        unsigned short l_834 = 0x7559L;
        short *l_844 = &g_64.f2;
        struct S1 l_885 = {112,9573,1,717};
        if (((safe_add_func_int8_t_s_s(((p_3.f0 , (((g_792 != l_794) , (safe_add_func_uint16_t_u_u(g_72, (((*l_786) = &g_793) == (void*)0)))) || g_402)) , ((*l_800) = (&g_769 != ((safe_lshift_func_int8_t_s_s(p_3.f0, 3)) , l_799)))), p_3.f1)) < p_3.f1))
        {
            struct S2 *l_803 = &g_64;
            int l_812 = 0x6A7D3A50L;
            struct S1 l_829 = {94,7086,-1,651};
            if ((safe_lshift_func_uint16_t_u_u(0UL, 4)))
            {
                unsigned char **l_804 = &l_709;
                unsigned char ***l_805 = &l_804;
                int l_809 = 0L;
                (**g_768) = (void*)0;
                l_806 = (((l_803 != l_803) != p_3.f1) , ((*l_805) = l_804));
                (*g_769) = (**g_768);
                if (p_3.f2)
                {
                    unsigned *l_808 = &g_85;
                    char *l_813 = &g_814;
                    int l_815 = (-1L);
                    (*g_76) = ((((*l_800) = 4L) != ((*l_813) = (p_3 , ((p_3.f2 <= (-1L)) == 0x70L)))) < l_815);
                    g_822 = ((safe_lshift_func_uint16_t_u_u(g_234, (l_815 & (l_818 <= (safe_rshift_func_uint16_t_u_s(0x499BL, l_821)))))) && p_3.f1);
                    for (g_82 = 0; (g_82 > 27); g_82++)
                    {
                        p_3.f2 = (*g_76);
                    }
                    if (p_3.f2)
                    {
                        p_3.f2 = ((*g_76) = (-1L));
                        return p_3.f0;
                    }
                    else
                    {
                        (*g_76) = p_3.f0;
                    }
                }
                else
                {
                    g_4.f2 = (safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((+(((~g_21.f1) ^ ((***g_793) = 0x88D7L)) != func_5(l_829))), ((l_812 = (l_7.f2 = (((*g_76) = (((((g_402 = ((*g_505) , ((*l_708) = g_242.f0))) == p_3.f0) | ((+(((p_3 , 1L) >= 0x8592L) < g_85)) == p_3.f1)) && 0x2F2301DDL) != p_3.f0)) && p_3.f0))) | l_809))), l_829.f0));
                    p_3.f2 = (safe_lshift_func_uint8_t_u_u(0x56L, 5));
                    (**g_768) = &l_809;
                }
            }
            else
            {
                unsigned l_856 = 4294967295UL;
                for (g_22 = (-25); (g_22 <= (-13)); ++g_22)
                {
                    int *l_835 = (void*)0;
                    short **l_858 = &l_844;
                    (*g_769) = l_835;
                    p_3.f2 = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((g_242.f2 , (250UL & (safe_add_func_int8_t_s_s(((((((safe_add_func_uint8_t_u_u(((((***g_792) = (***l_787)) != l_844) , (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((((*g_76) = p_3.f3) > (p_3.f1 , (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(p_3.f3, (safe_mod_func_int16_t_s_s((***g_793), (((safe_unary_minus_func_uint8_t_u(p_3.f0)) & p_3.f0) , l_829.f1))))), p_3.f0)))) , l_856), 3)), 7))), g_328.f3)) , g_857) == l_858) , g_476) > 0L) >= l_856), l_856)))) == p_3.f0), p_3.f0)), l_829.f1)) == p_3.f0);
                    if (l_829.f0)
                        break;
                }
            }
            return p_3.f2;
        }
        else
        {
            int ****l_865 = (void*)0;
            unsigned *l_867 = &g_85;
            unsigned char **l_887 = &l_709;
            struct S0 *l_894 = &g_21;
            int l_900 = 0xF590383AL;
            char **l_902 = &l_800;
            (*g_76) = (l_740.f1 = ((255UL || g_402) & (p_3.f2 && ((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((((*g_211) & (****g_792)) > 0x70537C94L))), p_3.f1)) , (*g_76)))));
            (*g_76) = (*g_76);
            for (g_81 = (-15); (g_81 < (-6)); g_81 = safe_add_func_int32_t_s_s(g_81, 3))
            {
                int *l_877 = &g_234;
                int l_899 = 0x10049231L;
                unsigned char l_901 = 255UL;
                for (g_476 = (-6); (g_476 >= 60); g_476 = safe_add_func_uint8_t_u_u(g_476, 8))
                {
                    char l_874 = 0x77L;
                    int *l_879 = &g_234;
                    struct S2 l_888 = {4,0x74L,0x9CDCL,0xFBL};
                    char **l_903 = &l_800;
                    (**l_864) = ((safe_sub_func_uint16_t_u_u(p_3.f3, (func_5(p_3) , (((l_874 == (((safe_lshift_func_int8_t_s_s(p_3.f3, 2)) ^ (p_3.f1 , (***g_793))) && (p_3.f3 & (0x039C5D6AL <= g_234)))) >= p_3.f3) >= 0L)))) , l_877);
                    if (l_789)
                        goto lbl_878;
                    if (func_5((*l_788)))
                    {
                        if (p_3.f3)
                            break;
                        (**g_768) = l_879;
                        if ((*l_879))
                            continue;
                    }
                    else
                    {
                        struct S0 **l_880 = &g_505;
                        unsigned char **l_886 = &l_709;
                        int l_893 = 0xFA90D4B8L;
                        (*l_880) = (void*)0;
                        (*l_880) = (((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((((func_5(l_885) , l_886) == l_887) && ((g_234 ^ p_3.f3) < func_11((p_3.f2 = (l_888 , (1L & (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((p_3.f0 < l_893), p_3.f3)), 6)))))))) != g_4.f2), 4)) , g_476), g_63)) < (***g_793)) , l_894);
                        if ((*g_76))
                            continue;
                        (**g_768) = (**l_864);
                    }
                    if (((((safe_rshift_func_uint16_t_u_u(func_5(((**g_49) = (**g_49))), (safe_sub_func_int32_t_s_s((((***l_799) = ((*g_505) , ((void*)0 == (*g_857)))) >= (g_64.f2 , (*g_211))), l_899)))) >= ((((void*)0 == g_138) ^ l_900) & (**g_210))) > l_901) ^ g_494))
                    {
                        l_903 = l_902;
                    }
                    else
                    {
                        (**l_864) = &l_899;
                    }
                }
            }
            (*g_76) = (-1L);
        }
    }
    else
    {
        struct S0 **l_904 = &g_505;
        (*g_76) = (p_3.f1 || g_4.f1);
        (*l_904) = &g_21;
    }
    return (****g_792);
}







static unsigned func_5(struct S1 p_6)
{
    unsigned short l_513 = 0UL;
    struct S0 **l_516 = &g_505;
    struct S1 l_541 = {43,670,0,747};
    int *l_543 = &g_72;
    short *l_546 = &g_242.f2;
    struct S1 l_590 = {51,231,-1,600};
    struct S2 l_607 = {14,1UL,-10L,255UL};
    struct S2 ***l_632 = &g_136;
    short ***l_637 = &g_210;
    short ****l_636 = &l_637;
    unsigned char *l_648 = &g_170;
    unsigned char **l_647 = &l_648;
    for (g_8 = 25; (g_8 > (-1)); --g_8)
    {
        char l_492 = 0x73L;
        int *l_493 = &g_494;
        struct S2 *l_499 = &g_64;
        struct S0 *l_503 = &g_21;
        char *l_517 = &g_216;
        unsigned l_518 = 0xC7B3E68CL;
        short **l_519 = &g_211;
        int *l_520 = (void*)0;
        int *l_521 = &g_176;
        struct S1 l_538 = {21,4821,6,792};
        int l_614 = 0x196AC56CL;
        short ****l_639 = &l_637;
        unsigned short *l_656 = (void*)0;
        struct S1 l_680 = {45,9275,3,1081};
    }
    return g_242.f3;
}







static int func_11(int p_12)
{
    struct S0 *l_501 = &g_21;
    struct S0 **l_500 = &l_501;
    (*l_500) = &g_21;
    return (*g_193);
}







static struct S2 func_13(char p_14, struct S1 p_15, unsigned p_16, struct S1 p_17, unsigned short p_18)
{
    char l_495 = 0x1EL;
    struct S1 l_496 = {64,1193,-7,3};
    struct S1 *l_497 = &g_4;
    struct S2 l_498 = {7,0x57L,0L,246UL};
    (*g_76) = ((l_495 || (g_4.f3 = ((p_15 , ((l_495 , 248UL) <= p_15.f0)) | p_16))) >= (p_17.f3 , g_4.f0));
    (*l_497) = l_496;
    return l_498;
}







static char func_19(struct S0 p_20)
{
    unsigned l_36 = 0x0C63704BL;
    struct S1 *l_291 = &g_4;
    struct S2 l_320 = {15,0x54L,0xC6FAL,6UL};
    int l_331 = (-2L);
    struct S0 l_332 = {1153,589,-48};
    struct S2 **l_393 = &g_241;
    int *l_417 = &g_234;
    struct S1 *l_418 = (void*)0;
    for (g_22 = 3; (g_22 < (-17)); g_22 = safe_sub_func_int32_t_s_s(g_22, 6))
    {
        struct S2 l_33 = {21,254UL,1L,0x05L};
        (*g_193) = (func_25(func_29(l_33, (safe_rshift_func_uint8_t_u_s(l_36, 6)), (g_21.f1 = g_21.f0)), g_8, p_20.f1) , 0x627BD82AL);
        for (l_36 = (-11); (l_36 != 42); l_36 = safe_add_func_int32_t_s_s(l_36, 6))
        {
            short l_271 = 0xD77CL;
            unsigned *l_276 = (void*)0;
            unsigned *l_277 = &g_85;
            int **l_278 = &g_76;
        }
        return g_21.f0;
    }
    if (l_36)
    {
        int *l_282 = (void*)0;
        int l_306 = (-2L);
        struct S1 **l_321 = &l_291;
        char *l_326 = &g_216;
        (*g_76) = l_36;
        for (g_64.f2 = 1; (g_64.f2 <= (-29)); g_64.f2 = safe_sub_func_int8_t_s_s(g_64.f2, 1))
        {
            unsigned short l_281 = 0x4C2DL;
            if (l_281)
                break;
            l_282 = func_40((*g_49), l_36);
            if ((*g_76))
                break;
        }
        if (((safe_sub_func_int8_t_s_s(0xFDL, (safe_lshift_func_int16_t_s_u((g_97 || p_20.f2), g_8)))) , ((safe_unary_minus_func_int8_t_s(g_64.f2)) || p_20.f1)))
        {
            struct S0 *l_303 = &g_21;
            int *l_314 = &g_234;
            unsigned char l_318 = 0x2FL;
            struct S1 l_327 = {98,10068,-1,338};
            unsigned char ***l_329 = &g_138;
            unsigned l_382 = 0xE222A196L;
            struct S2 ***l_394 = (void*)0;
            struct S2 ***l_395 = &g_136;
            for (g_234 = 0; (g_234 <= (-19)); --g_234)
            {
                unsigned short *l_290 = &g_97;
                int l_294 = 0x83642408L;
                struct S1 l_298 = {41,2466,5,984};
                struct S1 **l_323 = &g_50;
                struct S1 ***l_322 = &l_323;
                unsigned *l_330 = &g_85;
                int *l_335 = &g_231;
                struct S1 l_339 = {40,8895,0,467};
                struct S0 *l_363 = &g_21;
                struct S0 l_366 = {1421,-99,-59};
                char l_385 = 0xCAL;
            }
            (*l_395) = l_393;
            if (p_20.f0)
            {
                unsigned char *l_396 = &g_64.f3;
                int l_401 = 0xCEDF1394L;
                struct S0 l_403 = {642,514,52};
                int **l_404 = &g_193;
                (*l_404) = func_40(func_43(func_43(l_291, &g_50, ((((*l_396) = p_20.f0) != (l_320.f3 , p_20.f1)) != (safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_s(0xE442L, 14)) != (l_401 || g_402)) , l_393) != l_393), 7))), p_20, p_20.f1), &g_50, l_320.f0, l_403, p_20.f2), (*l_314));
                (*l_314) = (((*l_291) , ((p_20.f0 ^ (p_20.f2 <= 0x7DL)) , (***l_395))) , (*l_314));
            }
            else
            {
                int **l_405 = &l_282;
                short *l_413 = (void*)0;
                (*l_405) = (g_76 = &g_72);
                for (g_170 = 0; (g_170 >= 48); ++g_170)
                {
                    unsigned short l_410 = 0UL;
                    unsigned *l_411 = &g_85;
                    struct S1 *l_416 = (void*)0;
                    if (((g_4.f3 | l_320.f1) == ((safe_mod_func_uint32_t_u_u(l_410, p_20.f2)) , ((*l_411) = 4UL))))
                    {
                        return g_328.f1;
                    }
                    else
                    {
                        struct S1 *l_412 = &g_4;
                        int l_414 = 0x6198894FL;
                        int *l_415 = &l_331;
                        (*l_314) = (g_170 , p_20.f2);
                        l_415 = func_40(func_43(l_412, &g_50, (g_242.f1 , ((void*)0 != l_413)), (((l_393 == (void*)0) <= (-10L)) , ((*l_303) = func_29((*g_241), l_410, (*g_76)))), l_332.f0), l_414);
                        (*l_405) = func_40(l_416, (l_410 ^ 0L));
                    }
                }
                (*l_405) = &l_331;
            }
            return (*l_314);
        }
        else
        {
            l_417 = &l_306;
        }
    }
    else
    {
        struct S1 *l_419 = &g_4;
        unsigned l_420 = 4294967295UL;
        short *l_423 = &l_320.f2;
        struct S2 l_424 = {17,1UL,0L,0xD2L};
        struct S1 l_453 = {46,6978,4,346};
        struct S0 l_454 = {289,-1767,-3};
        int *l_474 = &g_8;
        g_76 = func_40((l_419 = l_418), p_20.f2);
        (*l_417) = l_420;
        if (((+(safe_lshift_func_int8_t_s_u(p_20.f1, 5))) | (l_423 != l_423)))
        {
            unsigned short l_429 = 0xF74DL;
            unsigned short *l_430 = &g_97;
            int l_435 = 1L;
            struct S0 *l_437 = &g_21;
            struct S0 **l_436 = &l_437;
            (*g_76) = ((l_424 , ((safe_mod_func_uint8_t_u_u((((*l_430) = (safe_rshift_func_uint16_t_u_u((l_429 = p_20.f1), 0))) | (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(0xFCL, 4)), (l_435 = 1UL)))), 255UL)) | p_20.f1)) >= l_420);
            (*l_436) = &g_21;
        }
        else
        {
            unsigned char l_440 = 246UL;
            unsigned l_449 = 0xE69716B1L;
            struct S1 l_455 = {113,9142,0,795};
            struct S2 l_473 = {0,246UL,0L,0x69L};
            for (l_36 = 0; (l_36 < 54); l_36++)
            {
                struct S1 **l_444 = &l_419;
                struct S1 ***l_443 = &l_444;
                unsigned *l_452 = &g_85;
                if ((*g_76))
                {
                    int *l_441 = (void*)0;
                    (*l_417) = l_440;
                    if ((*l_417))
                        continue;
                    l_441 = func_40((*g_49), l_424.f3);
                }
                else
                {
                    struct S2 l_442 = {16,0xC5L,1L,0xBCL};
                    (**l_393) = l_442;
                }
                (**l_443) = (*g_49);
                (*l_419) = l_455;
                (*g_76) = (p_20.f0 > ((*l_417) != p_20.f2));
            }
            for (g_81 = 7; (g_81 == 12); g_81 = safe_add_func_uint16_t_u_u(g_81, 4))
            {
                unsigned l_468 = 4294967289UL;
                int *l_472 = &g_72;
                int **l_475 = &g_76;
            }
        }
    }
    return p_20.f0;
}







static struct S0 func_25(struct S0 p_26, unsigned p_27, int p_28)
{
    short l_227 = (-8L);
    int *l_230 = &g_231;
    int *l_232 = &g_233;
    struct S2 l_261 = {15,0UL,-6L,0x25L};
    int **l_262 = &l_232;
    int **l_263 = &l_230;
    struct S1 *l_264 = &g_4;
    short ***l_267 = &g_210;
    struct S1 l_268 = {71,11099,-7,973};
    if ((g_234 = ((((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s((l_227 & 0UL), p_28)) != (((*g_76) = l_227) != ((*l_232) = ((0x2228BB7CL || (safe_sub_func_uint32_t_u_u(l_227, ((*l_230) = p_28)))) < p_27)))), 4)) < p_26.f1) ^ p_26.f1) != 0x8CA1L)))
    {
        struct S0 l_238 = {1318,-843,-41};
        for (g_64.f3 = (-22); (g_64.f3 == 38); g_64.f3 = safe_add_func_uint8_t_u_u(g_64.f3, 1))
        {
            struct S0 *l_237 = (void*)0;
            struct S2 *l_240 = &g_64;
            int l_256 = 0xC2B5224EL;
            struct S1 l_260 = {82,2822,-2,1223};
            l_238 = p_26;
            if (l_238.f0)
            {
                unsigned l_239 = 0x40334515L;
                if (l_239)
                    break;
                if (p_26.f0)
                    continue;
                if ((*g_76))
                    break;
                g_241 = l_240;
            }
            else
            {
                unsigned short l_247 = 0x8999L;
                unsigned char *l_257 = &g_242.f1;
                for (g_242.f1 = 0; (g_242.f1 != 45); g_242.f1 = safe_add_func_int32_t_s_s(g_242.f1, 1))
                {
                    short ***l_248 = &g_210;
                    int l_249 = 0x5C9A8529L;
                    unsigned char *l_258 = &g_242.f3;
                    unsigned *l_259 = &g_85;
                    (*l_230) = (safe_lshift_func_int8_t_s_s((l_247 != ((void*)0 == l_248)), 4));
                    (*g_193) = (+((g_21 , (((l_249 < (safe_sub_func_int32_t_s_s(0x512604FDL, ((*l_259) = (safe_sub_func_int8_t_s_s((+g_4.f0), (((((((*l_232) = ((safe_add_func_int32_t_s_s((*g_76), 0x432B5069L)) != l_256)) ^ p_26.f2) , (0x10L != 0x74L)) >= g_82) , l_257) != l_258))))))) , g_4.f0) , p_28)) | l_238.f1));
                    (*g_76) = (*g_76);
                }
            }
            l_260 = (p_26.f1 , (*g_50));
        }
        (*g_49) = (void*)0;
    }
    else
    {
        l_261 = (*g_241);
    }
    (*l_263) = ((*l_262) = l_232);
    (*l_263) = ((*l_262) = func_40(l_264, (l_261 , ((safe_rshift_func_uint16_t_u_u((l_267 == l_267), (((*l_230) | g_233) && ((((l_268 , (p_28 <= (g_97 >= 0x85L))) ^ p_26.f0) , p_26.f1) != p_26.f0)))) ^ p_28))));
    return g_21;
}







static struct S0 func_29(struct S2 p_30, char p_31, int p_32)
{
    struct S1 *l_38 = &g_4;
    struct S1 **l_37 = &l_38;
    struct S1 *l_39 = (void*)0;
    int l_51 = (-9L);
    struct S0 l_52 = {619,1518,-23};
    char *l_215 = &g_216;
    int *l_218 = &g_72;
    l_39 = ((*l_37) = &g_4);
    l_218 = func_40(func_43((*l_37), g_49, g_8, ((l_51 , ((*l_39) = (*l_38))) , l_52), p_30.f2), (((*l_215) = ((p_30.f0 > p_30.f0) > g_64.f3)) < 0x03L));
    return g_21;
}







static int * func_40(struct S1 * p_41, short p_42)
{
    int *l_217 = &g_72;
    (*g_76) = (*g_193);
    return l_217;
}







static struct S1 * func_43(struct S1 * p_44, struct S1 ** p_45, unsigned char p_46, struct S0 p_47, unsigned p_48)
{
    int *l_54 = &g_22;
    int **l_53 = &l_54;
    unsigned char *l_61 = (void*)0;
    unsigned char *l_62 = &g_63;
    char l_65 = 1L;
    char l_66 = (-1L);
    struct S2 l_190 = {1,0UL,0xA293L,0xA1L};
    unsigned l_196 = 0x8BF2FC47L;
    int *l_207 = &g_8;
    short ***l_212 = &g_210;
    (*l_53) = (void*)0;
    g_4.f2 = (safe_sub_func_int8_t_s_s((g_8 | g_21.f0), ((((safe_mod_func_int8_t_s_s((p_46 | 0xF617L), ((*l_62) = (safe_lshift_func_int16_t_s_s((1L < (g_8 , ((void*)0 == (*g_49)))), 6))))) || ((g_64 , 0xFBL) <= l_65)) <= l_66) , g_21.f1)));
    for (g_64.f1 = 0; (g_64.f1 != 34); g_64.f1++)
    {
        int *l_71 = &g_72;
        short *l_79 = &g_64.f2;
        short *l_80 = &g_81;
        unsigned *l_83 = (void*)0;
        unsigned *l_84 = &g_85;
        char *l_86 = &l_66;
        (*l_71) = ((safe_add_func_int16_t_s_s(g_4.f1, (!g_22))) || (p_48 > p_47.f0));
        if ((safe_rshift_func_uint8_t_u_s(p_48, 1)))
        {
            (*l_53) = (*l_53);
        }
        else
        {
            int **l_75 = (void*)0;
            g_76 = ((*l_53) = l_71);
        }
        p_47.f1 = ((*l_71) = ((+((*l_86) = (safe_lshift_func_int16_t_s_u((((((g_64.f0 != ((((*l_79) = g_64.f3) > ((*l_80) = g_4.f0)) || p_46)) > ((*p_44) , ((*l_84) = (+(p_47.f2 || ((g_82 = (((*l_53) = (*l_53)) == (void*)0)) | g_21.f2)))))) == g_64.f3) || (*l_71)) >= (*g_76)), 2)))) < p_48));
    }
    if (l_65)
    {
        int *l_87 = (void*)0;
        (*l_53) = l_87;
    }
    else
    {
        short l_94 = 0x658AL;
        unsigned short *l_95 = (void*)0;
        unsigned short *l_96 = &g_97;
        unsigned *l_100 = (void*)0;
        unsigned *l_101 = &g_85;
        int l_137 = 0L;
        struct S2 l_168 = {10,0x17L,0xA281L,0x64L};
        struct S0 *l_187 = &g_21;
        struct S1 l_189 = {90,4972,-2,498};
        unsigned char **l_204 = &l_61;
        short **l_208 = (void*)0;
        struct S0 l_214 = {1371,-847,-46};
    }
    return (*p_45);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
    transparent_crc(g_4.f1, "g_4.f1", print_hash_value);
    transparent_crc(g_4.f2, "g_4.f2", print_hash_value);
    transparent_crc(g_4.f3, "g_4.f3", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_21.f1, "g_21.f1", print_hash_value);
    transparent_crc(g_21.f2, "g_21.f2", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
    transparent_crc(g_64.f3, "g_64.f3", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_242.f0, "g_242.f0", print_hash_value);
    transparent_crc(g_242.f1, "g_242.f1", print_hash_value);
    transparent_crc(g_242.f2, "g_242.f2", print_hash_value);
    transparent_crc(g_242.f3, "g_242.f3", print_hash_value);
    transparent_crc(g_328.f0, "g_328.f0", print_hash_value);
    transparent_crc(g_328.f1, "g_328.f1", print_hash_value);
    transparent_crc(g_328.f2, "g_328.f2", print_hash_value);
    transparent_crc(g_328.f3, "g_328.f3", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    transparent_crc(g_916, "g_916", print_hash_value);
    transparent_crc(g_972, "g_972", print_hash_value);
    transparent_crc(g_980, "g_980", print_hash_value);
    transparent_crc(g_983, "g_983", print_hash_value);
    transparent_crc(g_985, "g_985", print_hash_value);
    transparent_crc(g_1003, "g_1003", print_hash_value);
    transparent_crc(g_1043.f0, "g_1043.f0", print_hash_value);
    transparent_crc(g_1043.f1, "g_1043.f1", print_hash_value);
    transparent_crc(g_1043.f2, "g_1043.f2", print_hash_value);
    transparent_crc(g_1066, "g_1066", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
