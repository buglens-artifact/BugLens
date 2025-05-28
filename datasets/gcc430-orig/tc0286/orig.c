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
   unsigned short f0;
   unsigned f1;
   unsigned f2;
   short f3;
   char f4;
   int f5;
   short f6;
   short f7;
};

struct S1 {
   short f0;
};


static struct S0 g_4 = {0x345FL,0x46C2E7CCL,1UL,-1L,0x0CL,9L,0L,0xDB8EL};
static unsigned char g_71 = 0UL;
static int g_73 = (-8L);
static int *g_72 = &g_73;
static struct S0 g_76 = {1UL,4294967295UL,0x3003393DL,0xB28CL,0x30L,-6L,-8L,0x385FL};
static struct S1 g_81 = {0L};
static unsigned char *g_87 = (void*)0;
static unsigned char **g_86 = &g_87;
static struct S1 *g_97 = &g_81;
static int g_129 = (-8L);
static unsigned short *g_141 = &g_76.f0;
static unsigned char g_153 = 3UL;
static unsigned g_155 = 0x7E5B14ABL;
static char *g_164 = &g_76.f4;
static char **g_163 = &g_164;
static unsigned g_210 = 4294967295UL;
static struct S1 **g_289 = &g_97;
static struct S1 ***g_288 = &g_289;
static unsigned char g_325 = 0x25L;
static struct S0 *g_392 = (void*)0;
static struct S0 g_395 = {65527UL,4294967295UL,0xD2C3B531L,3L,-1L,0x5174530BL,1L,0xD17EL};
static int g_413 = 0L;
static struct S0 g_415 = {0x8812L,1UL,4294967295UL,-10L,1L,0x2643BFFDL,0x09D1L,0xF06FL};
static unsigned short *g_462 = &g_415.f0;
static struct S1 g_507 = {-8L};
static int *g_528 = (void*)0;
static short *g_574 = &g_76.f7;
static short **g_573 = &g_574;
static int g_680 = 1L;
static int g_964 = 0x6CFFCECFL;
static unsigned **g_997 = (void*)0;
static unsigned ***g_996 = &g_997;



static unsigned char func_1(void);
static struct S0 ** func_5(struct S0 * p_6, int p_7, short p_8);
static int func_11(struct S0 * p_12, short p_13, unsigned char p_14, unsigned p_15);
static struct S0 * func_16(unsigned p_17, struct S0 * p_18, struct S0 * p_19, struct S0 * p_20, struct S0 * p_21);
static unsigned func_22(unsigned p_23, short p_24, struct S0 ** p_25, unsigned p_26);
static short func_28(unsigned short p_29, struct S0 * p_30, struct S0 p_31);
static unsigned func_32(short p_33, unsigned p_34, unsigned char p_35, short p_36, struct S0 * p_37);
static short func_41(unsigned p_42, unsigned short p_43, struct S0 * p_44);
static char func_54(int p_55, int p_56);
static int func_58(struct S0 * p_59, char p_60);
static unsigned char func_1(void)
{
    struct S0 l_2 = {0x5DB3L,0xE6D4F288L,0UL,1L,2L,0L,-1L,0xA07EL};
    struct S0 *l_3 = &l_2;
    struct S0 *l_27 = &l_2;
    short *l_38 = (void*)0;
    short *l_39 = (void*)0;
    short *l_40 = &l_2.f6;
    unsigned l_51 = 0xC256FAE7L;
    char l_390 = 0L;
    unsigned short l_391 = 65535UL;
    struct S0 *l_414 = &g_415;
    short l_818 = (-4L);
    int l_832 = (-1L);
    struct S0 **l_1007 = &g_392;
    struct S0 ***l_1006 = &l_1007;
    g_4 = ((*l_3) = l_2);
    (*l_1006) = func_5(&l_2, g_4.f6, (l_832 = (((*g_574) = ((safe_rshift_func_uint16_t_u_s(0x87A5L, (func_11(func_16((+func_22(((void*)0 != l_27), func_28(((func_32((((*l_40) = l_2.f7) && func_41(g_4.f6, (safe_add_func_int32_t_s_s((0xD127L > (safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s(l_2.f6, l_2.f4)), l_51))), 0x0C01EF4FL)), &l_2)), l_51, l_390, l_391, g_392) | 8L) | 0UL), g_392, g_395), &l_27, l_390)), g_392, l_414, l_414, l_3), l_818, g_4.f2, l_390) >= l_818))) != g_4.f2)) != l_391)));

    ;



    ;
    ;
    ;
    return l_391;
}







