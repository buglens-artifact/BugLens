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
   int f0;
   short f1;
   char * f2;
   unsigned f3;
};

union U1 {
   unsigned f0;
   unsigned char f1;
   char f2;
   int f3;
   char * f4;
};

union U2 {
   char * f0;
};

union U3 {
   unsigned short f0;
};

union U4 {
   unsigned f0 : 16;
};


static int g_2 = (-6L);
static int g_7 = (-6L);
static char g_20 = 0xB4L;
static char g_22 = 0L;
static char *g_21 = &g_22;
static union U3 g_38 = {0xE5ECL};
static int g_61 = 0x534CE5FEL;
static char g_68 = (-4L);
static unsigned short g_83 = 1UL;
static unsigned char g_85 = 0xBBL;
static unsigned g_94 = 0x7BF6B3DAL;
static union U0 g_99 = {0x71CE904CL};
static int g_111 = 1L;
static unsigned char g_114 = 251UL;
static unsigned char g_116 = 0x21L;
static int g_118 = 1L;
static union U2 g_129 = {0};
static unsigned short *g_189 = (void*)0;
static unsigned short **g_188 = &g_189;
static int g_204 = 0L;
static union U1 g_224 = {1UL};
static short *g_232 = &g_99.f1;
static short **g_231 = &g_232;
static union U4 g_240 = {4294967295UL};
static union U4 *g_241 = (void*)0;
static short g_270 = 7L;
static short g_337 = 0xF65BL;
static union U3 g_372 = {0xFB44L};
static unsigned *g_405 = &g_224.f0;
static int *g_423 = &g_61;
static union U2 *g_449 = &g_129;
static union U2 **g_448 = &g_449;
static int **g_539 = &g_423;
static int ***g_538 = &g_539;
static int ****g_537 = &g_538;
static union U3 *g_552 = &g_372;
static union U3 **g_551 = &g_552;
static char **g_570 = &g_21;
static char ***g_569 = &g_570;
static short *g_637 = (void*)0;
static union U0 *g_658 = &g_99;
static union U0 **g_657 = &g_658;
static short g_695 = 0L;
static unsigned char ***g_698 = (void*)0;
static unsigned short **g_789 = &g_189;
static union U1 g_851 = {0xAB1FE2B8L};
static union U4 **g_880 = &g_241;
static union U1 *g_894 = (void*)0;



static char func_1(void);
static union U1 * func_8(int * p_9, int * p_10);
static int * func_11(union U1 p_12, unsigned p_13);
static union U1 func_14(char p_15, unsigned short p_16, int * p_17, union U2 p_18);
static int * func_23(unsigned char p_24, union U1 * p_25, int p_26, unsigned p_27, union U1 p_28);
static union U1 * func_29(int * p_30, union U1 * p_31, union U1 p_32, unsigned p_33);
static int * func_34(union U3 p_35, unsigned short p_36, union U0 p_37);
static union U0 func_40(union U3 p_41, int * p_42, int * p_43, union U2 p_44);
static union U3 func_45(union U3 p_46, union U4 p_47, int p_48, int p_49);
static union U3 func_50(int p_51);
static char func_1(void)
{
    unsigned short l_39 = 0x1FAFL;
    union U4 l_57 = {1UL};
    union U1 *l_650 = (void*)0;
    unsigned char l_652 = 246UL;
    int *l_912 = &g_118;
    unsigned ***l_918 = (void*)0;
    union U3 **l_923 = &g_552;
    unsigned short l_939 = 0x84E1L;
    union U2 l_940 = {0};
    for (g_2 = 0; (g_2 != (-9)); g_2 = safe_sub_func_int8_t_s_s(g_2, 1))
    {
        int *l_5 = (void*)0;
        int *l_6 = &g_7;
        char *l_19 = &g_20;
        union U1 l_651 = {2UL};
        unsigned short l_802 = 0xF312L;
        union U2 l_809 = {0};
        union U1 **l_896 = &l_650;
        (*l_6) = g_2;
        (*l_896) = func_8(func_11(func_14(((*l_19) = g_7), (g_2 & (g_21 != &g_22)), func_23(g_7, (l_650 = func_29(((***g_537) = func_34(g_38, l_39, func_40(func_45(func_50((safe_lshift_func_uint16_t_u_u(0x289AL, 5))), l_57, g_38.f0, l_57.f0), &g_7, &g_2, g_129))), l_650, l_651, l_652)), l_802, l_57.f0, l_651), l_809), g_695), l_5);
        (*l_6) = 2L;
        return (*g_21);
    }
    if ((safe_add_func_uint8_t_u_u(7UL, (((*g_232) = (-1L)) | 0x0A03L))))
    {
        unsigned char l_907 = 1UL;
        union U2 *l_909 = &g_129;
        union U2 **l_908 = &l_909;
        unsigned short *l_915 = &l_39;
        (*l_912) = (safe_sub_func_uint16_t_u_u(((*l_915) = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(l_907, (((*g_232) = ((*g_448) != ((*l_908) = (*g_448)))) != (safe_add_func_int16_t_s_s(8L, l_39))))), 11)), (((***g_537) != l_912) >= ((safe_lshift_func_uint8_t_u_u(2UL, 3)) < (*l_912)))))), 0x5EF4L));
        if ((((*l_915) = 5UL) || (safe_add_func_uint32_t_u_u((*l_912), ((void*)0 != l_918)))))
        {
            union U1 *l_922 = &g_224;
            union U1 **l_926 = &l_922;
            for (g_111 = 15; (g_111 == 24); g_111 = safe_add_func_uint32_t_u_u(g_111, 7))
            {
                unsigned char l_921 = 253UL;
                if (l_921)
                    break;
                return l_921;
            }
            (*l_926) = func_29((***g_537), l_922, func_14((l_923 == &g_552), (safe_mod_func_int32_t_s_s((((*g_232) ^ (*g_232)) != (g_224.f1 == (0x5A9C675CL == (*g_405)))), (*l_912))), l_912, (*g_449)), (*l_912));
        }
        else
        {
            union U2 ***l_930 = &g_448;
            union U2 ****l_929 = &l_930;
            int l_931 = 0xC9287830L;
            (*l_912) = ((***g_538) = (safe_rshift_func_uint16_t_u_s(((*l_915) = ((l_931 = (&g_448 != ((*l_929) = (void*)0))) || l_907)), (*l_912))));
        }
    }
    else
    {
        unsigned l_934 = 1UL;
        int l_935 = 0x0743BBBCL;
        union U0 *l_936 = &g_99;
        if ((safe_lshift_func_uint8_t_u_s(l_934, ((*l_912) < (l_935 = l_934)))))
        {
            (*g_657) = l_936;
        }
        else
        {
            for (l_39 = 0; (l_39 != 56); l_39 = safe_add_func_uint32_t_u_u(l_39, 2))
            {
                (**g_538) = (void*)0;
                return (**g_570);
            }
            return (*g_21);
        }
    }
    if ((*l_912))
    {
        unsigned char l_941 = 0xBBL;
        (***g_537) = func_11(func_14((*l_912), l_939, (*g_539), l_940), (*g_405));
        l_941 = ((**g_539) = (*l_912));
        (***g_538) = (*g_423);
    }
    else
    {
        int l_942 = 0x0A249C1CL;
        int ***l_944 = &g_539;
        unsigned short l_954 = 65531UL;
        union U0 l_955 = {0xF5516919L};
        if (l_942)
        {
            int l_943 = 0xE788CE81L;
            (*l_912) = (((*g_232) = l_943) || (l_944 == ((*g_537) = (void*)0)));
        }
        else
        {
            unsigned char *l_949 = &g_114;
            int l_950 = 0x213C561AL;
            unsigned short *l_951 = &g_38.f0;
            (*l_912) = (safe_add_func_int16_t_s_s((-3L), (*g_232)));
            (*l_912) = ((safe_lshift_func_uint8_t_u_s(((*l_949) = (*l_912)), (((*l_951) = l_950) > l_950))) || ((safe_sub_func_int32_t_s_s((*l_912), (~l_950))) || l_950));
        }
        (**l_944) = l_912;
    }
    return (*g_21);
}







