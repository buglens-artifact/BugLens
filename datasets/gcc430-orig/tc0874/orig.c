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
   unsigned f0;
   char f1;
   int f2;
};

union U1 {
   short f0;
   volatile unsigned short f1;
   unsigned f2;
   int f3;
   volatile int f4;
};


static unsigned char g_7 = 0UL;
static union U0 g_8 = {0x5021C3A2L};
static int g_16 = 0L;
static volatile int *g_54 = (void*)0;
static volatile int **g_53 = &g_54;
static unsigned short g_77 = 0xAB59L;
static unsigned char g_79 = 0xE7L;
static unsigned short g_89 = 4UL;
static int g_93 = 0L;
static int *g_92 = &g_93;
static short g_116 = 0xE285L;
static short g_117 = (-2L);
static unsigned short g_129 = 0x32A7L;
static volatile char g_140 = 1L;
static volatile char *g_139 = &g_140;
static volatile char **g_138 = &g_139;
static unsigned g_170 = 4294967295UL;
static unsigned g_174 = 0xED5E3ED1L;
static int ***g_177 = (void*)0;
static int ****g_176 = &g_177;
static unsigned g_183 = 0xEFABF27EL;
static union U1 g_200 = {0xF6C1L};
static short g_225 = 0xB167L;
static volatile int g_241 = (-9L);
static char g_245 = (-1L);
static unsigned char g_278 = 0x41L;
static unsigned char g_280 = 0xFFL;
static unsigned short *g_326 = &g_77;
static volatile union U1 g_336 = {4L};
static union U1 g_410 = {0x0841L};
static union U1 *g_409 = &g_410;
static union U1 **g_408 = &g_409;
static unsigned short g_431 = 0x331EL;
static int g_477 = (-1L);
static unsigned short **g_480 = &g_326;
static union U0 *g_530 = (void*)0;
static union U0 **g_529 = &g_530;
static short g_536 = 0x8190L;
static short g_544 = 0xA820L;
static short *g_659 = (void*)0;
static short **g_658 = &g_659;
static char ***g_666 = (void*)0;
static volatile unsigned char g_730 = 0x93L;
static union U0 *g_744 = (void*)0;
static union U0 g_750 = {0x35B75E0DL};
static volatile union U1 g_759 = {-3L};
static union U1 g_766 = {0L};
static union U1 g_806 = {0x4D84L};
static volatile union U1 g_826 = {-1L};
static char *g_854 = &g_750.f1;
static char **g_853 = &g_854;
static union U1 g_857 = {0xBC52L};
static volatile union U1 g_905 = {0x85BBL};
static volatile unsigned *g_923 = (void*)0;
static volatile unsigned **g_922 = &g_923;
static volatile unsigned ***g_921 = &g_922;
static int g_961 = 1L;



static int func_1(void);
static unsigned char func_2(char p_3, int p_4, union U0 p_5);
static int func_11(unsigned p_12, char p_13);
static unsigned short func_19(unsigned p_20, int * p_21);
static int * func_22(int * p_23, int * p_24, int p_25, unsigned char p_26);
static int * func_27(unsigned short p_28, union U0 p_29, int * p_30, unsigned p_31, short p_32);
static union U0 func_33(int p_34, int * p_35, unsigned short p_36, unsigned p_37);
static unsigned func_38(char p_39, int p_40, int * p_41, union U0 p_42);
static int * func_48(int p_49);
static int func_50(int * p_51, int * p_52);
static int func_1(void)
{
    int l_6 = 3L;
    unsigned l_862 = 1UL;
    char **l_866 = &g_854;
    int l_874 = 0x38A2DA89L;
    char l_885 = 0L;
    union U0 l_901 = {0xF581BA05L};
    int l_948 = (-5L);
    union U0 l_949 = {4294967295UL};
    union U1 **l_950 = (void*)0;
    short *l_959 = &g_544;
    unsigned *l_960 = &g_183;
    char l_962 = 0x4FL;
    l_6 = (func_2(l_6, g_7, g_8) & (l_6 >= (safe_lshift_func_int8_t_s_u(l_862, 6))));


    for (g_410.f0 = (-8); (g_410.f0 > (-21)); g_410.f0 = safe_sub_func_int8_t_s_s(g_410.f0, 1))
    {
        char **l_865 = &g_854;
        char ***l_867 = &g_853;
        char ***l_868 = (void*)0;
        char ***l_869 = &l_866;
        int l_882 = 0L;
        union U0 l_883 = {4294967295UL};
        unsigned l_889 = 0xA962C937L;
        unsigned l_908 = 0x8663547CL;
        unsigned short l_927 = 3UL;
    }
    l_950 = &g_409;

    ;
    l_962 = (safe_div_func_int16_t_s_s(l_949.f1, (safe_mul_func_uint8_t_u_u(g_806.f1, (safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(g_77, (g_961 = ((*l_960) = (g_225 <= ((*g_92) = (((*g_658) = l_959) != l_959))))))), 0))))));

    ;
    return l_949.f1;
}