static struct S0 ** func_5(struct S0 * p_6, int p_7, short p_8)
{
    unsigned l_843 = 0xBDC75DA4L;
    unsigned char l_844 = 6UL;
    unsigned char *l_845 = &g_71;
    unsigned char ***l_849 = &g_86;
    unsigned l_850 = 5UL;
    int *l_851 = &g_413;
    struct S0 l_899 = {65535UL,0x948A77B1L,0x8AB71CB9L,0x0806L,0xD2L,0L,0x8948L,0x981CL};
    unsigned ****l_939 = (void*)0;
    unsigned *****l_938 = &l_939;
    int l_944 = 0x3A12C663L;
    short **l_955 = (void*)0;
    int l_982 = 0xCCA65903L;
    struct S1 l_993 = {0x3A4FL};
    if ((((-8L) ^ (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0L, (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_843, l_843)), (0x9BL >= l_844))))), (((((*l_845) = 1UL) <= (&g_73 == &g_129)) > p_7) == l_843)))) >= p_7))
    {
        int *l_846 = (void*)0;
        int **l_847 = &g_528;
        (*l_847) = l_846;

        ;
        (*p_6) = (*p_6);
    }
    else
    {
        struct S0 **l_848 = &g_392;
        return l_848;


    }

    ;
    (*l_849) = &l_845;

    ;
    if (l_850)
    {
        int **l_852 = &g_72;
        struct S0 *l_855 = &g_4;
        (*l_852) = l_851;

        ;
        (*l_851) = (func_28((**l_852), l_855, g_4) >= (p_7 < (safe_lshift_func_uint16_t_u_s((!(0x31FCL && (*g_574))), 8))));

        ;
    }
    else
    {
        struct S1 *l_861 = &g_507;
        int l_864 = 0x085029F4L;
        struct S0 **l_878 = &g_392;
        char **l_891 = &g_164;
        unsigned *l_937 = &g_155;
        unsigned **l_936 = &l_937;
        unsigned ***l_935 = &l_936;
        unsigned ****l_934 = &l_935;
        unsigned *****l_933 = &l_934;
        int l_945 = (-6L);
        int l_963 = 0x40E30705L;
        unsigned ***l_995 = &l_936;
        unsigned l_1003 = 0xB9F77D47L;
        for (g_4.f0 = 0; (g_4.f0 == 7); g_4.f0++)
        {
            unsigned char l_860 = 255UL;
            if (l_860)
                break;
            (*g_289) = l_861;

            ;
        }


        (*p_6) = g_415;
        if ((safe_sub_func_uint16_t_u_u((*g_462), l_864)))
        {
            struct S1 ****l_867 = &g_288;
            struct S1 ***l_869 = &g_289;
            struct S1 ****l_868 = &l_869;
            int l_874 = 0xEB5DE969L;
            int **l_875 = (void*)0;
            int **l_876 = (void*)0;
            int **l_877 = &g_528;
            l_864 = ((safe_mul_func_uint16_t_u_u((&g_87 != (void*)0), (~(((*l_868) = ((*l_867) = &g_289)) == &g_289)))) == (((safe_add_func_int32_t_s_s((&g_528 == &g_528), ((*g_72) = 1L))) == ((((*g_574) != (safe_div_func_uint32_t_u_u((~l_864), g_395.f1))) < 0xA94DDCBCL) == l_874)) == (**g_86)));
            (*l_877) = l_851;

            ;
            (*l_877) = &g_73;

            ;
            return l_878;



        }
        else
        {
            unsigned l_879 = 0x94F40EC0L;
            struct S1 l_893 = {-10L};
            unsigned char l_898 = 0xBEL;
            char l_908 = 0xEEL;
            int *l_911 = (void*)0;
            struct S0 *l_954 = &l_899;
            short **l_956 = &g_574;
            int l_957 = 0x594E3466L;
            short *l_962 = (void*)0;
            if ((func_32((*g_574), l_864, ((***l_849) = (l_879 ^ (safe_sub_func_int16_t_s_s(((p_8 || (safe_lshift_func_int16_t_s_s((p_8 = (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((*g_72) == l_864) <= ((*l_851) = (*g_574))), ((*g_72) >= p_8))), l_879))), 6))) & 0xE3EEL), 0xE03AL)))), p_7, &g_4) | p_7))
            {
                char **l_890 = &g_164;
                unsigned char *l_892 = &l_844;
                (*g_72) = p_7;
                (*g_72) = ((*l_851) >= ((*l_892) = ((**g_86) = (safe_mul_func_uint16_t_u_u((0x0FE5L | (*l_851)), ((l_891 = l_890) == &g_164))))));
            }
            else
            {
                struct S1 l_894 = {0x8C57L};
                int **l_895 = &g_72;
                l_894 = l_893;
                (*l_895) = &l_864;

                ;
            }

            ;
            for (g_210 = 0; (g_210 != 28); g_210++)
            {
                int **l_900 = &l_851;
                (**g_288) = l_861;

                ;
                if (l_898)
                    break;
                (*p_6) = l_899;
                (*l_900) = &l_864;

                ;
            }

            ;
            for (g_415.f6 = (-21); (g_415.f6 != 7); ++g_415.f6)
            {
                unsigned **l_913 = (void*)0;
                char l_920 = 1L;
                struct S0 **l_943 = (void*)0;
            }
            (*l_851) = (safe_mod_func_uint32_t_u_u((func_11(&g_415, (safe_lshift_func_int16_t_s_s((l_963 = ((**l_956) = (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((l_864 = (*l_851)) != (((*****l_933) = p_7) > l_957)), (safe_mul_func_uint16_t_u_u((*g_462), (safe_mul_func_uint16_t_u_u(p_7, 0L)))))) <= l_945), 3UL)))), p_8)), p_7, g_964) > 0x42FE6E91L), l_945));

            ;
            ;
        }

        ;
        ;
        if (((safe_rshift_func_uint8_t_u_s((l_963 ^ (*l_851)), 1)) != func_32(((void*)0 != &g_155), ((safe_lshift_func_int8_t_s_u((l_963 > ((*g_462) = 0UL)), 3)) > ((l_891 != (void*)0) > ((!(((((*g_573) = (void*)0) == &p_8) <= g_415.f5) <= l_945)) >= p_8))), (**g_86), (*l_851), &g_76)))
        {
            int *l_977 = (void*)0;
            (*g_72) = ((*g_528) >= 9UL);
            for (l_843 = 0; (l_843 >= 17); l_843 = safe_add_func_int32_t_s_s(l_843, 3))
            {
                int **l_978 = &l_851;
                for (g_76.f4 = 0; (g_76.f4 > 29); g_76.f4 = safe_add_func_uint16_t_u_u(g_76.f4, 4))
                {
                    for (g_73 = 0; (g_73 != (-12)); g_73--)
                    {
                        int *l_975 = (void*)0;
                        int **l_976 = &g_72;
                        (*l_976) = l_975;

                        ;
                        (*l_976) = &g_413;

                        ;
                    }
                }
                (*l_978) = l_977;

                ;
                if (((void*)0 == &g_87))
                {
                    int *l_979 = &l_945;
                    l_979 = &g_73;

                    ;
                }
                else
                {
                    return l_878;



                }
            }

            ;
            ;
            if ((safe_mul_func_int16_t_s_s(l_945, l_982)))
            {
                (*g_72) = ((void*)0 == l_878);
            }
            else
            {
                for (g_964 = 0; (g_964 <= (-19)); g_964--)
                {
                    unsigned ***l_987 = &l_936;
                    int *l_990 = &l_944;
                    int **l_994 = &g_528;
                }
                (*g_528) = (l_995 == g_996);
                (*g_72) = 1L;
            }
            for (l_899.f1 = 0; (l_899.f1 < 8); l_899.f1 = safe_add_func_uint32_t_u_u(l_899.f1, 3))
            {
                struct S1 ***l_1002 = &g_289;
                l_851 = &g_129;

                ;
                (*l_851) = ((*g_528) = (safe_sub_func_int8_t_s_s((l_1002 == &g_289), l_1003)));
                (*p_6) = (*p_6);
            }

            ;
        }
        else
        {
            int **l_1004 = &g_528;
            int ***l_1005 = &l_1004;
            (*l_1004) = &g_129;

            ;
            (*l_1005) = &l_851;

            ;
        }

        ;
        ;
        ;
        ;
    }

    ;

    ;
    ;

    return &g_392;



}