static union U1 * func_8(int * p_9, int * p_10)
{
    int *l_895 = (void*)0;
    (*g_539) = l_895;
    return &g_851;
}







static int * func_11(union U1 p_12, unsigned p_13)
{
    int *l_825 = &g_118;
    unsigned l_857 = 0x37E95EE9L;
    union U3 l_869 = {0xC45BL};
    union U0 l_873 = {-1L};
    union U2 *l_886 = (void*)0;
    union U1 *l_891 = &g_224;
    union U1 *l_892 = &g_224;
    union U1 **l_893 = (void*)0;
    for (g_114 = 0; (g_114 > 48); ++g_114)
    {
        int **l_826 = &l_825;
        short l_838 = (-8L);
        int l_861 = 0L;
        int l_868 = 0L;
        (*l_826) = ((**g_538) = l_825);
        if ((*l_825))
        {
            return (*g_539);
        }
        else
        {
            char l_843 = 0xCDL;
            int l_844 = (-8L);
            union U1 *l_846 = &g_224;
            unsigned l_864 = 4UL;
            short l_865 = (-1L);
            union U4 **l_878 = &g_241;
            (*g_539) = (*l_826);
            for (g_85 = 0; (g_85 <= 18); g_85++)
            {
                unsigned char l_835 = 0xA4L;
                unsigned char *l_839 = &g_224.f1;
                union U2 l_850 = {0};
                union U1 *l_853 = &g_851;
                int ****l_870 = &g_538;
                union U0 l_871 = {-3L};
                (*g_448) = (*g_448);
                if ((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((p_12.f1 || ((l_843 = (l_835 ^ ((((g_116 = ((*l_839) = ((~(*g_232)) < (safe_mod_func_int32_t_s_s(l_838, l_835))))) | (*l_825)) && (*l_825)) <= ((safe_unary_minus_func_int8_t_s((safe_mod_func_int8_t_s_s((0xEAL != (7L & 0L)), (*g_21))))) < (-5L))))) == l_844)), p_12.f0)), (***g_569))), (**l_826))))
                {
                    int *l_845 = &g_2;
                    unsigned short l_847 = 0UL;
                    union U1 l_852 = {0UL};
                    union U1 **l_854 = &l_853;
                    union U0 l_862 = {0x77FDAE02L};
                    (*l_854) = l_846;
                    if ((((*l_825) = (safe_add_func_int16_t_s_s((**g_231), (l_857 = 1L)))) == (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((0xD8DBL <= (((0xFCBBL ^ ((*l_845) != (p_12.f2 >= l_835))) != (l_844 = p_13)) < p_12.f3)))), l_835))))
                    {
                        (***g_537) = func_34((*g_552), l_861, l_862);
                    }
                    else
                    {
                        int l_863 = (-7L);
                        int *l_872 = &g_851.f3;
                        l_864 = l_863;
                        p_12.f3 = 0xB529AAB6L;
                        (****g_537) = ((l_865 >= 0UL) && (((safe_sub_func_int16_t_s_s((l_844 = (*g_232)), (l_868 ^ l_863))) > p_12.f3) ^ ((*l_839) = 1UL)));
                        l_872 = func_34(l_869, (((void*)0 == l_870) == p_12.f3), l_871);
                    }
                }
                else
                {
                    union U4 ***l_879 = &l_878;
                    union U3 *l_883 = (void*)0;
                    (*l_826) = func_34(func_50(p_12.f0), p_12.f3, l_873);
                    (****g_537) = p_12.f3;
                    p_12.f3 = ((**g_539) = (((safe_rshift_func_uint16_t_u_u((((*l_879) = l_878) != g_880), ((0xC0F733D2L || g_116) == (*l_825)))) < (safe_lshift_func_uint8_t_u_u(p_13, 4))) <= (l_883 == (void*)0)));
                    for (g_337 = (-10); (g_337 <= 15); g_337 = safe_add_func_int8_t_s_s(g_337, 1))
                    {
                        (****g_537) = ((***l_870) != (void*)0);
                        (***g_537) = (*g_539);
                    }
                }
            }
        }
    }
    (*g_448) = l_886;
    for (g_204 = 25; (g_204 != 22); g_204--)
    {
        union U4 ***l_889 = (void*)0;
        union U4 **l_890 = &g_241;
        l_890 = &g_241;
        (*g_551) = &l_869;
    }
    g_894 = l_892;
    return l_825;
}