static unsigned char func_2(char p_3, int p_4, union U0 p_5)
{
    int *l_47 = (void*)0;
    unsigned short l_760 = 7UL;
    unsigned short l_772 = 0xAAE3L;
    char ****l_775 = &g_666;
    int *l_787 = &g_93;
    union U0 l_788 = {4294967295UL};
    short *l_821 = &g_766.f0;
    short l_855 = 0L;
    int **l_856 = &l_787;
    unsigned *l_858 = (void*)0;
    short l_859 = 0xA5A3L;
    for (g_8.f0 = 0; (g_8.f0 == 19); g_8.f0 = safe_add_func_uint8_t_u_u(g_8.f0, 2))
    {
        char l_14 = (-1L);
        int *l_15 = &g_16;
        unsigned char *l_243 = &g_79;
        char *l_244 = &g_245;
        union U0 l_246 = {4294967295UL};
        int l_442 = (-9L);
        union U0 *l_763 = &g_750;
        int *l_764 = &l_442;
        int **l_811 = &g_92;
        short *l_814 = &g_410.f0;
    }
    if ((g_183 , ((g_117 && (0L && ((safe_div_func_int16_t_s_s(((*l_821) = (((safe_div_func_uint16_t_u_u((p_5.f1 ^ 0x7AC8L), (safe_sub_func_int16_t_s_s(p_5.f2, 0x043EL)))) , p_5.f1) , (*l_787))), 0xEBA0L)) , (-9L)))) < (*g_326))))
    {
        unsigned l_822 = 1UL;
        int *l_823 = &g_93;
        char *l_828 = &g_750.f1;
        char **l_827 = &l_828;
        unsigned char l_834 = 0xF6L;
        unsigned *l_848 = &g_766.f2;
        (*g_92) = l_822;
        l_787 = l_787;
        if ((((p_5.f1 | func_19(g_200.f1, l_823)) != p_5.f1) | p_3))
        {
            char **l_829 = &l_828;
            int *l_835 = &g_477;
            for (g_245 = 0; (g_245 != (-25)); g_245 = safe_sub_func_uint8_t_u_u(g_245, 1))
            {
                char ***l_830 = (void*)0;
                char ***l_831 = &l_829;
                int **l_841 = &l_835;
                unsigned char l_842 = 0x2BL;
                if ((((g_826 , l_827) == ((*l_831) = l_829)) , (*l_823)))
                {
                    int **l_836 = &l_835;
                    for (p_4 = 0; (p_4 >= (-30)); p_4--)
                    {
                        (*g_92) = l_834;
                    }
                    (*l_836) = l_835;
                    if (p_4)
                        continue;
                }
                else
                {
                    for (g_766.f0 = 8; (g_766.f0 <= 22); g_766.f0 = safe_add_func_int32_t_s_s(g_766.f0, 6))
                    {
                        (*l_835) = (*g_92);
                        (*l_835) = (*l_835);
                        return p_4;
                    }
                }
                (*l_835) = (safe_div_func_uint8_t_u_u(l_842, ((safe_lshift_func_int8_t_s_s(((***l_831) = (safe_unary_minus_func_int16_t_s(func_11(g_16, (!((g_278 || (*l_835)) == (p_4 < (*l_835)))))))), 4)) ^ (*g_92))));
            }

            (*l_835) = ((*g_92) = p_5.f0);
            (*l_823) = ((*l_787) | 0xFE73L);
            (*l_823) = p_5.f2;
        }
        else
        {
            (*l_787) = (*l_823);
        }

        if (func_19(((*l_848) = (p_3 , 1UL)), l_848))
        {
            int **l_849 = (void*)0;
            g_92 = (g_116 , l_787);
        }
        else
        {
            char **l_852 = &l_828;
            for (g_93 = 25; (g_93 > (-27)); --g_93)
            {
                g_853 = l_852;

                ;
                return l_855;


            }
        }

    }
    else
    {
        return g_89;
    }

    (*l_856) = l_787;
    (*l_856) = ((func_19(((**l_856) = (g_93 , g_759.f0)), (*l_856)) | (**g_853)) , (*l_856));
    return l_859;
}