static int func_11(struct S0 * p_12, short p_13, unsigned char p_14, unsigned p_15)
{
    struct S0 l_821 = {0x6CB8L,5UL,8UL,7L,1L,0x6453B4FCL,0x0919L,0L};
    int **l_830 = &g_528;
    struct S0 l_831 = {0x2671L,0x442D7C63L,4294967288UL,1L,0x63L,0x610EA2DBL,0x2BADL,1L};
    for (g_415.f5 = 0; (g_415.f5 <= 21); g_415.f5 = safe_add_func_int32_t_s_s(g_415.f5, 4))
    {
        int *l_822 = &g_73;
        int **l_823 = (void*)0;
        int **l_824 = &l_822;
        l_821 = l_821;
        (*l_824) = l_822;
        for (g_76.f6 = (-13); (g_76.f6 == (-8)); ++g_76.f6)
        {
            unsigned l_829 = 4294967295UL;
            (**l_824) = (((*g_574) = (**g_573)) >= ((l_821.f4 | (safe_rshift_func_uint8_t_u_u(p_13, l_829))) > p_15));
            (*l_824) = &g_73;
            (*l_824) = (*l_824);
        }
    }
    g_72 = ((*l_830) = &g_73);

    ;
    ;
    (*g_528) = (*g_528);
    l_831 = (l_821 = l_821);
    return (*g_72);
}







static struct S0 * func_16(unsigned p_17, struct S0 * p_18, struct S0 * p_19, struct S0 * p_20, struct S0 * p_21)
{
    short l_420 = 0x4B26L;
    struct S0 **l_425 = &g_392;
    int l_426 = 0L;
    struct S0 l_427 = {65532UL,0xD2A3ABB0L,0x635D1684L,-7L,0xF1L,0x9101B299L,0x1F5FL,0xF6C9L};
    unsigned *l_428 = &g_155;
    struct S0 *l_524 = &l_427;
    int *l_530 = &g_413;
    unsigned short *l_541 = &g_395.f0;
    int *l_582 = &l_426;
    struct S1 l_620 = {-1L};
    struct S1 l_624 = {0x135EL};
    unsigned short l_671 = 0x4A95L;
    unsigned char **l_682 = &g_87;
    int l_683 = 4L;
    unsigned ***l_691 = (void*)0;
    char *l_708 = &g_76.f4;
    int l_743 = 0x1DF65A5AL;
    int l_794 = (-1L);
    if ((safe_mul_func_int16_t_s_s(((l_420 = (safe_lshift_func_int16_t_s_s((p_17 <= p_17), 11))) & p_17), g_415.f6)))
    {
        int **l_429 = &g_72;
        (*l_429) = &g_129;

        ;
        (*l_429) = &l_426;

        ;
    }
    else
    {
        struct S1 l_430 = {0xB912L};
        unsigned short *l_460 = (void*)0;
        unsigned l_475 = 4294967295UL;
        unsigned char **l_487 = &g_87;
        int *l_518 = (void*)0;
        int **l_551 = &l_518;
        if (p_17)
        {
            unsigned l_435 = 0x29FBD4BAL;
            struct S1 *l_464 = &l_430;
            int *l_466 = &l_426;
            char l_468 = 0xD0L;
            int **l_471 = &l_466;
            if (p_17)
            {
                unsigned l_442 = 0xE36411CFL;
                char *l_450 = &g_4.f4;
                char **l_449 = &l_450;
                short *l_455 = (void*)0;
                unsigned short l_456 = 65530UL;
                int l_457 = 0xD077340EL;
                struct S0 *l_469 = &l_427;
                (*g_97) = l_430;
                l_457 = (0x99E2F692L & (((safe_rshift_func_int16_t_s_s((0xCFCBL && (safe_sub_func_uint16_t_u_u(((*g_141) = l_435), (safe_add_func_uint8_t_u_u((!(safe_lshift_func_int8_t_s_u(((safe_div_func_uint32_t_u_u(l_442, (safe_add_func_uint32_t_u_u((p_17 != (safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(p_17, (((*g_163) == ((*l_449) = (*g_163))) >= ((safe_div_func_int16_t_s_s((l_426 = (l_456 = ((safe_rshift_func_int8_t_s_u((*g_164), 0)) || l_426))), l_442)) || l_435)))), 0xEA9DL))), g_76.f2)))) | l_442), 0))), (*g_164)))))), 13)) != l_435) != 0x67837122L));

                ;
                for (g_76.f1 = 21; (g_76.f1 >= 13); g_76.f1 = safe_sub_func_int32_t_s_s(g_76.f1, 5))
                {
                    unsigned short **l_461 = &g_141;
                    unsigned short **l_463 = &g_462;
                    if (g_81.f0)
                    {
                        int *l_465 = &l_426;
                        (*g_289) = l_464;

                        ;
                        (*l_465) = l_456;
                    }
                    else
                    {
                        int **l_467 = &l_466;
                        (*l_467) = l_466;
                        (*l_467) = l_466;
                        (**l_467) = l_468;
                    }

                    ;
                    return p_21;



                }
            }
            else
            {
                struct S0 l_470 = {1UL,4294967291UL,0xEAFEB27DL,-8L,0x68L,1L,0L,0x9359L};
                (*p_19) = l_470;
            }
            (***g_288) = (*l_464);
            (*l_471) = &g_129;