static union U1 func_14(char p_15, unsigned short p_16, int * p_17, union U2 p_18)
{
    short l_812 = 9L;
    int *l_819 = (void*)0;
    int *l_820 = &g_7;
    union U2 *l_821 = &g_129;
    union U1 l_822 = {0x0F4500A7L};
    (*l_820) = (~((safe_add_func_uint8_t_u_u((l_812 != g_111), (p_16 && p_15))) != (((safe_add_func_uint8_t_u_u(l_812, p_16)) || l_812) > (l_812 ^ ((safe_rshift_func_uint8_t_u_s(0x8EL, (*g_21))) <= 0xBD7AL)))));
    l_821 = l_821;
    return l_822;
}







static int * func_23(unsigned char p_24, union U1 * p_25, int p_26, unsigned p_27, union U1 p_28)
{
    union U0 *l_803 = &g_99;
    unsigned char *l_806 = (void*)0;
    unsigned char **l_805 = &l_806;
    unsigned char ***l_804 = &l_805;
    int l_807 = (-1L);
    int *l_808 = &g_111;
    p_28.f3 = (l_803 != (*g_657));
    (*l_808) = ((l_804 != &l_805) < l_807);
    return (***g_537);
}







static union U1 * func_29(int * p_30, union U1 * p_31, union U1 p_32, unsigned p_33)
{
    unsigned char *l_660 = (void*)0;
    int l_663 = 0xA7EBE27FL;
    unsigned char **l_684 = &l_660;
    int l_718 = 0x59C922FDL;
    union U1 *l_744 = &g_224;
    (**g_538) = p_30;
    if ((****g_537))
    {
        int l_656 = 0x458B8BB4L;
        int l_659 = (-4L);
        unsigned char **l_661 = &l_660;
        unsigned char *l_662 = &g_114;
        short *l_664 = &g_337;
        (**g_539) = ((**g_231) | p_32.f0);
        (**g_539) = (safe_unary_minus_func_int32_t_s(((((safe_lshift_func_int16_t_s_s((**g_231), 13)) < (*p_30)) || l_656) || ((void*)0 != (*g_551)))));
        (***g_538) = (((((((void*)0 == g_657) || (l_659 = (**g_231))) ^ (0xE2L || g_224.f1)) < (((((*l_661) = l_660) != l_662) || (*g_405)) & ((*l_664) = ((l_663 || p_32.f0) < l_656)))) && l_656) || 0L);
    }
    else
    {
        unsigned l_665 = 4294967292UL;
        int l_666 = (-1L);
        short **l_669 = &g_232;
        int ****l_690 = &g_538;
        int l_722 = (-1L);
        unsigned char l_743 = 247UL;
        int l_765 = (-5L);
        union U0 l_766 = {-1L};
        unsigned short **l_790 = &g_189;
        unsigned short l_791 = 1UL;
        (****g_537) = (l_666 = l_665);
        if ((safe_add_func_int8_t_s_s((l_669 != (void*)0), g_224.f0)))
        {
            unsigned char **l_685 = &l_660;
            union U4 *l_688 = &g_240;
            int l_725 = (-3L);
            for (l_666 = 0; (l_666 != 17); ++l_666)
            {
                unsigned char l_672 = 0x05L;
                unsigned *l_675 = &g_94;
                int ****l_689 = &g_538;
                unsigned char l_719 = 248UL;
                union U0 l_740 = {0xF3CB2A20L};
            }
            (***g_538) = 0xED8832B1L;
            return &g_224;
        }
        else
        {
            int *l_742 = &g_224.f3;
            int **l_741 = &l_742;
            (*l_741) = ((**g_538) = (void*)0);
            if ((*p_30))
            {
                l_663 = l_743;
                l_663 = (*p_30);
                return l_744;
            }
            else
            {
                int l_750 = 0x52B47B02L;
                for (g_337 = 0; (g_337 > 19); ++g_337)
                {
                    int l_747 = 0xDF5F9EABL;
                    (*p_30) = (*p_30);
                    if (l_747)
                        break;
                }
                if (((safe_add_func_int16_t_s_s(p_32.f0, (l_750 = ((*g_232) = (l_750 < l_663))))) >= p_32.f1))
                {
                    (*p_30) = (*p_30);
                    return l_744;
                }
                else
                {
                    union U1 *l_767 = &g_224;
                    int l_774 = 5L;
                    if (l_750)
                    {
                        return l_744;
                    }
                    else
                    {
                        char l_751 = 0x3DL;
                        (*p_30) = (0x4BL == (l_751 && ((*g_21) = (safe_mod_func_uint8_t_u_u((((*g_405) = (safe_unary_minus_func_uint32_t_u((l_718 > l_750)))) < l_718), (*g_21))))));
                        (*g_657) = (*g_657);
                    }
                    for (g_111 = 0; (g_111 <= 24); g_111++)
                    {
                        union U0 *l_758 = &g_99;
                        union U0 **l_757 = &l_758;
                        union U3 l_759 = {65535UL};
                        (*l_757) = ((*g_657) = (void*)0);
                        (***g_537) = func_34(l_759, (p_32.f1 == (safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(l_718)), l_765)), p_32.f3))), l_766);
                        return l_767;
                    }
                    if (((*p_30) = (*p_30)))
                    {
                        unsigned short **l_779 = &g_189;
                        int *l_780 = (void*)0;
                        int *l_781 = &g_224.f3;
                        (*l_781) = ((*p_30) = ((&g_405 == &g_405) ^ (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(0x02DDDC7BL, p_32.f1)), l_774)) <= (*g_405)), (safe_lshift_func_int8_t_s_u((*g_21), (g_116 = (safe_rshift_func_int16_t_s_s(((void*)0 != l_779), 2)))))))));
                    }
                    else
                    {
                        return l_767;
                    }
                    if (l_750)
                    {
                        int l_788 = 0x34FF0196L;
                        (*p_30) = (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((*g_21) = 0x18L) != (((safe_add_func_uint8_t_u_u(0x1BL, (p_32.f0 & ((&l_741 == (*g_537)) >= (((l_788 > ((-1L) || (g_789 != l_790))) <= (*p_30)) != 1UL))))) >= 249UL) == l_791)), 255UL)), 1));
                    }
                    else
                    {
                        int *l_795 = &l_666;
                        (*l_795) = ((*p_30) = ((((((**g_570) = (p_33 >= ((safe_sub_func_int32_t_s_s(((1UL > (l_718 || (*g_21))) && (safe_unary_minus_func_int8_t_s((p_32.f2 == ((*p_30) != (*p_30)))))), l_750)) < p_33))) || p_32.f1) >= 0xBFL) <= p_32.f1) < 0x7779A559L));
                        (*l_795) = (((*l_795) != 0L) | (((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((g_116 = ((*l_795) == (((p_32.f0 < ((*g_232) = (l_718 || (safe_lshift_func_int16_t_s_u((l_774 > (***g_569)), 12))))) && (((*g_405) = p_32.f3) & 1UL)) <= p_32.f1))), (*l_795))), (*l_795))) & l_663) && p_32.f3));
                    }
                }
                return &g_224;
            }
        }
    }
    return l_744;
}