static int func_11(unsigned p_12, char p_13)
{
    int *l_745 = &g_93;
    int **l_746 = &l_745;
    (*l_746) = l_745;
    return p_13;
}







static unsigned short func_19(unsigned p_20, int * p_21)
{
    int *l_702 = &g_16;
    int **l_703 = &l_702;
    unsigned *l_704 = &g_183;
    char *l_705 = &g_8.f1;
    int l_706 = 1L;
    union U0 l_718 = {1UL};
    for (g_89 = 0; (g_89 < 50); ++g_89)
    {
        return (*g_326);
    }
    if (((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((((((*l_702) = ((safe_sub_func_int16_t_s_s(9L, ((*p_21) | ((*l_704) = p_20)))) , (*l_702))) , &g_139) == ((l_705 != (void*)0) , &l_705)) >= p_20) , (*g_139)), 0)), p_20)) == l_706))
    {
        (*g_408) = (*g_408);
    }
    else
    {
        int l_724 = 1L;
        int l_727 = 0x1573729CL;
        union U0 l_737 = {0xD886BF30L};
        char **l_742 = &l_705;
        char ***l_741 = &l_742;
        for (g_200.f3 = 0; (g_200.f3 < (-16)); --g_200.f3)
        {
            unsigned short l_717 = 0UL;
            int *l_719 = (void*)0;
            int *l_720 = &g_16;
            union U0 l_721 = {0UL};
            unsigned short *l_739 = &g_431;
            unsigned short **l_738 = &l_739;
            char ***l_740 = (void*)0;
            union U0 *l_743 = &l_737;
        }

        return (*g_326);
    }
    (*p_21) = ((**l_703) = (*p_21));
    return (**l_703);
}







static int * func_22(int * p_23, int * p_24, int p_25, unsigned char p_26)
{
    char l_626 = 0x94L;
    int l_631 = 0x29C437E7L;
    int *l_632 = &g_477;
    union U0 l_643 = {0x9E3E81E9L};
    short *l_657 = &g_410.f0;
    short **l_656 = &l_657;
    char *l_662 = &l_626;
    char **l_661 = &l_662;
    char ***l_660 = &l_661;
    int *l_693 = &g_93;
    (*l_632) = (((((p_26 = p_26) >= (((safe_sub_func_int8_t_s_s(0x48L, ((safe_mul_func_int16_t_s_s(p_25, (((g_336.f1 , (-7L)) == l_626) ^ (safe_mul_func_uint8_t_u_u((l_626 == (safe_add_func_int32_t_s_s((l_631 = 0x346788B6L), (g_477 , 0x0FF67C84L)))), g_170))))) & (*p_24)))) || 0x8AL) ^ l_626)) , 9L) | 1UL) ^ p_25);
    if ((p_25 , (*p_24)))
    {
        int l_635 = 0L;
        short *l_636 = (void*)0;
        short *l_637 = (void*)0;
        short *l_638 = &g_117;
        unsigned char *l_641 = &g_280;
        char *l_642 = &g_245;
        int **l_644 = &l_632;
        int *l_645 = (void*)0;
        int ***l_653 = &l_644;
        g_410.f4 = ((**l_644) = (*l_632));

        (*l_632) = ((~(safe_unary_minus_func_uint8_t_u(((*l_641) = (*l_632))))) > (safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((((*l_653) = &g_92) == ((*l_632) , &p_23)), g_174)), (safe_sub_func_int16_t_s_s((l_656 == (g_477 , g_658)), ((*l_632) ^ p_26))))), g_129)));

        ;
        (*l_632) = 0x08AEE9F2L;
    }
    else
    {
        char ****l_663 = (void*)0;
        char ****l_664 = (void*)0;
        char ****l_665 = &l_660;
        char ****l_667 = &g_666;
        int l_672 = 0x94B6D1AAL;
        unsigned *l_681 = &g_183;
        unsigned char *l_688 = &g_280;
        unsigned char *l_689 = &g_278;
        int *l_692 = &g_93;
        (*l_632) = (p_26 >= (((*l_665) = l_660) == ((*l_667) = g_666)));
        (*l_632) = (safe_lshift_func_uint16_t_u_s(p_25, (safe_mul_func_uint16_t_u_u(l_672, (safe_lshift_func_uint16_t_u_u((func_38((**g_138), (safe_add_func_uint32_t_u_u(((*l_681) = ((p_25 , ((*l_632) = ((*l_657) = (p_26 >= p_26)))) , ((*l_632) == (((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(l_672, 8)), (((**l_656) = g_77) , p_26))) == 9L) , l_672)))), 0x21E806D1L)), &l_672, l_643) && (*l_632)), p_26))))));
        l_631 = ((((~(*l_632)) && ((*l_692) = ((*l_632) = (safe_add_func_uint8_t_u_u(((*l_632) >= ((!(((*l_681) = (((0L ^ (safe_mul_func_int16_t_s_s(l_672, (safe_lshift_func_int16_t_s_u((*l_632), 6))))) <= ((p_25 < ((((*g_326) = (((*l_689) = ((*l_688) = p_25)) <= (((safe_mul_func_uint16_t_u_u((**g_480), ((*g_139) < g_116))) & (*l_632)) | 4L))) , 1UL) | p_25)) > 2L)) >= p_25)) <= 3UL)) || 1UL)), 250UL))))) == p_25) , (-6L));
    }
    return l_693;


}