            ;
        }
        else
        {
            int *l_472 = &g_129;
            struct S0 l_489 = {0UL,0UL,0xDAC3E94AL,-5L,-10L,0x97EB821AL,0xCDE2L,0x682FL};
            int l_504 = 0xC5E2A3C3L;
            struct S0 **l_510 = &g_392;
            struct S0 **l_512 = &g_392;
            int l_536 = 0x28362FCDL;
            (*l_472) = l_427.f4;
            for (g_395.f4 = (-15); (g_395.f4 >= (-21)); --g_395.f4)
            {
                short l_502 = 0L;
                unsigned char ***l_517 = &l_487;
                struct S0 l_521 = {3UL,1UL,0xBEF84BF2L,-1L,0xBBL,0L,-7L,1L};
                char l_526 = 0xEAL;
            }
            for (l_426 = 14; (l_426 != (-14)); --l_426)
            {
                int **l_550 = &g_72;
                (*l_550) = &g_413;

                ;
            }

            ;
        }

        ;
        g_72 = &g_413;

        ;
        (*g_72) = 0x4D402D4BL;
        (*l_551) = l_518;
    }

    ;
    for (g_395.f3 = 0; (g_395.f3 >= (-19)); g_395.f3 = safe_sub_func_uint32_t_u_u(g_395.f3, 1))
    {
        int **l_554 = (void*)0;
        int **l_555 = &g_528;
        struct S0 *l_575 = &g_4;
        struct S1 l_621 = {0xE19EL};
        (*g_72) = (p_17 || (((*l_530) <= g_415.f1) == (p_17 < p_17)));
        (*l_555) = &g_413;

        ;
    }

    ;
    (*l_425) = (*l_425);
    if (p_17)
    {
        unsigned l_662 = 0UL;
        int *l_666 = (void*)0;
        char l_684 = 0xF0L;
        unsigned char ***l_686 = &g_86;
        unsigned ***l_692 = (void*)0;
        struct S1 ****l_705 = &g_288;
        int *l_724 = &g_129;
        int *l_742 = &g_413;
        unsigned l_762 = 0UL;
        if (((safe_rshift_func_int8_t_s_u((*g_164), l_662)) > g_76.f3))
        {
            for (l_427.f5 = 0; (l_427.f5 == 5); ++l_427.f5)
            {
                int **l_665 = &l_582;
                g_72 = (l_666 = ((*l_665) = &l_426));

                ;
                ;
                for (l_427.f4 = (-24); (l_427.f4 != 24); l_427.f4++)
                {
                    (*l_582) = (!(!1L));
                    return &g_76;



                }
            }

            ;
            return &g_4;



        }
        else
        {
            int l_677 = (-10L);
            int l_681 = 0x7FE4C6DBL;
            l_677 = ((g_71 = (safe_lshift_func_uint8_t_u_s(((*g_462) | (((*g_164) = p_17) || p_17)), l_681))) >= (-1L));
        }
        if (((p_17 ^ (safe_unary_minus_func_uint8_t_u(((*l_530) | 6UL)))) < (*g_164)))
        {
            unsigned l_697 = 3UL;
            int l_722 = 1L;
            struct S1 l_725 = {0xBBDAL};
            if (((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_691 != l_692), ((((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((*g_164) != func_22((0xEDD4D42CL < func_54((*g_72), p_17)), ((~(*g_141)) > p_17), &g_392, g_507.f0)) <= (-1L)), p_17)), p_17)) >= g_415.f4) != (*g_141)) < 0x3AL))), 1L)) != l_697))
            {
                int *l_698 = &l_426;
                int **l_699 = &l_582;
                (*l_699) = l_698;
            }
            else
            {
                (*g_72) = p_17;
            }
            (*g_72) = p_17;
            if ((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint8_t_u_u(p_17, ((*l_530) > (safe_unary_minus_func_uint8_t_u((l_705 == (void*)0)))))) < 0x2B021083L) | (7UL && (safe_add_func_uint8_t_u_u(l_662, (((*g_163) = &l_684) != l_708))))), 0)))
            {
                int l_715 = 0x71623249L;
                struct S1 l_719 = {-1L};
                int l_723 = (-3L);
                if (p_17)
                {
                    (*l_530) = ((((*l_530) ^ (*g_462)) == (((*g_164) = (((void*)0 == (*l_705)) == (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(((safe_div_func_int16_t_s_s(func_32((**g_573), p_17, l_715, (**g_573), p_20), 9UL)) == (*l_582)), 15)), 0)))) <= g_507.f0)) ^ 0x0ABE279DL);
                }
                else
                {
                    int **l_716 = &l_582;
                    (*l_716) = (void*)0;

                    ;
                    return p_18;




                }
                (*l_530) = ((*l_582) = (*g_72));
                for (g_4.f3 = 0; (g_4.f3 != 17); ++g_4.f3)
                {
                    (****l_705) = l_719;
                    for (g_4.f4 = (-26); (g_4.f4 == 6); g_4.f4 = safe_add_func_uint16_t_u_u(g_4.f4, 8))
                    {
                        (*l_425) = p_18;
                        l_723 = (l_722 = (*g_72));
                        l_724 = &l_723;

                        ;
                        (**g_289) = l_725;
                    }
                }

                ;
                for (l_427.f0 = 0; (l_427.f0 > 51); ++l_427.f0)
                {
                    int **l_731 = (void*)0;
                    int **l_732 = (void*)0;
                    int **l_733 = (void*)0;
                    int **l_734 = &l_724;
                    for (g_395.f0 = 0; (g_395.f0 <= 4); g_395.f0++)
                    {
                        char ***l_730 = &g_163;
                        (*l_730) = &g_164;
                        (***l_705) = (***l_705);
                    }
                    (*l_734) = (void*)0;

                    ;
                    (*l_582) = (func_22(g_680, (*g_574), &g_392, p_17) >= p_17);
                    if (l_715)
                        break;
                }

                ;
            }
            else
            {
                (*l_524) = (*p_21);
            }

            ;

            (*l_582) = (0L >= (*l_582));
        }
        else
        {
            int **l_735 = &g_528;
            (*l_735) = l_666;

            ;
            (*l_735) = &g_73;

            ;
        }

        ;
        ;

        for (l_671 = 7; (l_671 == 16); l_671++)
        {
            int **l_738 = &l_724;
            (*l_738) = &l_426;

            ;
            for (l_624.f0 = 13; (l_624.f0 < (-2)); l_624.f0--)
            {
                int *l_741 = &g_73;
                (*l_738) = l_741;

                ;
                l_742 = &g_73;

                ;
                (*l_530) = l_743;
            }

            ;
            for (g_4.f4 = 14; (g_4.f4 <= (-18)); g_4.f4 = safe_sub_func_int32_t_s_s(g_4.f4, 1))
            {
                unsigned ****l_763 = &l_691;
                int l_772 = 1L;
                for (g_395.f1 = 15; (g_395.f1 == 46); g_395.f1 = safe_add_func_uint16_t_u_u(g_395.f1, 8))
                {
                    unsigned *****l_764 = &l_763;
                    unsigned ****l_766 = &l_692;
                    unsigned *****l_765 = &l_766;
                    unsigned short l_769 = 0x4BC2L;
                    struct S0 **l_773 = &g_392;
                    struct S1 l_774 = {0x67EDL};
                    for (g_4.f5 = 3; (g_4.f5 <= (-10)); g_4.f5--)
                    {
                        (*l_738) = (void*)0;

                        ;
                        if ((*g_72))
                            break;
                        (*g_72) = ((0UL < ((*g_164) = func_54(p_17, g_395.f2))) & (65535UL & (safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(p_17, 0x3D06L)), 9))));
                        (*g_72) = p_17;
                    }

                    ;
                    (*l_530) = ((*l_582) = (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(0x07L, 4)), ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(l_762, 5)), ((*g_141) & (((*l_764) = l_763) == ((*l_765) = &l_691))))) | (safe_div_func_uint32_t_u_u((func_22((l_769 & (p_17 = ((safe_rshift_func_uint8_t_u_u(p_17, l_772)) && (*g_72)))), (**g_573), l_773, g_415.f2) ^ (*g_574)), 0xA03D188FL))))));

                    ;
                    (****l_705) = l_774;
                    (*l_738) = &g_73;

                    ;
                }
            }
        }


        ;
        if (((((*l_582) = 0x65L) < (p_17 > ((safe_lshift_func_int8_t_s_s(p_17, 1)) >= p_17))) <= (safe_sub_func_uint8_t_u_u(0xB6L, (~((void*)0 == l_686))))))
        {
            (*l_582) = (((safe_mod_func_uint8_t_u_u((*l_742), (**g_163))) & 0x61D0L) < 4294967292UL);
        }
        else
        {
            char **l_790 = &g_164;
            unsigned l_793 = 0x7B9A6007L;
            int l_800 = 0x35F2C107L;
            for (g_129 = 0; (g_129 <= (-2)); g_129 = safe_sub_func_uint16_t_u_u(g_129, 9))
            {
                for (l_427.f7 = 0; (l_427.f7 > 22); l_427.f7 = safe_add_func_int8_t_s_s(l_427.f7, 5))
                {
                    struct S1 l_787 = {0x57B4L};
                    (***g_288) = l_787;
                }
            }
            if ((safe_div_func_int16_t_s_s((l_790 == (void*)0), (((*g_72) = (*g_72)) & ((g_76.f1 == (((p_17 && (p_17 == (((safe_mul_func_int8_t_s_s(l_793, ((p_17 && l_793) > l_794))) <= p_17) >= g_76.f2))) != l_793) || l_793)) >= (*g_164))))))
            {
                unsigned char l_804 = 1UL;
                int **l_808 = &l_530;
                if (((safe_unary_minus_func_uint32_t_u(g_4.f5)) || ((void*)0 != (*l_686))))
                {
                    int **l_796 = &l_666;
                    (*l_796) = &g_73;

                    ;
                    for (g_76.f3 = 18; (g_76.f3 < (-7)); g_76.f3 = safe_sub_func_uint16_t_u_u(g_76.f3, 2))
                    {
                        unsigned char l_799 = 255UL;
                        (**l_796) = (0x02C3L > (0xB2L != func_58(((*l_425) = &g_415), (l_799 || (1UL | l_793)))));

                        ;
                        l_800 = (((*l_682) = (**l_686)) == &l_799);
                        if (p_17)
                            break;
                    }

                    ;
                    ;
                    (*l_796) = &g_129;

                    ;
                }
                else
                {
                    unsigned short l_803 = 0x882FL;
                    (*g_72) = func_32(((**g_573) = (safe_sub_func_uint32_t_u_u(p_17, 4294967295UL))), l_803, p_17, l_804, p_19);
                }

                ;
                ;
                ;
                for (g_415.f2 = (-5); (g_415.f2 <= 55); ++g_415.f2)
                {
                    int **l_807 = &g_528;
                    (*l_807) = l_666;

                    ;
                }

                ;
                (*l_808) = &g_413;
            }
            else
            {
                struct S0 l_809 = {0xAF20L,0UL,0x543EDD19L,0L,-1L,-9L,0x4C8AL,0x788FL};
                struct S0 l_812 = {0x0B7FL,4294967290UL,4294967295UL,1L,0x2FL,-9L,0x28C0L,0x67A7L};
                int **l_817 = &l_530;
                (*p_21) = l_809;
                for (g_415.f7 = (-19); (g_415.f7 >= (-14)); g_415.f7 = safe_add_func_uint32_t_u_u(g_415.f7, 1))
                {
                    (*g_72) = p_17;
                    (**g_289) = (***g_288);
                    (*p_21) = l_812;
                }
                for (g_507.f0 = (-1); (g_507.f0 >= (-22)); g_507.f0 = safe_sub_func_int8_t_s_s(g_507.f0, 2))
                {
                    int **l_815 = &l_666;
                    int **l_816 = &l_742;
                    (*l_816) = ((*l_815) = &g_129);

                    ;
                    ;
                }

                ;
                ;
                (*l_817) = &g_73;

                ;
            }

            ;
            ;
            ;
            ;
            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
        ;
    }
    else
    {
        (*g_72) = p_17;
    }

    ;

    ;
    ;
    ;
    return (*l_425);



}