static int * func_34(union U3 p_35, unsigned short p_36, union U0 p_37)
{
    int *l_649 = &g_111;
    (**g_538) = (l_649 = l_649);
    return (**g_538);
}







static union U0 func_40(union U3 p_41, int * p_42, int * p_43, union U2 p_44)
{
    unsigned short l_411 = 65535UL;
    int l_412 = 0xAF2B4C23L;
    int *l_413 = &g_118;
    union U0 *l_461 = (void*)0;
    short l_479 = (-4L);
    int l_609 = 8L;
    char **l_623 = &g_21;
    union U2 *l_631 = &g_129;
    union U0 l_644 = {0xF01DE2EEL};
    int **l_646 = &l_413;
    int *l_648 = (void*)0;
    int **l_647 = &l_648;
    g_118 = l_411;
    (*l_413) = (l_411 & (l_412 = (*g_405)));
    if ((safe_sub_func_int16_t_s_s((p_41.f0 & p_41.f0), (safe_sub_func_uint32_t_u_u(p_41.f0, ((*l_413) ^ 4294967295UL))))))
    {
        char l_420 = 0x65L;
        int *l_427 = &g_118;
        if ((safe_add_func_int32_t_s_s(((((*g_405) = l_420) >= (*l_413)) ^ ((*p_43) < (255UL == 0x1EL))), p_41.f0)))
        {
            int **l_421 = (void*)0;
            int **l_422 = &l_413;
            p_42 = ((*l_422) = p_42);
            g_423 = &g_118;
        }
        else
        {
            int **l_424 = &g_423;
            unsigned **l_426 = &g_405;
            unsigned ***l_425 = &l_426;
            (*l_424) = p_42;
            (*l_425) = &g_405;
        }
        l_412 = ((l_420 && ((*l_427) = (p_41.f0 == (*l_413)))) && (safe_mod_func_int32_t_s_s(((*l_427) = (0UL < 4294967287UL)), 0x883B2210L)));
    }
    else
    {
        unsigned l_434 = 0xD0DBD0D2L;
        int l_443 = (-1L);
        int l_444 = 2L;
        union U2 **l_447 = (void*)0;
        unsigned char *l_450 = &g_114;
        short **l_455 = &g_232;
        union U4 *l_486 = &g_240;
        int *l_490 = (void*)0;
        int l_512 = 0L;
        char l_528 = 0x1BL;
        union U0 *l_574 = (void*)0;
        union U0 *l_575 = &g_99;
        char *l_577 = &g_68;
        if ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((l_434 == (safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((l_444 = (safe_mod_func_uint32_t_u_u(((*l_413) || (l_443 = p_41.f0)), (*g_423)))) && ((safe_sub_func_uint8_t_u_u((l_447 != g_448), (-1L))) || (((*l_450) = p_41.f0) < (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((!((((*g_405) = ((l_455 == l_455) >= (*g_423))) && (*l_413)) && (*l_413))), 0UL)), (*l_413)))))), 6)) == 0xE0BD5411L), l_434)), 3))), 8)), l_434)))
        {
            int **l_456 = &g_423;
            int **l_457 = &l_413;
            union U0 *l_458 = &g_99;
            union U0 **l_459 = (void*)0;
            union U0 **l_460 = &l_458;
            (*l_457) = ((*l_456) = &g_118);
            l_461 = ((*l_460) = l_458);
        }
        else
        {
            char l_471 = 1L;
            int *l_480 = &g_7;
            union U0 *l_485 = &g_99;
            short ***l_508 = &g_231;
            int *l_566 = &l_444;
            if ((*p_43))
            {
                short l_464 = 0xF8C5L;
                for (g_94 = (-25); (g_94 == 5); ++g_94)
                {
                    int **l_465 = &g_423;
                    if (l_464)
                        break;
                    (*l_465) = &g_61;
                    if ((*p_42))
                        continue;
                    (*g_423) = (safe_mod_func_uint32_t_u_u(l_464, (*g_423)));
                }
                (*l_413) = ((*g_423) = (*l_413));
                for (g_372.f0 = 0; (g_372.f0 < 47); ++g_372.f0)
                {
                    union U0 l_470 = {0xBC47A7E0L};
                    return l_470;
                }
                if ((*g_423))
                {
                    int *l_482 = (void*)0;
                    int l_489 = (-7L);
                    if ((*g_423))
                    {
                        int **l_472 = (void*)0;
                        int **l_473 = &g_423;
                        l_471 = (*l_413);
                        (*l_473) = (void*)0;
                    }
                    else
                    {
                        int **l_474 = (void*)0;
                        int **l_475 = (void*)0;
                        int **l_476 = &l_413;
                        (*g_423) = (l_443 = ((*l_413) & g_204));
                        (*g_423) = (*l_413);
                        (*l_476) = &l_443;
                        (*g_423) = (*g_423);
                    }
                    if ((l_479 = ((safe_add_func_uint16_t_u_u(0UL, p_41.f0)) | (3L != l_464))))
                    {
                        int **l_481 = &l_413;
                        (*l_481) = l_480;
                    }
                    else
                    {
                        int *l_483 = (void*)0;
                        union U0 **l_484 = &l_461;
                        l_483 = l_482;
                        g_423 = p_43;
                        (*l_484) = l_461;
                        (*l_484) = l_485;
                    }
                    if ((0x927B2C72L | (&g_232 == &g_232)))
                    {
                        union U4 **l_487 = &l_486;
                        int **l_488 = &l_480;
                        (*l_487) = l_486;
                        g_423 = &g_7;
                        (*l_488) = l_480;
                    }
                    else
                    {
                        l_489 = (p_41.f0 != (*l_480));
                        l_490 = &g_118;
                        (*l_490) = (*p_43);
                    }
                    for (g_111 = 0; (g_111 != 18); g_111 = safe_add_func_uint8_t_u_u(g_111, 4))
                    {
                        int *l_493 = &l_489;
                        (*l_493) = (*p_42);
                        (*l_493) = (*l_480);
                        g_118 = (safe_add_func_uint16_t_u_u(65535UL, ((p_41.f0 < (((*p_42) >= p_41.f0) & (safe_unary_minus_func_int16_t_s((**g_231))))) > (((*g_21) | (*l_493)) <= 0L))));
                    }
                }
                else
                {
                    short l_507 = 0xD198L;
                    short ****l_509 = &l_508;
                    int l_519 = 0x2121E1F0L;
                    int *l_520 = &l_444;
                    (*l_413) = 0L;
                    for (g_116 = 3; (g_116 == 17); g_116++)
                    {
                        union U3 **l_501 = (void*)0;
                        union U3 *l_503 = (void*)0;
                        union U3 **l_502 = &l_503;
                    }
                    (*l_413) = (p_41.f0 ^ (safe_rshift_func_uint16_t_u_s(p_41.f0, 14)));
                    (*l_520) = (safe_unary_minus_func_uint16_t_u(((l_507 != (p_41.f0 < ((*g_232) = (((((*l_509) = l_508) == &g_231) ^ ((safe_sub_func_uint16_t_u_u(l_512, (((safe_mod_func_int32_t_s_s((*p_42), (g_118 = ((*g_423) = ((!(safe_lshift_func_uint8_t_u_u(0UL, 4))) || (safe_add_func_uint16_t_u_u((l_519 = (l_447 == &g_449)), 0xD370L))))))) & 0x8A53D12FL) | l_507))) > (*g_405))) & 0xFCL)))) && g_270)));
                }
            }
            else
            {
                unsigned l_525 = 0x5A79CE38L;
                union U0 **l_565 = &l_461;
                if ((+(0xA4L <= (safe_sub_func_int32_t_s_s((*p_42), (safe_add_func_uint8_t_u_u(((*l_450) = (((l_525 > p_41.f0) && p_41.f0) >= ((*g_405) != ((safe_sub_func_int8_t_s_s(l_528, ((safe_sub_func_uint8_t_u_u(((((0xBA7E83D1L != 0x47E2376DL) & 0xD1E3L) != p_41.f0) && (*l_413)), g_111)) == p_41.f0))) == 0xF9L)))), p_41.f0)))))))
                {
                    int **l_531 = (void*)0;
                    int **l_532 = &l_413;
                    union U0 **l_542 = &l_461;
                    (*l_532) = p_43;
                    (*g_423) = (safe_sub_func_uint32_t_u_u((*g_405), (((((safe_add_func_uint8_t_u_u(0x9EL, ((g_537 != (void*)0) > (0L > (*g_405))))) != (-8L)) | (l_412 = (safe_add_func_int16_t_s_s((*l_413), 0xA2E1L)))) <= p_41.f0) != (*g_405))));
                    (*l_542) = l_485;
                    for (g_270 = 0; (g_270 > 11); g_270 = safe_add_func_uint32_t_u_u(g_270, 4))
                    {
                        (***g_538) = 0xF753D0AAL;
                        (***g_538) = (safe_add_func_int16_t_s_s(p_41.f0, (**g_231)));
                        (***g_537) = &l_412;
                        (**g_539) = ((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_525, 255UL)), p_41.f0)) ^ (g_551 != (void*)0));
                    }
                }
                else
                {
                    short l_561 = (-2L);
                    union U4 **l_564 = &g_241;
                    (*l_413) = ((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((((safe_mod_func_int16_t_s_s(((*g_232) = (*l_480)), p_41.f0)) && 0x1CA55128L) > (safe_rshift_func_int8_t_s_s(((+(*l_413)) & ((**g_539) = 6L)), ((*g_405) | (l_561 > (safe_rshift_func_uint16_t_u_u(p_41.f0, g_94))))))) == (*p_43)), p_41.f0)), (*g_405))) && 7UL);
                    (*l_564) = l_486;
                }
                (***g_537) = (*g_539);
                (**g_539) = 1L;
                (*l_565) = l_485;
            }
            (*l_566) = (*l_480);
        }
        for (g_94 = (-15); (g_94 < 30); g_94++)
        {
            unsigned short l_571 = 0x8EF1L;
            int l_572 = 0L;
            char l_586 = 0x67L;
            union U2 *l_587 = (void*)0;
            union U0 **l_596 = &l_574;
            unsigned l_621 = 4UL;
            if ((((void*)0 == g_569) && (l_572 = l_571)))
            {
                union U0 *l_573 = &g_99;
                int *l_576 = &g_111;
                unsigned *l_584 = &g_224.f0;
                unsigned *l_585 = &l_434;
                (*l_576) = ((l_574 = l_573) != l_575);
                (*l_576) = ((p_41.f0 & (((*g_570) != (l_577 = &l_528)) <= l_572)) && ((*l_576) & (safe_lshift_func_int16_t_s_s((((**g_231) = (*l_413)) < (((safe_add_func_int32_t_s_s((0UL < (((safe_add_func_uint16_t_u_u((g_83 = ((*g_405) && ((*l_585) = (*g_405)))), (*l_413))) && (*l_413)) != l_586)), p_41.f0)) >= 0x71C0L) ^ 4294967294UL)), 12))));
                (*g_539) = (***g_537);
                (*l_576) = (-9L);
            }
            else
            {
                return g_99;
            }
            (*g_448) = l_587;
            for (g_83 = 0; (g_83 > 45); g_83 = safe_add_func_uint32_t_u_u(g_83, 1))
            {
                unsigned l_611 = 4294967295UL;
                char *l_619 = &g_68;
                union U0 l_645 = {0xA420665EL};
                for (g_372.f0 = (-25); (g_372.f0 != 10); ++g_372.f0)
                {
                    union U0 **l_592 = &l_461;
                    int l_605 = 0xC6B48333L;
                    short l_608 = 0xCD11L;
                    unsigned short l_610 = 65535UL;
                    char **l_625 = (void*)0;
                    char ***l_624 = &l_625;
                    int *l_630 = &l_412;
                    g_224.f3 = ((*l_413) || (**g_570));
                    (*l_592) = (void*)0;
                }
                for (l_411 = 0; (l_411 != 48); ++l_411)
                {
                    short **l_636 = (void*)0;
                    short *l_638 = (void*)0;
                    int *l_641 = &g_61;
                    short *l_642 = &g_270;
                    if ((safe_mod_func_uint8_t_u_u((p_41.f0 ^ ((((g_637 = ((*g_231) = (*g_231))) != l_638) < ((*l_619) = (l_611 <= (safe_sub_func_int8_t_s_s((((0x5F43L & ((*l_642) = (((*l_641) = (*l_413)) != (*p_42)))) != ((0xAAA5L | p_41.f0) ^ (*l_413))) == 6L), g_22))))) != 0xED55L)), 0xFDL)))
                    {
                        int *l_643 = (void*)0;
                        l_643 = ((**g_538) = (void*)0);
                        return l_644;
                    }
                    else
                    {
                        (*l_641) = 0L;
                    }
                }
                return l_645;
            }
            if (l_444)
                continue;
        }
    }
    (*l_647) = ((*l_646) = ((***g_537) = &l_412));
    return g_99;
}