static int * func_27(unsigned short p_28, union U0 p_29, int * p_30, unsigned p_31, short p_32)
{
    return p_30;


}







static union U0 func_33(int p_34, int * p_35, unsigned short p_36, unsigned p_37)
{
    unsigned char l_450 = 0xB5L;
    short *l_461 = &g_117;
    unsigned short **l_510 = &g_326;
    union U0 l_511 = {0x921A87ACL};
    union U1 *l_582 = &g_200;
    int ***l_585 = (void*)0;
    union U0 l_590 = {0xAE6555CFL};
    unsigned short l_595 = 0x86F6L;
    int *l_599 = &g_16;
    char l_615 = 0x35L;
    int **l_621 = &g_92;
    for (g_79 = 0; (g_79 == 5); g_79++)
    {
        int *l_454 = &g_93;
        union U0 l_485 = {4294967292UL};
        short *l_516 = &g_200.f0;
        char l_523 = 0x88L;
        int *l_579 = &g_477;
        union U1 *l_581 = (void*)0;
    }
    l_582 = l_582;
    if (((safe_lshift_func_int8_t_s_s(l_511.f1, 7)) > (+(((*g_176) = l_585) == l_585))))
    {
        union U0 ***l_588 = &g_529;
        int l_589 = 0x5DCF8F39L;
        char *l_596 = &l_511.f1;
        union U0 l_597 = {0x7B31AE87L};
        unsigned *l_598 = &g_183;
        union U1 *l_602 = (void*)0;
        int *l_616 = (void*)0;
        int *l_617 = &g_477;
        if ((func_38(((safe_sub_func_uint32_t_u_u(((l_588 != (((*l_461) = l_589) , l_588)) , ((*l_598) = ((l_590 , (*p_35)) > ((+((safe_mod_func_uint8_t_u_u(((l_589 >= func_38(((*l_596) = (((safe_div_func_int16_t_s_s(0x5CC9L, l_595)) & p_34) , l_589)), l_589, &g_477, l_597)) > 65535UL), g_544)) | p_36)) ^ 249UL)))), (-6L))) || (-1L)), (*p_35), l_599, l_590) == 0x01L))
        {
            p_35 = &p_34;

            ;
        }
        else
        {
            int l_603 = 7L;
            int **l_604 = &l_599;
            for (g_183 = 6; (g_183 != 16); g_183 = safe_add_func_uint32_t_u_u(g_183, 1))
            {
                return l_511;

                            }
            (*g_408) = l_602;

            ;
            (*l_604) = func_48(l_603);

            ;
        }


        ;

                ;
        (*l_617) = (safe_lshift_func_uint16_t_u_s(((0x06B0E170L == (safe_sub_func_uint32_t_u_u(((*l_598) = ((g_431 & ((*l_596) = (safe_mod_func_int16_t_s_s(((*l_461) = (safe_lshift_func_uint8_t_u_s(p_36, l_589))), (p_34 | (safe_lshift_func_int16_t_s_u(l_615, ((0UL && (((g_8.f2 , p_36) && l_597.f1) | 4294967295UL)) , l_597.f1)))))))) < l_589)), l_597.f2))) , (**g_480)), 4));
        return g_8;

            }
    else
    {
        unsigned char l_618 = 0UL;
        int l_619 = 0L;
        union U0 *l_620 = &l_511;
        l_619 = l_618;
        l_619 = 0x6AC3FF34L;
        (*g_529) = (l_620 = &l_511);

        ;
        p_34 = (p_37 <= ((*p_35) == 0x30B4D226L));
    }