static unsigned func_22(unsigned p_23, short p_24, struct S0 ** p_25, unsigned p_26)
{
    return g_413;
}







static short func_28(unsigned short p_29, struct S0 * p_30, struct S0 p_31)
{
    int *l_396 = &g_129;
    struct S0 l_397 = {1UL,4294967288UL,4294967295UL,0xEA85L,8L,0x1D2EC96DL,1L,1L};
    int **l_398 = &g_72;
    char *l_403 = &g_395.f4;
    int l_406 = (-1L);
    unsigned l_407 = 6UL;
    int *l_408 = (void*)0;
    int *l_409 = &g_73;
    int *l_410 = &g_129;
    int *l_411 = &l_406;
    int *l_412 = &g_413;
    l_396 = (void*)0;

    ;
    g_395 = l_397;
    (*l_398) = l_396;

    ;
    (*l_412) = ((*l_411) = ((*l_410) = (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((p_31.f6 || p_31.f4), (p_31.f4 & ((*l_409) = p_31.f5)))), g_76.f7))));
    return g_76.f0;
}







static unsigned func_32(short p_33, unsigned p_34, unsigned char p_35, short p_36, struct S0 * p_37)
{
    struct S0 l_393 = {0x59FAL,0x1A848C92L,1UL,-8L,0xA2L,0x510879E1L,2L,-1L};
    struct S0 *l_394 = &g_76;
    (*l_394) = (l_393 = g_4);
    return l_393.f5;
}