static union U3 func_45(union U3 p_46, union U4 p_47, int p_48, int p_49)
{
    int *l_58 = &g_7;
    int **l_59 = &l_58;
    int *l_60 = &g_61;
    unsigned char *l_126 = &g_114;
    int l_145 = 0x69E62AD5L;
    union U3 *l_211 = &g_38;
    unsigned short **l_259 = &g_189;
    unsigned l_288 = 0UL;
    short **l_314 = &g_232;
    union U2 *l_326 = &g_129;
    unsigned l_353 = 4294967293UL;
    (*l_59) = l_58;
    if (((**l_59) || ((*l_60) = (**l_59))))
    {
        char *l_66 = (void*)0;
        char *l_67 = &g_68;
        union U3 *l_71 = &g_38;
        int **l_78 = &l_58;
        int l_105 = 0L;
        int l_157 = 0x03A91114L;
        if ((g_61 < ((g_22 == ((-9L) | ((safe_add_func_int16_t_s_s(0xA84AL, (safe_add_func_int8_t_s_s(((*l_67) = (*l_60)), p_48)))) > ((*l_60) | (safe_rshift_func_uint8_t_u_s(2UL, (((*l_59) = (*l_59)) != &g_2))))))) ^ (*g_21))))
        {
            char l_81 = 0x36L;
            char l_97 = 0x36L;
            int *l_119 = &g_61;
            if ((+0x94D85D5FL))
            {
                union U3 **l_72 = (void*)0;
                union U3 **l_73 = &l_71;
                (*l_73) = l_71;
            }
            else
            {
                unsigned short *l_82 = &g_83;
                unsigned char *l_84 = &g_85;
                int l_86 = 0x3E267A5EL;
                union U0 *l_98 = &g_99;
                if ((((*l_60) || (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((*g_21) == ((*l_58) < ((g_38.f0 ^ p_49) <= ((*l_84) = (((void*)0 == l_78) >= (safe_mod_func_uint16_t_u_u(((*l_82) = l_81), (**l_78)))))))), l_81)), l_86))) > (-7L)))
                {
                    if (g_7)
                    {
                        unsigned *l_93 = &g_94;
                        g_61 = (safe_add_func_uint8_t_u_u((((g_68 != (((safe_sub_func_uint8_t_u_u(((*l_84) = p_47.f0), 0x80L)) >= (safe_add_func_uint16_t_u_u(g_2, 0xEA99L))) || (**l_78))) < ((*l_93) = g_22)) >= (-3L)), (*l_60)));
                        return g_38;
                    }
                    else
                    {
                        return g_38;
                    }
                }
                else
                {
                    int *l_120 = (void*)0;
                    union U3 **l_121 = &l_71;
                    for (g_83 = 0; (g_83 < 12); g_83++)
                    {
                        union U0 **l_100 = &l_98;
                        g_61 = l_97;
                        (*l_100) = l_98;
                    }
                    if ((safe_lshift_func_int8_t_s_u(((**l_78) & (safe_mod_func_int16_t_s_s(((((*l_60) = g_83) <= g_99.f1) < 0x47L), g_83))), 4)))
                    {
                        l_105 = 7L;
                    }
                    else
                    {
                        int *l_108 = &l_86;
                        int *l_109 = &l_105;
                        int *l_110 = &g_111;
                        unsigned char *l_112 = (void*)0;
                        unsigned char *l_113 = &g_114;
                        unsigned char *l_115 = &g_116;
                        int *l_117 = &g_118;
                        (*l_117) = (safe_sub_func_int32_t_s_s(((*l_110) = ((*l_109) = ((*l_108) = ((*l_60) = (&g_99 != (void*)0))))), ((p_49 >= g_85) == ((*l_115) = ((*l_113) = (*l_58))))));
                        (*l_59) = l_119;
                        (*l_110) = p_47.f0;
                        (*l_78) = l_120;
                    }
                    (*l_121) = (void*)0;
                }
            }
            (*l_119) = ((g_114 ^ (*l_119)) >= g_111);
            l_105 = ((*l_119) = 3L);
        }
        else
        {
            union U2 *l_128 = &g_129;
            short *l_136 = &g_99.f1;
            int l_137 = 1L;
            if (((**l_78) > ((*l_67) = 0xDFL)))
            {
                int ***l_122 = &l_78;
                unsigned short *l_125 = &g_83;
                unsigned char *l_127 = &g_85;
                (*l_122) = &l_60;
                (*l_60) = (safe_sub_func_int32_t_s_s((**l_59), (p_46.f0 && ((((*l_125) = (**l_78)) ^ (l_126 == l_127)) | (**l_78)))));
            }
            else
            {
                union U2 **l_130 = &l_128;
                int *l_133 = &g_61;
                (*l_60) = p_47.f0;
                (*l_130) = l_128;
                for (g_114 = 7; (g_114 == 29); g_114 = safe_add_func_uint32_t_u_u(g_114, 5))
                {
                    (*l_60) = p_47.f0;
                }
                l_133 = (void*)0;
            }
            if ((safe_add_func_int16_t_s_s(((*l_136) = g_94), ((g_114 & p_46.f0) <= (&p_46 == (void*)0)))))
            {
                (*l_60) = (((**l_59) <= (l_137 = (**l_59))) && (p_46.f0 ^ p_46.f0));
            }
            else
            {
                (*l_59) = &g_2;
                return p_46;
            }
            (*l_78) = (*l_78);
        }
        for (p_49 = 0; (p_49 == 5); p_49++)
        {
            short l_142 = 0x13B5L;
            short l_150 = 0x661BL;
            int l_151 = 0x1E32E665L;
            for (g_118 = 0; (g_118 >= 27); g_118++)
            {
                if (l_142)
                {
                    int l_143 = 2L;
                    int *l_144 = &g_61;
                    l_145 = ((*l_144) = l_143);
                }
                else
                {
                    unsigned short *l_146 = &g_83;
                    unsigned short *l_148 = &g_38.f0;
                    unsigned short **l_147 = &l_148;
                    unsigned short *l_149 = (void*)0;
                    g_61 = ((((*l_147) = (l_146 = &g_83)) == l_149) ^ g_68);
                    l_151 = (g_83 ^ l_150);
                    (*l_78) = &g_111;
                }
                if (g_85)
                    break;
                return g_38;
            }
            if (p_49)
                continue;
        }
        for (g_111 = 12; (g_111 < 19); g_111++)
        {
            int *l_154 = &g_118;
            union U0 *l_156 = &g_99;
            union U0 **l_155 = &l_156;
            (*l_154) = g_118;
            (*l_154) = (((!g_111) > (~(0x71ED8D5FL || ((g_116 & (&g_99 == ((*l_155) = (void*)0))) || p_47.f0)))) > g_68);
        }
        l_157 = p_46.f0;
    }
    else
    {
        char l_165 = 0xCBL;
        unsigned short *l_187 = &g_38.f0;
        unsigned short **l_186 = &l_187;
        char **l_213 = (void*)0;
        union U1 *l_225 = (void*)0;
        union U0 **l_247 = (void*)0;
        if (p_49)
        {
            unsigned l_158 = 0x4048DEE8L;
            short *l_164 = &g_99.f1;
            int *l_235 = &g_7;
            if (l_158)
            {
                unsigned short *l_159 = &g_83;
                int l_168 = 6L;
                int l_207 = 0xEC222182L;
                char ***l_230 = &l_213;
                if ((((*l_159) = p_47.f0) == (((safe_sub_func_uint8_t_u_u((g_38.f0 >= 0xA6L), (((*g_21) = 0xCFL) ^ (0x921FL >= (safe_add_func_uint16_t_u_u(g_38.f0, (p_46.f0 > ((*l_164) = (p_46.f0 < ((void*)0 == l_164)))))))))) && l_165) != p_49)))
                {
                    unsigned l_171 = 0x0A0E1395L;
                    int l_210 = 1L;
                    union U1 *l_223 = &g_224;
                    union U1 **l_222 = &l_223;
                    (*l_60) = (g_111 = ((safe_add_func_int32_t_s_s((l_168 < 0x78L), (safe_mod_func_int32_t_s_s(l_171, g_85)))) != ((*l_159) = (safe_add_func_uint32_t_u_u(p_46.f0, 4294967295UL)))));
                    (*l_60) = (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((g_94 <= l_165), p_47.f0)) == (l_168 >= l_158)), (safe_mod_func_uint32_t_u_u(g_114, g_83)))) & (((safe_mod_func_int32_t_s_s((l_186 == g_188), l_165)) > p_48) && g_85)), (*g_21))) >= 1UL), g_38.f0));
                    for (g_118 = 0; (g_118 < 9); g_118 = safe_add_func_uint32_t_u_u(g_118, 4))
                    {
                        unsigned *l_208 = &l_158;
                        unsigned *l_209 = &g_94;
                        union U3 **l_212 = &l_211;
                        char ***l_214 = (void*)0;
                        char ***l_215 = &l_213;
                        l_210 = (+(safe_rshift_func_uint8_t_u_s((g_99.f1 || ((*l_209) = (l_168 && (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((!(*l_58)), ((*l_208) = ((65535UL ^ ((*l_164) = (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((l_168 < ((*l_60) = ((l_207 = (l_168 >= (safe_sub_func_int8_t_s_s(g_204, (p_48 <= ((((safe_lshift_func_int8_t_s_u(l_158, 3)) == 0xABL) <= 0x5AL) > (-9L))))))) || g_116))), p_48)) && p_49), g_22)))) < 65526UL)))), l_168))))), 4)));
                        (*l_212) = l_211;
                        l_168 = ((**l_59) >= g_114);
                        (*l_215) = l_213;
                    }
                    (*l_60) = (((((0x2DEDBDE7L == 0x62B2AF54L) != (((safe_sub_func_int32_t_s_s(p_47.f0, ((l_210 | 0L) >= (safe_lshift_func_uint8_t_u_s(((((*l_222) = (void*)0) == l_225) != (safe_sub_func_int8_t_s_s(((l_165 == (4L > (-1L))) < p_49), g_224.f2))), (**l_59)))))) > p_48) <= l_207)) & p_48) < 1L) <= 255UL);
                }
                else
                {
                    for (g_204 = 0; (g_204 >= (-30)); g_204 = safe_sub_func_int8_t_s_s(g_204, 8))
                    {
                        (*l_60) = p_46.f0;
                        if (p_46.f0)
                            continue;
                    }
                }
                (*l_230) = &g_21;
                g_231 = g_231;
                for (g_83 = 0; (g_83 <= 11); ++g_83)
                {
                    int *l_236 = (void*)0;
                    l_236 = l_235;
                }
            }
            else
            {
                int l_244 = 1L;
                union U2 *l_250 = &g_129;
                union U2 **l_249 = &l_250;
                if ((255UL == (g_61 < (((*l_59) = (*l_59)) != (void*)0))))
                {
                    union U4 *l_239 = &g_240;
                    g_241 = l_239;
                    if ((p_49 == ((safe_add_func_int8_t_s_s((*l_235), l_244)) & l_165)))
                    {
                        (*l_60) = p_49;
                    }
                    else
                    {
                        return g_38;
                    }
                }
                else
                {
                    for (g_114 = (-7); (g_114 > 49); ++g_114)
                    {
                        union U0 **l_248 = (void*)0;
                        g_118 = g_204;
                        if (p_48)
                            break;
                        l_248 = l_247;
                        (*l_60) = p_46.f0;
                    }
                }
                (*l_249) = (void*)0;
            }
            (*l_60) = (*l_60);
            g_241 = &g_240;
        }
        else
        {
            return g_38;
        }
        return p_46;
    }
    for (p_49 = 4; (p_49 == (-16)); p_49 = safe_sub_func_uint16_t_u_u(p_49, 3))
    {
        int l_257 = 0xAC706118L;
        int l_258 = 0L;
        char l_279 = 0xA1L;
        unsigned char l_311 = 8UL;
        union U4 *l_315 = &g_240;
        union U3 *l_371 = &g_372;
        int l_383 = 2L;
    }
    if (p_49)
    {
        return p_46;
    }
    else
    {
        int *l_407 = &g_111;
        short ***l_410 = &g_231;
        (*l_59) = l_407;
        g_118 = (safe_add_func_uint16_t_u_u(((*l_407) & 0x9DL), ((l_410 = (void*)0) != &g_231)));
    }
    return p_46;
}







static union U3 func_50(int p_51)
{
    int *l_55 = &g_2;
    int **l_54 = &l_55;
    union U3 l_56 = {0x99E6L};
    (*l_54) = (void*)0;
    return l_56;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_99.f1, "g_99.f1", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_224.f1, "g_224.f1", print_hash_value);
    transparent_crc(g_224.f2, "g_224.f2", print_hash_value);
    transparent_crc(g_240.f0, "g_240.f0", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_372.f0, "g_372.f0", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_851.f0, "g_851.f0", print_hash_value);
    transparent_crc(g_851.f1, "g_851.f1", print_hash_value);
    transparent_crc(g_851.f2, "g_851.f2", print_hash_value);
    transparent_crc(g_851.f3, "g_851.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