    ;
    (*l_621) = &p_34;

    ;
    return l_590;



    }







static unsigned func_38(char p_39, int p_40, int * p_41, union U0 p_42)
{
    unsigned char *l_251 = (void*)0;
    unsigned char *l_252 = (void*)0;
    int l_253 = 5L;
    unsigned short *l_260 = &g_89;
    int **l_261 = &g_92;
    unsigned short **l_318 = &l_260;
    unsigned l_371 = 0UL;
    unsigned l_413 = 1UL;
    unsigned l_416 = 5UL;
    char l_420 = 0x35L;
    int *l_425 = &l_253;
    unsigned short *l_430 = &g_431;
    short *l_432 = (void*)0;
    short *l_433 = (void*)0;
    short *l_434 = &g_225;
    unsigned char *l_435 = &g_280;
    char ***l_436 = (void*)0;
    char l_441 = (-1L);
    (*l_261) = ((safe_mod_func_uint32_t_u_u(1UL, (g_77 , p_42.f1))) , func_48(((((*l_260) = (safe_add_func_int16_t_s_s(((p_42.f0 = ((1UL | (l_253 = p_39)) <= (*g_139))) , (safe_div_func_uint8_t_u_u((g_200 , (((((safe_mod_func_uint16_t_u_u(l_253, (safe_add_func_int16_t_s_s(g_8.f1, 0x71BDL)))) <= (-1L)) == p_42.f0) , (*g_139)) , g_8.f1)), l_253))), p_40))) , (-9L)) ^ 0x3873L)));

    ;
    if (p_40)
    {
        unsigned char l_264 = 246UL;
        short *l_265 = &g_200.f0;
        unsigned char *l_276 = (void*)0;
        unsigned char *l_277 = &g_278;
        unsigned char *l_279 = &g_280;
        p_40 = l_264;
    }
    else
    {
        char l_305 = 1L;
        int *l_308 = &l_253;
        unsigned l_316 = 1UL;
        int l_352 = 0x2D216750L;
        unsigned short **l_353 = &l_260;
        int **l_370 = &l_308;
        unsigned char *l_374 = &g_278;
        unsigned char *l_375 = &g_280;
        char *l_418 = (void*)0;
        char **l_417 = &l_418;
        char ***l_419 = &l_417;
        for (g_129 = (-13); (g_129 == 30); g_129 = safe_add_func_uint32_t_u_u(g_129, 2))
        {
            unsigned l_283 = 0x612B06F0L;
            int *l_284 = &g_93;
            unsigned short *l_324 = &g_129;
            if ((((((g_8.f0 , p_40) <= 0x18292663L) > ((*l_284) = l_283)) < g_8.f2) && p_42.f0))
            {
                unsigned char l_287 = 0x47L;
                int **l_306 = &g_92;
                unsigned short **l_317 = &l_260;
                for (g_116 = (-6); (g_116 < (-2)); ++g_116)
                {
                    char *l_292 = &g_245;
                    unsigned short l_301 = 0UL;
                    unsigned short *l_304 = (void*)0;
                    int ***l_307 = &l_261;
                    (*l_284) = l_287;
                    (*l_284) = (safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_287, ((*l_292) = (*l_284)))), ((safe_sub_func_int32_t_s_s(0x7372CE9EL, (safe_mul_func_int8_t_s_s(((void*)0 != (*g_53)), (safe_lshift_func_int16_t_s_u((+p_39), ((((safe_rshift_func_int16_t_s_s((0x85L > (l_301 | l_287)), g_8.f0)) , 9UL) > p_42.f2) <= p_42.f0))))))) > (*l_284))));
                    (*l_261) = func_48((safe_rshift_func_uint16_t_u_u((g_77 = ((*l_260) = ((*g_139) <= (l_287 & l_301)))), g_129)));

                    ;
                    if (((!l_305) > (((*l_307) = l_306) == &p_41)))
                    {
                        (*l_306) = func_48(p_42.f1);
                    }
                    else
                    {
                        short *l_315 = &g_225;
                        (*l_284) = (-8L);
                        (*l_306) = l_308;

                        ;
                        (**l_306) = ((safe_div_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((((safe_add_func_int16_t_s_s(((*l_315) = 0L), p_40)) <= (**g_138)) >= (***l_307)) , (*l_308)), (***l_307))), (***l_307))) ^ l_316);
                    }

                    ;
                }
                l_318 = l_317;
            }
            else
            {
                unsigned short *l_325 = &g_129;
                int l_331 = 0xB0DDB8EAL;
                short *l_334 = (void*)0;
                int l_335 = 0x2EF351D7L;
                unsigned short *l_364 = (void*)0;
                if ((((g_170 < (0L & ((((safe_lshift_func_int16_t_s_u(0L, 6)) & (safe_sub_func_int32_t_s_s((((safe_unary_minus_func_uint32_t_u(0x1875F9D2L)) || (l_324 != (g_326 = l_325))) > (((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((~(l_331 = 0xE5L)) >= (safe_mul_func_int16_t_s_s(0x097FL, (l_335 = (-1L))))), 0x65L)), g_116)) , p_39) & g_129)), g_8.f2))) <= (-1L)) | (-9L)))) , g_336) , (*l_284)))
                {
                    short **l_339 = (void*)0;
                    short **l_340 = &l_334;
                    int l_350 = 3L;
                    unsigned char *l_351 = &g_278;
                    (*l_308) = 0x6EFEE41CL;
                    (*l_261) = &p_40;

                    ;
                    (**l_261) = (safe_sub_func_int32_t_s_s(((((*l_340) = &g_225) == (((*g_139) > (safe_unary_minus_func_uint16_t_u(((0xC083D092L < g_280) ^ (safe_lshift_func_uint16_t_u_s(((((*l_351) = ((g_77 <= g_170) , ((safe_mod_func_int8_t_s_s(((((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(l_350, 5)), l_350)) || (((*l_260) = ((l_350 ^ 0x2FL) & (-1L))) > g_225)) != (-5L)) > l_350), g_116)) > 0x1EFCL))) & 0x16L) & (*l_284)), 7)))))) , &g_117)) | l_352), 0x5881B6FDL));

                    ;
                    l_318 = l_353;
                }
                else
                {
                    unsigned short *l_356 = &g_77;
                    int l_357 = 0x00EE0E75L;
                    char *l_360 = &g_245;
                    char **l_361 = &l_360;
                    char *l_367 = &l_305;
                    l_357 = ((((((0x02L == p_42.f2) <= (safe_add_func_int32_t_s_s((((((((*l_260) = (0xD1FEL | p_42.f2)) == g_200.f0) & ((*l_284) = p_39)) ^ p_42.f0) , g_8.f1) != g_8.f0), g_16))) , (*l_318)) != l_356) || g_140) , (*l_308));
                    (*l_261) = func_48((((((*l_261) = func_48((safe_rshift_func_int16_t_s_s(l_331, 1)))) != (((*l_308) = l_357) , ((((*l_361) = l_360) == (*g_138)) , (*g_53)))) <= ((*l_367) = (((safe_lshift_func_uint16_t_u_u(((void*)0 != l_364), 4)) != (safe_mul_func_int16_t_s_s(g_280, p_40))) || 246UL))) , (-9L)));

                    ;
                    (*l_284) = (0x96L ^ (g_245 && (g_89 > g_140)));
                }

                ;
                ;
            }
        }

        ;
        if ((1L == ((safe_sub_func_int16_t_s_s((l_371 == (*l_308)), (g_116 , ((p_42.f1 ^ (((*l_375) = ((*l_374) = (safe_mod_func_int16_t_s_s(g_8.f0, 0x9460L)))) == l_253)) != 0x6AD9L)))) >= (*l_308))))
        {
            char l_380 = (-1L);
            unsigned *l_383 = &l_371;
            int *l_384 = &g_93;
            int l_385 = 9L;
            (*l_308) = p_42.f0;
            l_385 = ((*l_384) = ((((((*l_383) = (safe_mul_func_int8_t_s_s((l_380 && (safe_mul_func_uint16_t_u_u(6UL, (!((**l_370) = (*l_308)))))), (l_305 , (**g_138))))) ^ p_42.f2) <= (1L <= ((**l_318) = 0UL))) <= (((*l_375) = 0xD5L) , 0L)) <= 0L));
        }
        else
        {
            union U1 ***l_411 = &g_408;
            unsigned *l_412 = &l_316;
            char *l_414 = &l_305;
            int l_415 = 1L;
            (*l_308) = (((*l_308) > ((safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s((p_42.f0 && (safe_sub_func_uint8_t_u_u((~(safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(0x5A71L, (((*l_414) = (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((*g_139), g_7)), p_40)), ((*l_374) = ((p_42.f2 && (safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s((((*l_412) = (safe_lshift_func_uint8_t_u_u((**l_370), (((*l_411) = g_408) != &g_409)))) < l_413), 0x48L)), (-1L)))) & 65527UL))))) || (**g_138)))), p_42.f2))), g_93))), g_116)), 65531UL)) , l_415)) , p_39);
        }
        (**l_370) = l_416;
        (*l_419) = l_417;
    }

    ;
    p_40 = ((*g_139) >= ((((*l_435) = ((((*l_434) = ((((4294967295UL == (p_42.f2 || (l_420 > (((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((((((*g_326) | l_420) && (g_79 , (((*l_425) = (g_93 = p_40)) & (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((((*l_430) = ((*g_326) = ((*l_260) = (*g_326)))) , g_280) , g_116), g_8.f2)), p_40))))) , p_40) ^ g_7), 0x22L)), p_40)) , g_117) , 0x4AA4L)))) <= p_39) == l_420) > p_40)) < 0x1422L) , 0x5DL)) || g_170) , p_42.f0));
    (*l_425) = ((((((void*)0 != l_436) || (p_40 || (safe_add_func_int8_t_s_s((*g_139), (p_42.f1 , (p_42.f2 | g_8.f0)))))) , p_40) != p_40) <= 1L);
    return g_200.f0;


}