static short func_41(unsigned p_42, unsigned short p_43, struct S0 * p_44)
{
    unsigned char l_57 = 0x9DL;
    struct S0 *l_61 = &g_4;
    struct S1 l_193 = {0L};
    int *l_194 = &g_73;
    int *l_204 = &g_73;
    unsigned char ***l_231 = &g_86;
    struct S1 *l_243 = (void*)0;
    struct S1 *l_247 = &l_193;
    unsigned short l_252 = 0x3CE5L;
    struct S1 **l_267 = &g_97;
    struct S1 ***l_266 = &l_267;
    unsigned l_295 = 6UL;
    struct S1 *l_326 = (void*)0;
    if ((0xE17C927DL & (((void*)0 == &g_4) == (safe_sub_func_uint8_t_u_u((func_54(l_57, func_58(l_61, (((((~g_4.f4) >= 2UL) & p_43) && (g_4.f6 || p_43)) ^ l_57))) | 0xBCL), 0xF1L)))))
    {
        struct S1 l_192 = {0x5D63L};
        int **l_195 = &g_72;
        l_193 = ((*g_97) = l_192);
        (*l_195) = l_194;
        (*g_97) = l_193;
        l_61 = (void*)0;

        ;
    }
    else
    {
        char l_197 = 0L;
        unsigned char *l_198 = &l_57;
        int *l_202 = &g_129;
        unsigned char l_229 = 0xEFL;
        int l_239 = 0L;
        int *l_242 = &g_129;
        int **l_245 = &g_72;
        int **l_246 = (void*)0;
        g_72 = &g_73;
        if ((safe_unary_minus_func_uint8_t_u(((*l_198) = l_197))))
        {
            int **l_199 = (void*)0;
            int **l_200 = &l_194;
            (*l_200) = &g_129;

            ;
            (*l_200) = &g_73;

            ;
        }
        else
        {
            int *l_201 = &g_129;
            int **l_203 = &l_194;
            struct S0 **l_207 = &l_61;
            int l_228 = 3L;
            struct S1 **l_244 = &l_243;
            l_201 = l_194;

            ;
            l_204 = ((*l_203) = l_202);

            ;
            ;
            if ((safe_lshift_func_uint16_t_u_s(func_58(&g_4, (&g_4 == ((*l_207) = p_44))), (p_43 || (g_76.f1 | g_76.f1)))))
            {
                unsigned *l_208 = &g_155;
                unsigned *l_209 = &g_210;
                int l_223 = 0xA1AEF994L;
                if (func_54(((((*l_209) = ((*l_208) = p_43)) <= (*l_201)) || (((void*)0 != &g_141) < (*l_194))), p_43))
                {
                    unsigned **l_213 = &l_208;
                    int l_222 = 1L;
                    (*l_201) = (((safe_div_func_int16_t_s_s(((((*l_213) = l_201) != &p_42) >= (((safe_add_func_uint32_t_u_u(0x58D32165L, (3L == ((0UL != p_43) > (safe_mul_func_int16_t_s_s(((((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(l_222, (*l_202))), 4294967295UL)) | p_43) | l_223) != l_223), p_43)))))) < l_222) > 1L)), (-3L))) && l_222) || (**g_163));

                    ;
                }
                else
                {
                    short *l_230 = &g_76.f7;
                    (*g_72) = (safe_rshift_func_int16_t_s_s((4294967290UL ^ (((*l_209) = (p_43 < ((*l_194) = (l_228 <= ((*l_230) = ((*l_194) ^ func_54(((*g_72) = func_54(p_43, ((void*)0 == l_202))), l_229))))))) >= p_43)), 8));
                }

                ;
                (*l_203) = (*l_203);
            }
            else
            {
                struct S0 **l_234 = (void*)0;
                struct S0 *l_236 = &g_76;
                struct S0 **l_235 = &l_236;
                (*l_201) = (((void*)0 == l_231) || (safe_div_func_uint16_t_u_u(0xF86CL, func_58(((*l_235) = ((*l_207) = p_44)), ((safe_mul_func_uint8_t_u_u(l_239, (*g_164))) || ((safe_mul_func_uint16_t_u_u((g_4.f2 || func_54(p_43, g_76.f3)), g_76.f1)) & (*l_194)))))));


                (*l_203) = &g_73;

                ;
                (*l_203) = l_242;

                ;
            }


            (*l_244) = l_243;
        }


        ;
        ;
        l_202 = ((*l_245) = l_194);

        ;
        ;
    }


    ;
    ;
    ;
    l_247 = (void*)0;

    ;
    (*l_194) = (*g_72);
    if (((safe_mul_func_uint8_t_u_u(p_42, (!(*l_204)))) != ((+((((((p_42 > (safe_sub_func_int32_t_s_s(0xAF2F34FAL, (*l_204)))) || (((*l_231) = (*l_231)) == &g_87)) && (*g_141)) & (**g_163)) > l_252) ^ 0x2CL)) || (*l_204))))
    {
        struct S0 *l_287 = &g_4;
        struct S1 ***l_290 = (void*)0;
        int l_293 = 0x47CC1243L;
        short *l_307 = &g_81.f0;
        char *l_309 = &g_4.f4;
        if (p_42)
        {
            int l_253 = 0L;
            struct S1 l_271 = {5L};
            int l_296 = 8L;
            p_44 = p_44;
            if (((0x2DL > l_253) > (*g_72)))
            {
                int *l_256 = &g_129;
                for (g_4.f1 = (-5); (g_4.f1 != 48); g_4.f1 = safe_add_func_int32_t_s_s(g_4.f1, 1))
                {
                    int **l_257 = (void*)0;
                    int **l_258 = &l_194;
                    (*l_258) = (l_256 = l_256);

                    ;
                }
                (*g_72) = (!(safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((~p_42), g_76.f2)), 12)));
                return g_76.f6;
            }
            else
            {
                struct S1 **l_264 = &l_243;
                struct S1 ***l_263 = &l_264;
                struct S1 ****l_265 = &l_263;
                struct S1 ****l_268 = &l_266;
                int l_294 = 0xB3826BC8L;
                (*l_204) = (((*l_265) = l_263) != ((*l_268) = l_266));
                if (l_253)
                {
                    int *l_269 = &g_129;
                    int **l_270 = &l_194;
                    g_72 = (void*)0;

                    ;
                    (*l_270) = l_269;

                    ;
                    if (((-1L) && l_253))
                    {
                        unsigned *l_284 = &g_210;
                        unsigned *l_285 = (void*)0;
                        unsigned *l_286 = &g_155;
                        int l_291 = (-9L);
                        int *l_292 = &g_73;
                        (***l_268) = &g_81;
                        (*g_97) = l_271;
                        l_296 = (((safe_sub_func_uint16_t_u_u((+l_271.f0), (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(0x36L, (safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(9UL, (((*g_141) = (((*l_292) = ((**l_270) = (((void*)0 != &g_86) == (safe_lshift_func_int8_t_s_u((~(((((*l_286) = ((*l_284) = 1UL)) < ((((*g_164) <= p_43) > l_291) == g_4.f2)) ^ l_291) ^ 0xAA7DL)), p_42))))) || 4294967288UL)) > l_293))) >= 0L) & p_42), p_43)))), l_294)))) < p_43) > l_295);
                        (*l_270) = &l_296;

                        ;
                    }
                    else
                    {
                        struct S0 **l_298 = &l_287;
                        struct S0 ***l_297 = &l_298;
                        (*l_297) = &p_44;

                        ;
                    }

                    ;
                    for (l_193.f0 = 0; (l_193.f0 == 3); l_193.f0 = safe_add_func_uint32_t_u_u(l_193.f0, 2))
                    {
                        return g_4.f3;
                    }
                }
                else
                {
                    (*l_204) = p_42;
                }

                ;
                ;
            }

            ;
            ;
            return p_43;
        }
        else
        {
            short *l_308 = (void*)0;
            int **l_310 = &l_194;
            for (g_4.f3 = 0; (g_4.f3 > (-30)); g_4.f3 = safe_sub_func_uint8_t_u_u(g_4.f3, 2))
            {
                p_44 = &g_4;

                ;
            }


            (*l_194) = (l_293 == ((0UL || (((safe_mul_func_uint8_t_u_u(((*g_72) ^ ((safe_unary_minus_func_uint32_t_u(((safe_unary_minus_func_uint32_t_u(4294967291UL)) == (~(l_307 != l_308))))) == ((*g_163) != l_309))), p_42)) ^ g_76.f0) != 0x750AC283L)) <= p_43));
            (*l_310) = &l_293;

            ;
        }


        ;
        (*l_204) = (g_76.f0 | (*g_72));
        (**g_289) = (***l_266);
    }
    else
    {
        struct S0 **l_311 = &l_61;
        int **l_312 = &l_194;
        int l_374 = 0x1DBADABBL;
        unsigned l_386 = 1UL;
        (*l_311) = p_44;


        (*l_312) = &g_129;

        ;
        for (g_76.f4 = 0; (g_76.f4 <= (-1)); --g_76.f4)
        {
            unsigned char l_327 = 0x91L;
            unsigned *l_369 = &g_210;
            unsigned **l_368 = &l_369;
            int l_371 = 0xD4FCD9E1L;
            int l_385 = 0xD681C369L;
            for (l_193.f0 = 0; (l_193.f0 <= 28); ++l_193.f0)
            {
                short *l_324 = (void*)0;
                int *l_328 = &g_129;
                unsigned l_331 = 0x2955A25AL;
                if ((((safe_unary_minus_func_int16_t_s(p_42)) & (safe_lshift_func_int8_t_s_u((-7L), 0))) && (safe_div_func_uint32_t_u_u(0x29CE5635L, (0x25A5L & ((*g_141) = ((((safe_lshift_func_uint16_t_u_u(((g_325 = g_71) || (*g_141)), 5)) <= (((**g_288) = (*l_267)) == l_326)) && 0x6E8CC18FL) < l_327)))))))
                {
                    char l_340 = 1L;
                    int l_341 = 0x0F5AFB2FL;
                    short *l_342 = &g_81.f0;
                    int *l_343 = &g_73;
                    (*l_312) = &g_73;

                    ;
                    (*l_312) = l_328;

                    ;
                    (*l_312) = l_328;
                    (*l_343) = ((((safe_mul_func_int16_t_s_s(((**l_312) = (l_331 == (safe_rshift_func_int16_t_s_s(((*l_342) = (safe_mul_func_uint8_t_u_u(((l_341 = ((g_76.f6 && ((0UL < (&l_331 != &p_42)) & (safe_div_func_uint32_t_u_u((0x0094L & (safe_mul_func_uint16_t_u_u(0x4551L, (g_76.f5 || 9L)))), l_327)))) || l_340)) & 0x22L), (**g_163)))), (*l_204))))), (*g_141))) < p_42) | p_43) > g_155);
                }
                else
                {
                    int *l_344 = (void*)0;
                    l_328 = l_344;

                    ;
                }

                ;
            }
            for (g_71 = 28; (g_71 == 50); g_71++)
            {
                unsigned char l_362 = 0UL;
                unsigned *l_367 = &g_210;
                unsigned **l_366 = &l_367;
                if (l_327)
                {
                    struct S0 ***l_351 = &l_311;
                    short *l_363 = &l_193.f0;
                    unsigned ***l_370 = &l_368;
                    unsigned short *l_375 = (void*)0;
                    int l_376 = 8L;
                    (*l_194) = (safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_uint16_t_u_u(((*g_141) = ((void*)0 == l_351)), ((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((**l_312), (*l_204))), 6)), (safe_sub_func_uint16_t_u_u((((*l_363) = l_362) <= (safe_rshift_func_int16_t_s_s((l_327 != (l_371 = (l_366 == ((*l_370) = l_368)))), (safe_rshift_func_uint16_t_u_u((p_43 = ((l_374 = (((((p_43 < 252UL) ^ l_327) && 65527UL) < g_325) | (*l_204))) ^ 0L)), p_42))))), g_73)))), 3L)) | p_42))) <= l_376) && g_4.f5) ^ (-1L)), 7));
                    if ((*g_72))
                        break;
                }
                else
                {
                    int *l_379 = &g_73;
                    for (p_42 = (-14); (p_42 < 44); ++p_42)
                    {
                        (**l_311) = (**l_311);
                        l_379 = ((*l_312) = &g_129);

                        ;
                        ;
                        if ((*g_72))
                            continue;
                    }

                    ;
                    (*l_312) = &g_129;

                    ;
                    (**g_289) = (**g_289);
                }
                return g_210;
            }
            (*l_194) = (*l_194);
            for (g_4.f7 = (-7); (g_4.f7 <= 22); ++g_4.f7)
            {
                int *l_382 = &g_73;
                (*l_312) = l_382;

                ;
                for (g_129 = (-12); (g_129 == (-30)); g_129 = safe_sub_func_int8_t_s_s(g_129, 4))
                {
                    if ((*g_72))
                        break;
                    l_385 = ((*l_194) = (*g_72));
                    l_386 = 0xA9CFC381L;
                    (**l_312) = p_42;
                }
                if (((*l_204) < p_43))
                {
                    l_382 = ((*l_312) = (*l_312));
                }
                else
                {
                    unsigned short l_389 = 0x59F8L;
                    (**l_312) = (safe_div_func_uint8_t_u_u((l_389 <= (+p_43)), p_42));
                }
            }
        }

        ;
    }



    return g_76.f6;
}







static char func_54(int p_55, int p_56)
{
    short l_191 = 0x83E4L;
    (*g_72) = (safe_sub_func_uint16_t_u_u((*g_141), (p_55 <= l_191)));
    return l_191;
}







static int func_58(struct S0 * p_59, char p_60)
{
    int *l_85 = &g_73;
    struct S1 *l_95 = &g_81;
    unsigned char **l_118 = (void*)0;
    unsigned short *l_146 = &g_4.f0;
    short l_150 = 0x9196L;
    unsigned char l_168 = 249UL;
    struct S0 *l_177 = (void*)0;
    if (g_4.f2)
    {
        int l_67 = 0x21029358L;
        unsigned char ***l_88 = &g_86;
        for (g_4.f5 = 0; (g_4.f5 >= 25); g_4.f5 = safe_add_func_uint8_t_u_u(g_4.f5, 1))
        {
            unsigned char *l_70 = &g_71;
            int **l_74 = &g_72;
            struct S0 *l_75 = &g_76;
            l_67 = (safe_unary_minus_func_uint8_t_u((safe_sub_func_int16_t_s_s(l_67, (safe_lshift_func_uint8_t_u_u(((*l_70) = l_67), (g_4.f7 <= 0xDCBC3393L)))))));
            (*l_74) = g_72;
            l_75 = &g_4;

            ;
            for (g_71 = 2; (g_71 >= 49); g_71++)
            {
                for (g_76.f2 = (-1); (g_76.f2 < 18); g_76.f2 = safe_add_func_uint8_t_u_u(g_76.f2, 9))
                {
                    struct S1 *l_82 = &g_81;
                    (*g_72) = (*g_72);
                    (*l_82) = g_81;
                }
                for (g_76.f6 = 7; (g_76.f6 == (-24)); g_76.f6 = safe_sub_func_uint16_t_u_u(g_76.f6, 1))
                {
                }
                g_72 = l_85;

                ;
                if ((*g_72))
                    continue;
            }
        }
        (*l_88) = g_86;
        for (g_4.f4 = 0; (g_4.f4 > (-7)); g_4.f4 = safe_sub_func_int32_t_s_s(g_4.f4, 1))
        {
            unsigned l_91 = 0x8A8DC8D6L;
            l_85 = &g_73;
            if (l_91)
                break;
        }
        (*l_85) = (l_67 = 0x01E3B40BL);
    }
    else
    {
        unsigned short l_92 = 0xA475L;
        struct S1 **l_96 = (void*)0;
        struct S1 ***l_102 = &l_96;
        char *l_105 = &g_76.f4;
        (*l_85) = (((g_76.f6 && (l_92 & (safe_sub_func_int32_t_s_s((*g_72), ((g_97 = l_95) == (void*)0))))) < p_60) ^ (safe_rshift_func_uint8_t_u_s(l_92, (safe_mod_func_uint16_t_u_u(g_4.f2, 0x1E56L)))));
        (*l_102) = &g_97;

        ;
        (*l_85) = (safe_add_func_int8_t_s_s(((*l_105) = l_92), 0xEBL));
    }
    (*l_95) = (*g_97);
    for (g_4.f0 = 0; (g_4.f0 != 50); g_4.f0 = safe_add_func_uint16_t_u_u(g_4.f0, 1))
    {
        unsigned char **l_119 = &g_87;
        unsigned short *l_120 = (void*)0;
        unsigned short *l_121 = &g_76.f0;
        int l_122 = (-1L);
        unsigned char l_123 = 253UL;
        int *l_124 = (void*)0;
        int *l_125 = (void*)0;
        short *l_126 = &g_4.f3;
        char *l_127 = &g_76.f4;
        int *l_128 = &g_129;
        (*l_128) = (+(((*l_127) = (g_4.f4 = ((((*l_126) = (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((void*)0 == &l_95) & p_60), (((*l_85) = p_60) | 1UL))), (g_76.f1 == (l_122 = (safe_mul_func_uint8_t_u_u((((((safe_lshift_func_uint8_t_u_u((g_76.f7 >= (~(0x352CL >= ((*l_121) = (l_118 != l_119))))), p_60)) > 0x127DL) > 3L) && p_60) != l_122), l_123)))))), 0xD1L))) && 0xB5D7L) <= p_60))) != 0L));
    }
    for (g_4.f1 = 25; (g_4.f1 >= 28); g_4.f1++)
    {
        unsigned l_132 = 1UL;
        int *l_133 = &g_129;
        struct S1 l_136 = {0x9B0BL};
        (*l_133) = ((*l_85) = l_132);
        for (g_76.f7 = 7; (g_76.f7 >= 12); ++g_76.f7)
        {
            unsigned short **l_142 = (void*)0;
            unsigned short *l_143 = &g_76.f0;
            int l_144 = (-3L);
            unsigned char *l_145 = &g_71;
            unsigned short **l_147 = &l_146;
            unsigned short *l_149 = &g_4.f0;
            unsigned short **l_148 = &l_149;
            char l_151 = 1L;
            unsigned char *l_152 = &g_153;
            unsigned *l_154 = &g_155;
            struct S0 l_172 = {7UL,0x0005B716L,0UL,-2L,-1L,0x6666BE2FL,0x1461L,0x154DL};
            (*g_72) = (p_60 && (0xA162L ^ (~g_4.f4)));
            (*g_97) = l_136;
            (*g_72) = p_60;
        }
    }
    return g_4.f2;
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
    transparent_crc(g_4.f4, "g_4.f4", print_hash_value);
    transparent_crc(g_4.f5, "g_4.f5", print_hash_value);
    transparent_crc(g_4.f6, "g_4.f6", print_hash_value);
    transparent_crc(g_4.f7, "g_4.f7", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_76.f2, "g_76.f2", print_hash_value);
    transparent_crc(g_76.f3, "g_76.f3", print_hash_value);
    transparent_crc(g_76.f4, "g_76.f4", print_hash_value);
    transparent_crc(g_76.f5, "g_76.f5", print_hash_value);
    transparent_crc(g_76.f6, "g_76.f6", print_hash_value);
    transparent_crc(g_76.f7, "g_76.f7", print_hash_value);
    transparent_crc(g_81.f0, "g_81.f0", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_395.f0, "g_395.f0", print_hash_value);
    transparent_crc(g_395.f1, "g_395.f1", print_hash_value);
    transparent_crc(g_395.f2, "g_395.f2", print_hash_value);
    transparent_crc(g_395.f3, "g_395.f3", print_hash_value);
    transparent_crc(g_395.f4, "g_395.f4", print_hash_value);
    transparent_crc(g_395.f5, "g_395.f5", print_hash_value);
    transparent_crc(g_395.f6, "g_395.f6", print_hash_value);
    transparent_crc(g_395.f7, "g_395.f7", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_415.f0, "g_415.f0", print_hash_value);
    transparent_crc(g_415.f1, "g_415.f1", print_hash_value);
    transparent_crc(g_415.f2, "g_415.f2", print_hash_value);
    transparent_crc(g_415.f3, "g_415.f3", print_hash_value);
    transparent_crc(g_415.f4, "g_415.f4", print_hash_value);
    transparent_crc(g_415.f5, "g_415.f5", print_hash_value);
    transparent_crc(g_415.f6, "g_415.f6", print_hash_value);
    transparent_crc(g_415.f7, "g_415.f7", print_hash_value);
    transparent_crc(g_507.f0, "g_507.f0", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_964, "g_964", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