static int * func_48(int p_49)
{
    short l_230 = 0x4442L;
    unsigned *l_231 = &g_183;
    int l_232 = 0x458FB031L;
    unsigned char *l_233 = &g_79;
    int l_236 = 0x20157988L;
    int *l_237 = &g_93;
    int l_240 = 0x613B60CEL;
    int *l_242 = (void*)0;
    (*l_237) = (((safe_lshift_func_uint8_t_u_s(g_77, l_230)) , (l_232 = ((*l_231) = g_129))) <= (((*l_233) = p_49) != (safe_sub_func_int16_t_s_s(((~((((g_116 | ((l_230 , (l_236 = p_49)) & l_230)) || p_49) && p_49) & p_49)) != g_8.f0), p_49))));
    l_237 = &p_49;

    ;
    l_237 = &l_236;

    ;
    (*l_237) = ((safe_add_func_uint16_t_u_u(g_140, l_240)) , g_241);
    return l_242;


}







static int func_50(int * p_51, int * p_52)
{
    volatile int ***l_55 = &g_53;
    union U0 l_56 = {0xBE18A167L};
    unsigned l_72 = 0x80DD333FL;
    char *l_91 = &l_56.f1;
    int l_98 = 3L;
    char l_122 = 0x8CL;
    char l_131 = 0xFAL;
    int l_137 = 0xE131A92BL;
    int *l_202 = &l_137;
    unsigned l_205 = 0xB69564F8L;
    unsigned l_218 = 0xB6A1FD85L;
    (*l_55) = g_53;
    if ((*p_52))
    {
        char l_67 = (-1L);
        char *l_73 = (void*)0;
        int l_74 = 0x2926A093L;
        short *l_75 = (void*)0;
        short *l_76 = (void*)0;
        unsigned char *l_78 = &g_79;
        union U0 l_82 = {4294967289UL};
        int **l_87 = (void*)0;
        int ***l_86 = &l_87;
        int l_118 = 0x3CE469C6L;
        unsigned short l_168 = 65530UL;
        unsigned l_195 = 1UL;
        int **l_203 = &g_92;
        if (((l_56 , (safe_add_func_int16_t_s_s(g_16, g_8.f1))) || ((safe_lshift_func_uint8_t_u_u((((*l_78) = (safe_mod_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_67 == (safe_lshift_func_int8_t_s_u(g_7, 4))), (g_77 = (safe_lshift_func_uint8_t_u_s(g_16, (l_74 = ((g_16 & g_7) >= l_72))))))), l_72)) < g_8.f0) & 0x471B2A12L), l_67))) || l_67), 7)) < g_16)))
        {
            int *l_85 = &l_74;
            int **l_84 = &l_85;
            int ***l_83 = &l_84;
            unsigned char l_169 = 1UL;
            for (l_74 = 0; (l_74 >= 12); l_74 = safe_add_func_int8_t_s_s(l_74, 7))
            {
                int ****l_88 = &l_86;
                unsigned l_90 = 0xEC3DF54DL;
                unsigned char *l_106 = &g_79;
                unsigned l_154 = 4294967288UL;
            }
        }
        else
        {
            unsigned char l_178 = 0xB1L;
            union U1 *l_190 = (void*)0;
            union U1 *l_199 = &g_200;
            (*g_92) = l_122;
            (*g_92) = (((&l_55 != g_176) <= (*p_52)) < g_8.f0);
            (*g_92) = l_178;
            for (l_131 = 0; (l_131 > 15); l_131++)
            {
                unsigned *l_181 = (void*)0;
                unsigned *l_182 = &g_183;
                unsigned char *l_194 = &g_79;
                union U1 **l_198 = &l_190;
                unsigned l_201 = 7UL;
            }
        }
        (*l_203) = l_202;

        ;
        if ((*p_52))
        {
            short l_204 = 1L;
            (**l_203) = (g_170 , l_204);
        }
        else
        {
            (*l_203) = (void*)0;

            ;
        }

        ;
    }
    else
    {
        int **l_213 = &l_202;
        int ***l_212 = &l_213;
        unsigned short *l_214 = &g_89;
        short l_215 = 0L;
        union U1 *l_219 = (void*)0;
        union U1 **l_220 = &l_219;
        union U1 *l_222 = &g_200;
        union U1 **l_221 = &l_222;
        (*g_92) = ((*l_202) ^ l_205);
        (*g_92) = (((((g_77 != (((safe_lshift_func_uint16_t_u_u((((safe_add_func_int16_t_s_s((((((safe_mul_func_uint16_t_u_u((g_129 = ((void*)0 != l_212)), (!((***l_212) , (g_140 || ((*l_202) = ((g_200.f0 = 0xB6C4L) , ((l_214 = &g_89) == &g_89)))))))) <= g_77) || (-2L)) != 1L) > 5UL), l_98)) , g_183) & l_56.f1), l_215)) , (void*)0) == (void*)0)) , 0xE59140E6L) < 1L) && (***l_212)) || (**g_138));
        (***l_212) = (***l_212);
        (*l_221) = (((safe_sub_func_int8_t_s_s((&l_212 != &l_55), ((**l_213) < (((*l_214) = 65533UL) && ((*p_52) != l_218))))) && ((**l_213) & g_200.f1)) , ((*l_220) = l_219));

        ;
    }

    ;
    (*l_202) = (safe_rshift_func_int8_t_s_u(g_225, g_16));
    (*l_202) = (((*l_202) , (safe_lshift_func_int8_t_s_s(0x7BL, 0))) < (*l_202));
    return (*p_52);


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_200.f0, "g_200.f0", print_hash_value);
    transparent_crc(g_200.f1, "g_200.f1", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_336.f0, "g_336.f0", print_hash_value);
    transparent_crc(g_336.f1, "g_336.f1", print_hash_value);
    transparent_crc(g_410.f0, "g_410.f0", print_hash_value);
    transparent_crc(g_410.f1, "g_410.f1", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    transparent_crc(g_750.f1, "g_750.f1", print_hash_value);
    transparent_crc(g_759.f0, "g_759.f0", print_hash_value);
    transparent_crc(g_759.f1, "g_759.f1", print_hash_value);
    transparent_crc(g_766.f0, "g_766.f0", print_hash_value);
    transparent_crc(g_766.f1, "g_766.f1", print_hash_value);
    transparent_crc(g_806.f0, "g_806.f0", print_hash_value);
    transparent_crc(g_806.f1, "g_806.f1", print_hash_value);
    transparent_crc(g_826.f0, "g_826.f0", print_hash_value);
    transparent_crc(g_826.f1, "g_826.f1", print_hash_value);
    transparent_crc(g_857.f0, "g_857.f0", print_hash_value);
    transparent_crc(g_857.f1, "g_857.f1", print_hash_value);
    transparent_crc(g_905.f0, "g_905.f0", print_hash_value);
    transparent_crc(g_905.f1, "g_905.f1", print_hash_value);
    transparent_crc(g_961, "g_961", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
