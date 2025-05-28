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
   int f0;
   volatile int f1;
   const volatile unsigned char f2;
   const volatile int f3;
   const char f4;
   short f5;
};

union U1 {
   const short f0;
   short f1;
   const struct S0 f2;
};

union U2 {
   int f0;
   unsigned char f1;
   volatile int f2;
};


static const int g_11 = 0x0657689AL;
static int g_14 = 3L;
static int g_57 = (-10L);
static const int g_64 = 0L;
static const int *g_63 = &g_64;
static unsigned short g_83 = 0x0B14L;
static unsigned g_85 = 4294967295UL;
static union U2 g_93 = {0x19109783L};
static short g_99 = (-6L);
static unsigned short g_114 = 0UL;
static char g_119 = 0L;
static union U2 *g_129 = (void*)0;
static union U2 **g_128 = &g_129;
static int g_174 = 7L;
static struct S0 g_200 = {0x34A03365L,0xF6DE51AEL,0x02L,8L,4L,0L};
static struct S0 *g_199 = &g_200;
static volatile unsigned short g_211 = 0UL;
static volatile unsigned short *g_210 = &g_211;
static volatile unsigned short **g_209 = &g_210;
static union U1 g_214 = {0xEAC4L};
static union U1 *g_213 = &g_214;
static unsigned g_220 = 4294967291UL;
static union U2 **g_255 = (void*)0;
static union U2 ***g_254 = &g_255;
static unsigned char g_257 = 0xDBL;
static short *g_375 = &g_99;
static short **g_374 = &g_375;
static char g_431 = 0x56L;
static int g_504 = 4L;
static int g_534 = 0x28F69EABL;
static volatile int *g_542 = &g_93.f2;
static volatile int **g_541 = &g_542;
static volatile int ***g_540 = &g_541;
static short g_597 = 0L;
static unsigned char *g_607 = (void*)0;
static unsigned char **g_606 = &g_607;
static unsigned char g_619 = 255UL;
static int *g_659 = &g_200.f0;
static unsigned g_784 = 0UL;
static union U2 *g_843 = (void*)0;
static const volatile unsigned g_889 = 4294967295UL;
static const volatile unsigned *g_888 = &g_889;
static const volatile unsigned **g_887 = &g_888;
static const volatile unsigned *** const g_886 = &g_887;
static int * const g_894 = &g_14;
static int g_904 = 0L;
static int *g_1006 = &g_904;
static const struct S0 g_1018 = {-1L,0xB7AA319BL,0x4FL,-10L,0x9CL,0x1281L};
static volatile union U1 *g_1036 = (void*)0;
static const unsigned char *g_1040 = (void*)0;
static const unsigned char **g_1039 = &g_1040;
static unsigned g_1049 = 4294967290UL;
static const unsigned **g_1150 = (void*)0;
static union U1 g_1215 = {0xA215L};



static char func_1(void);
static int * func_2(unsigned p_3, unsigned short p_4, unsigned char p_5, unsigned p_6);
static unsigned func_7(unsigned p_8);
static int * func_18(const int * p_19, unsigned short p_20, char p_21, unsigned p_22);
static unsigned short func_27(int * p_28, int * const p_29, short p_30, unsigned p_31);
static unsigned func_34(const int * p_35, const int p_36, unsigned p_37, unsigned char p_38);
static int * func_39(const int * p_40, int * p_41, unsigned p_42);
static int * func_43(int p_44, short p_45, int * p_46);
static int func_47(int * const p_48, int p_49, int * p_50);
static char func_51(char p_52, char p_53);
static char func_1(void)
{
    short l_617 = 0xB45EL;
    unsigned char *l_618 = &g_619;
    int **l_892 = &g_659;
    union U1 *l_893 = &g_214;
    union U2 ****l_895 = &g_254;
    volatile int *l_1007 = &g_93.f2;
    const int *l_1045 = &g_11;
    char l_1095 = 0x3AL;
    int *** const *l_1188 = (void*)0;
    unsigned char **l_1200 = (void*)0;
    unsigned char **l_1201 = &l_618;
    const char l_1202 = 3L;
    unsigned l_1203 = 4294967291UL;
    char *l_1204 = &g_431;
    unsigned short *l_1205 = &g_114;
    union U1 *l_1214 = &g_1215;
    unsigned *l_1218 = &g_784;
    unsigned short l_1219 = 65535UL;
    (*l_892) = func_2(func_7((safe_sub_func_uint8_t_u_u(((g_11 & (+((void*)0 != &g_11))) && (&g_11 == &g_11)), g_11))), (safe_lshift_func_uint16_t_u_s((((*l_618) = (g_200.f4 <= l_617)) != g_200.f4), 1)), l_617, g_64);

    ;
    ;
    ;
    ;
    if (func_27(func_18(&g_534, (**l_892), ((void*)0 == l_893), (**l_892)), g_894, ((**l_892) && func_27((*l_892), (*l_892), (**l_892), (***g_886))), g_534))
    {
        short l_901 = 0xD576L;
        int *l_918 = &g_534;
        short l_950 = 4L;
        char l_963 = 0x5DL;
        unsigned short **l_968 = (void*)0;
        unsigned short ***l_967 = &l_968;
        unsigned short l_994 = 0x6208L;
        const struct S0 *l_1017 = &g_1018;
        const struct S0 **l_1016 = &l_1017;
    }
    else
    {
        int *l_1079 = &g_57;
        union U2 ** const *l_1113 = (void*)0;
        char l_1144 = 0x2EL;
        int *l_1189 = &g_57;
        for (g_597 = 0; (g_597 < 10); ++g_597)
        {
            unsigned l_1082 = 8UL;
            unsigned *l_1083 = &g_220;
            unsigned l_1084 = 4294967286UL;
            char l_1121 = 0xD9L;
            unsigned char l_1141 = 0xAFL;
            int *** const *l_1186 = (void*)0;
            int *** const **l_1187 = &l_1186;
        }
    }

    (**l_892) = (safe_sub_func_uint16_t_u_u(((*l_1205) = (safe_mul_func_uint8_t_u_u(((((**g_209) != (*l_1045)) & func_51((**l_892), ((*l_1204) = ((*l_1045) & ((safe_mul_func_int16_t_s_s((*g_375), (safe_div_func_uint16_t_u_u(65527UL, (safe_lshift_func_uint16_t_u_s(((0x83E4L ^ (((((*g_606) = (*g_606)) == ((*l_1201) = l_618)) != l_1202) | 0x94L)) != l_1203), 15)))))) == (**l_892)))))) > g_174), (**l_892)))), g_1018.f0));

    ;
    (*g_542) = ((**l_892) = func_34(func_2(((*l_1218) = (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((**g_209), ((void*)0 == l_1214))) <= ((**l_892) & (safe_mod_func_uint16_t_u_u(0x3E87L, (**l_892))))), (g_14 & g_784))), (0xEDF9L < (**l_892)))), g_1018.f5))), g_1215.f1, l_1219, g_214.f0), (**l_892), (*l_1045), (*l_1045)));

    ;
    return (**l_892);
}







static int * func_2(unsigned p_3, unsigned short p_4, unsigned char p_5, unsigned p_6)
{
    unsigned char * const *l_634 = &g_607;
    int l_635 = (-7L);
    unsigned short l_637 = 0xEAF0L;
    int * const l_645 = &g_534;
    int * const *l_644 = &l_645;
    int l_679 = 1L;
    union U1 * const *l_696 = (void*)0;
    union U2 ***l_725 = &g_128;
    int *l_778 = &l_679;
    unsigned char l_814 = 0x69L;
    const int **l_862 = &g_63;
    const int ***l_861 = &l_862;
    int l_890 = 0x78D74DEBL;
    unsigned short *l_891 = &l_637;
    for (g_200.f5 = 0; (g_200.f5 > 14); g_200.f5++)
    {
        const int *l_624 = &g_200.f0;
        unsigned char **l_633 = &g_607;
        int *l_636 = &g_534;
        const short l_717 = 0x376CL;
        union U1 **l_738 = (void*)0;
        struct S0 *l_740 = &g_200;
        int *l_779 = &g_57;
        unsigned char ***l_806 = &l_633;
        unsigned char **** const l_805 = &l_806;
        unsigned *l_826 = (void*)0;
        unsigned **l_825 = &l_826;
        union U2 *l_842 = &g_93;
        for (g_431 = 0; (g_431 <= 18); ++g_431)
        {
            int * const l_629 = &g_14;
            const char l_632 = 0xF3L;
            int **l_638 = &l_636;
            (*g_128) = (void*)0;

            ;
            (*l_638) = func_43(func_34(l_624, (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((p_6 <= (-1L)), l_635)), (**g_209))), l_637, l_637), p_4, l_636);

            ;
            ;
        }

        ;
    }
    (*l_645) = 0xB412FFA4L;
    (***g_540) = ((safe_rshift_func_uint16_t_u_s(7UL, 1)) == ((*l_891) = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((**l_862), (((((void*)0 != g_886) < (g_93.f1 && (g_211 ^ p_5))) > g_619) ^ (**g_374)))), 9L))));

    return &g_14;


}







static unsigned func_7(unsigned p_8)
{
    unsigned l_12 = 0x1A652065L;
    int *l_13 = &g_14;
    short l_224 = 0x9520L;
    int **l_544 = &l_13;
    int ***l_543 = &l_544;
    union U2 * const l_554 = &g_93;
    struct S0 * const *l_562 = (void*)0;
    struct S0 * const * const *l_561 = &l_562;
    unsigned short **l_590 = (void*)0;
    unsigned char **l_608 = &g_607;
    unsigned short l_614 = 0xF68CL;
    (*l_13) = (1UL || l_12);
    for (g_14 = 0; (g_14 < 15); ++g_14)
    {
        unsigned l_17 = 0x434392F2L;
        int *l_32 = &g_14;
        const int * const *l_523 = &g_63;
        struct S0 **l_536 = &g_199;
        if (l_17)
        {
            int l_33 = 0xD534A2C9L;
            int *l_223 = &g_200.f0;
            int **l_516 = &l_223;
            (*l_516) = func_18(&g_14, (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(func_27(l_32, l_32, l_33, func_34(func_39(func_43(func_47(&g_14, (g_14 >= (func_51((safe_mul_func_uint16_t_u_u((g_14 && p_8), (+p_8))), p_8) && (*l_32))), l_32), (*l_13), l_13), l_223, l_224), (*l_32), p_8, (*l_13))), g_257)), p_8)), (*l_32), (*l_32));

            ;
            ;
            ;
        }
        else
        {
            const int * const **l_524 = &l_523;
            unsigned short *l_529 = &g_83;
            int *l_532 = &g_57;
            int *l_533 = &g_534;
            int *l_535 = &g_200.f0;
            if (((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((*l_32), (((*l_524) = l_523) == &l_32))), (((*l_533) = (g_200.f0 = (p_8 || (g_64 != ((*l_532) = (g_174 = (safe_mul_func_uint16_t_u_u(((*l_529) = p_8), (safe_lshift_func_uint8_t_u_s(g_93.f0, p_8)))))))))) ^ ((*g_210) ^ (*l_32))))), p_8)) >= (*l_13)))
            {
                return (**l_523);
            }
            else
            {
                l_13 = (l_32 = l_535);

                ;
                ;
            }

            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
        (*l_536) = &g_200;

        ;
        return p_8;
    }
    if (p_8)
    {
        unsigned short l_537 = 0xD60FL;
        (*l_13) = l_537;
    }
    else
    {
        (***g_540) = (safe_rshift_func_uint8_t_u_u((g_540 != l_543), 2));

    }
    for (g_220 = (-17); (g_220 != 20); ++g_220)
    {
        const short l_551 = 0xB5ECL;
        unsigned char *l_563 = (void*)0;
        unsigned char *l_564 = &g_257;
        unsigned char *l_565 = &g_93.f1;
        int *l_568 = &g_200.f0;
        struct S0 *l_612 = &g_200;
        (***g_540) = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((l_551 && 253UL), (safe_rshift_func_int16_t_s_u(p_8, 3)))), 8));

        if ((((*g_375) = (((void*)0 == l_554) != g_11)) && (safe_lshift_func_int8_t_s_u(((**l_544) >= (((*l_568) = ((safe_div_func_uint32_t_u_u(((p_8 || (safe_lshift_func_uint8_t_u_u(((*l_565) = ((*l_564) = ((void*)0 != l_561))), (safe_mod_func_int8_t_s_s(g_85, ((l_564 == (void*)0) && 0xF5L)))))) > (**l_544)), l_551)) != 1UL)) && 0UL)), 0))))
        {
            unsigned l_575 = 0UL;
            unsigned char l_581 = 0xC8L;
            unsigned *l_582 = &g_85;
            struct S0 *l_598 = (void*)0;
            (**l_544) = (safe_div_func_uint32_t_u_u(p_8, ((*l_582) = (safe_add_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((l_575 && p_8), 0x550BL)) > ((safe_unary_minus_func_int32_t_s((*l_13))) || ((p_8 || p_8) | ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(l_581, (*g_375))), (-2L))) != g_534)))), p_8)))));
            if (p_8)
            {
                char *l_587 = &g_119;
                unsigned short ***l_591 = &l_590;
                int l_596 = (-1L);
                struct S0 **l_599 = &g_199;
                (**g_540) = (**g_540);
                (***l_543) = (safe_mod_func_int8_t_s_s(((*l_587) = (safe_rshift_func_int16_t_s_u((*l_13), 11))), ((*l_565) = (safe_sub_func_int16_t_s_s(((((*l_591) = l_590) == (void*)0) < (*l_13)), 0x95E1L)))));
                for (g_257 = (-23); (g_257 == 42); g_257++)
                {
                    for (p_8 = 26; (p_8 == 24); p_8--)
                    {
                        (**l_544) = (l_596 | g_597);
                    }
                }
                (*l_599) = l_598;

                ;
            }
            else
            {
                (*l_568) = 0L;
            }
        }
        else
        {
            int *l_605 = &g_534;
            unsigned char **l_609 = (void*)0;
            for (g_83 = (-11); (g_83 == 5); ++g_83)
            {
                for (g_257 = 0; (g_257 >= 15); g_257++)
                {
                    union U1 **l_604 = &g_213;
                    (*l_604) = &g_214;
                }
                if (p_8)
                    break;
            }
            (**l_543) = l_605;

            ;
            (*l_568) = (+(0xD880B42AL | (g_606 != (l_609 = l_608))));

            ;
            for (g_114 = 0; (g_114 <= 59); g_114++)
            {
                struct S0 **l_613 = &l_612;
                (*l_613) = l_612;
                if (p_8)
                    continue;
            }
        }

    }

    ;
    ;
    return l_614;
}







static int * func_18(const int * p_19, unsigned short p_20, char p_21, unsigned p_22)
{
    unsigned char l_509 = 0x9AL;
    int *l_512 = &g_57;
    int *l_513 = &g_174;
    int **l_514 = &l_513;
    int *l_515 = &g_200.f0;
    (*l_514) = &g_57;

    ;
    return l_515;


}







static unsigned short func_27(int * p_28, int * const p_29, short p_30, unsigned p_31)
{
    short l_482 = 0xF7A7L;
    int *l_490 = &g_14;
    int **l_489 = &l_490;
    char *l_493 = &g_119;
    char *l_500 = (void*)0;
    char *l_501 = &g_431;
    int *l_503 = &g_174;
    int **l_502 = &l_503;
    int *l_505 = &g_57;
    (*l_505) = (l_482 || ((((safe_add_func_int16_t_s_s((((safe_mod_func_int8_t_s_s(((*l_501) = (g_504 = (safe_sub_func_uint32_t_u_u((((*l_489) = (void*)0) == ((*l_502) = func_43((safe_mod_func_uint16_t_u_u((*g_210), func_51(((*l_493) = g_200.f4), (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((*l_501) = (safe_sub_func_int32_t_s_s((*g_63), (*p_29)))), l_482)), 0x24430BABL))))), (**g_374), p_28))), 0x03899305L)))), 0xA8L)) != 0xA5AEED05L) == 0L), 65531UL)) | 1L) && g_504) | g_214.f1));

    ;
    ;
    if (l_482)
        goto lbl_506;
lbl_506:
    g_57 = ((void*)0 != &p_31);
    (*l_502) = (*l_489);

    ;
    return (*g_210);
}







static unsigned func_34(const int * p_35, const int p_36, unsigned p_37, unsigned char p_38)
{
    int *l_469 = &g_200.f0;
    unsigned *l_479 = (void*)0;
    unsigned *l_480 = &g_220;
    const unsigned char l_481 = 0xA6L;
    for (g_93.f1 = 29; (g_93.f1 == 44); ++g_93.f1)
    {
        const int **l_472 = &g_63;
        for (g_174 = 0; (g_174 > (-7)); g_174 = safe_sub_func_uint8_t_u_u(g_174, 9))
        {
        }
        (*l_472) = p_35;


        if ((*p_35))
            continue;
    }


    (*l_469) = ((~(((safe_rshift_func_int8_t_s_s((g_200.f1 >= (((((*l_480) = (safe_mul_func_int8_t_s_s((((void*)0 != g_213) < (*l_469)), ((safe_sub_func_int16_t_s_s((0xC5L >= p_38), ((*l_469) > (*g_63)))) < 2UL)))) >= 1UL) || 9UL) == g_11)), 2)) < l_481) >= (*l_469))) == g_93.f1);
    return p_38;
}







static int * func_39(const int * p_40, int * p_41, unsigned p_42)
{
    short l_225 = 1L;
    short *l_226 = &g_214.f1;
    short *l_227 = &g_200.f5;
    int **l_228 = (void*)0;
    int *l_230 = &g_14;
    int **l_229 = &l_230;
    struct S0 **l_238 = &g_199;
    union U1 *l_266 = &g_214;
    unsigned short l_294 = 2UL;
    union U2 *l_324 = &g_93;
    unsigned char l_385 = 255UL;
    int l_462 = 0xA53DDF22L;
    (*l_229) = func_43(((*p_41) = l_225), ((*l_227) = ((*l_226) = p_42)), &g_57);

    ;
    if ((*g_63))
    {
        (*l_229) = &g_14;

        ;
    }
    else
    {
        unsigned char *l_232 = &g_93.f1;
        unsigned char **l_231 = &l_232;
        unsigned char ***l_233 = &l_231;
        char *l_239 = &g_119;
        union U1 *l_269 = &g_214;
        int l_285 = 1L;
        int l_295 = 0xDEB66DA5L;
        union U2 *l_298 = &g_93;
        const int *l_359 = &l_285;
        (*l_233) = l_231;
        for (l_225 = 26; (l_225 > 12); l_225 = safe_sub_func_int8_t_s_s(l_225, 4))
        {
            struct S0 **l_237 = (void*)0;
            struct S0 ***l_236 = &l_237;
            (*l_236) = &g_199;

            ;
        }
        (*p_41) = (9L ^ ((*l_239) = (l_238 == &g_199)));
        if ((*p_41))
        {
            int *l_243 = &g_174;
            int **l_244 = (void*)0;
            int **l_245 = &l_230;
            unsigned char *l_256 = &g_257;
            p_40 = &g_11;

            ;
            p_40 = func_43((*g_63), ((*l_227) = (safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u(p_42)) | ((*l_226) = p_42)), g_200.f0))), &g_174);

            ;
            for (g_93.f1 = 0; (g_93.f1 > 29); g_93.f1 = safe_add_func_uint8_t_u_u(g_93.f1, 8))
            {
                union U2 *l_260 = &g_93;
                (*g_128) = l_260;

                ;
            }
            (*l_229) = (void*)0;
        }
        else
        {
            union U1 *l_272 = &g_214;
            int l_286 = 0x5A2B3274L;
            union U2 *l_370 = &g_93;
            unsigned short *l_399 = &l_294;
            const union U2 ***l_453 = (void*)0;
            if ((((*p_41) = (g_174 = (safe_div_func_int32_t_s_s((*g_63), g_114)))) <= (*g_63)))
            {
                union U1 **l_267 = (void*)0;
                union U1 **l_268 = &g_213;
                int l_289 = 8L;
                union U2 *l_346 = (void*)0;
                int l_354 = 2L;
                for (g_119 = 20; (g_119 > 17); --g_119)
                {
                    (*l_229) = (void*)0;
                    (*p_41) = (*g_63);
                    if ((*g_63))
                        break;
                }
lbl_373:
                p_40 = func_43(func_51(((safe_unary_minus_func_int32_t_s((((*l_268) = l_266) == l_269))) ^ p_42), ((*g_63) ^ (safe_mul_func_int16_t_s_s(((*l_227) = ((l_272 != l_272) || (safe_lshift_func_int16_t_s_s(8L, ((void*)0 != &g_99))))), p_42)))), g_257, p_41);
                if (((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((((*l_239) = (l_285 = (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(g_220, l_285)), ((p_42 < 0xAEBFL) == 0x6AL))), l_286)))) || (safe_mul_func_uint8_t_u_u(246UL, (l_289 | (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(l_294, (*g_210))) & p_42), g_200.f0)))))) ^ (*g_63)), g_200.f5)), l_286)) >= l_295))
                {
                    unsigned l_309 = 0xEF3D33EBL;
                    int l_322 = 0x0CEAD331L;
                    for (p_42 = 8; (p_42 != 49); ++p_42)
                    {
                        short l_310 = 1L;
                        (*g_128) = l_298;

                        ;
                        (*p_41) = (*g_63);
                        (*l_229) = &l_295;

                        ;
                        (*l_230) = (safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s(((*g_63) & ((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((((g_200.f2 ^ 0x1CL) || (((safe_rshift_func_uint16_t_u_u(p_42, 4)) < ((void*)0 == &g_119)) & (l_309 && (*g_63)))) | p_42), 6L)), 0x139D5ECBL)) > g_14)), l_310)), 0xBB33L));
                    }
                    for (l_286 = 9; (l_286 != (-14)); l_286 = safe_sub_func_int8_t_s_s(l_286, 1))
                    {
                        unsigned *l_317 = &g_220;
                        const int l_323 = 0x19E41943L;
                        unsigned short *l_333 = &g_83;
                        l_322 = (safe_div_func_uint32_t_u_u(0x82FD023DL, (safe_mod_func_uint32_t_u_u(1UL, (((*l_317) = l_289) & (safe_mul_func_int8_t_s_s(p_42, func_51(((g_14 != l_323) >= 1L), p_42))))))));
                        (*g_128) = l_324;

                        ;
                    }
                }
                else
                {
                    unsigned short l_338 = 65526UL;
                    unsigned short *l_340 = (void*)0;
                    unsigned short *l_341 = &g_114;
                    unsigned char ***l_343 = (void*)0;
                    if ((safe_mul_func_int8_t_s_s(p_42, (safe_rshift_func_uint8_t_u_u(func_51(l_338, p_42), (((*l_341) = (((safe_unary_minus_func_int32_t_s(l_338)) || g_211) > 3L)) | p_42))))))
                    {
                        (*p_41) = l_286;
                        return &g_14;


                    }
                    else
                    {
                        (*l_229) = p_41;

                        ;
                    }

                    ;
                    if ((safe_unary_minus_func_uint16_t_u(((void*)0 != l_343))))
                    {
                        union U2 *l_347 = &g_93;
                        (*p_41) = (safe_rshift_func_uint16_t_u_s((g_11 && g_214.f1), 10));
                        l_347 = l_346;

                        ;
                    }
                    else
                    {
                        int *l_357 = &g_57;
                        unsigned *l_358 = &g_85;
                        (*l_229) = p_41;
                        (*l_230) = (*g_63);
                        (*l_229) = func_43((safe_rshift_func_int8_t_s_s(p_42, func_51(p_42, l_286))), g_14, &g_14);

                        ;
                        (*l_357) = (safe_div_func_uint32_t_u_u(((*l_358) = (safe_mul_func_uint16_t_u_u((((l_338 & (l_354 ^ ((*l_232) = func_51((((*l_229) = func_43((*p_41), ((((p_42 == l_295) <= (((safe_mod_func_int16_t_s_s(0x0539L, g_214.f0)) != (*g_210)) < ((p_42 <= (*g_63)) && l_289))) >= 4L) != g_99), l_357)) == (void*)0), l_289)))) ^ 0x67FFL) == 9L), (-1L)))), l_286));
                    }

                    ;
                }
                if ((*g_63))
                {
                    unsigned *l_371 = (void*)0;
                    unsigned *l_372 = &g_85;
                    int l_382 = 0x65A480C9L;
                    l_359 = (void*)0;

                    ;
                    for (g_99 = 0; (g_99 > (-28)); g_99 = safe_sub_func_uint8_t_u_u(g_99, 8))
                    {
                        (*l_229) = &l_289;

                        ;
                        return p_41;


                    }
                    if ((safe_sub_func_uint32_t_u_u(((*l_372) = (safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((func_51(g_200.f4, p_42) > (safe_rshift_func_int8_t_s_u(p_42, 2))), (g_114 ^ (l_370 == l_324)))), (+(g_214.f0 == p_42))))), g_200.f0)))
                    {
                        short ***l_376 = (void*)0;
                        short ***l_377 = &g_374;
                        if (p_42)
                            goto lbl_373;
                        (*l_377) = g_374;
                        (*l_229) = func_43((*p_41), ((***l_377) = 0L), p_41);

                        ;
                        (*p_41) = ((safe_add_func_int16_t_s_s(((*g_375) = (safe_sub_func_int8_t_s_s(((*l_239) = (((g_214.f0 ^ 1UL) <= 1L) != (*g_210))), 0xBBL))), 4L)) | l_286);
                    }
                    else
                    {
                        (*p_41) = ((*g_63) ^ (l_370 == l_370));
                        l_385 = (*p_41);
                        (*p_41) = (*g_63);
                    }
                }
                else
                {
                    (*p_41) = (*g_63);
                }
            }
            else
            {
                unsigned l_432 = 6UL;
                int l_433 = 8L;
                union U1 **l_464 = &g_213;
                union U1 ***l_463 = &l_464;
                if ((9L <= (0xAC0AL == l_286)))
                {
                    char *l_430 = &g_431;
                    for (g_99 = 0; (g_99 < 1); g_99++)
                    {
                        unsigned short **l_396 = (void*)0;
                        unsigned short *l_398 = (void*)0;
                        unsigned short **l_397 = &l_398;
                        unsigned short *l_408 = (void*)0;
                        unsigned short *l_409 = &g_114;
                        unsigned *l_410 = &g_85;
                        int l_411 = 3L;
                        (*p_41) = (*l_359);
                        (*l_238) = (void*)0;

                        ;
                        l_411 = (safe_add_func_int32_t_s_s((((*l_410) = func_51((safe_div_func_int16_t_s_s((l_286 = ((*l_227) = (((((*g_210) | (safe_mul_func_int8_t_s_s(func_51(g_64, ((safe_sub_func_int8_t_s_s((((*l_397) = &g_83) != (l_399 = (void*)0)), p_42)) >= (safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((func_51((safe_div_func_uint16_t_u_u(((*l_409) = (((*g_63) != (&l_231 != (void*)0)) >= (((safe_rshift_func_uint8_t_u_u(1UL, l_286)) > 1L) & p_42))), 8L)), g_85) != 0UL) & p_42), 1UL)), 6)))), p_42))) != l_286) > g_200.f5) != (**g_374)))), 0xF6DFL)), g_99)) >= 1L), 0xB6238279L));

                        ;
                        ;
                        (*p_41) = (*g_63);
                    }

                    ;
                    ;
                    l_285 = (safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((0x36695570L < ((*p_41) = ((safe_mul_func_uint8_t_u_u(l_286, (+l_286))) != p_42))), (+func_51((safe_rshift_func_int8_t_s_s((l_432 = (safe_mod_func_int16_t_s_s(p_42, ((*l_359) && ((*l_430) = (l_295 = ((*l_239) = (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(p_42, 4294967289UL)) <= (safe_div_func_int8_t_s_s(0x41L, l_286))), 1))))))))), g_200.f3)), p_42)))) & 0x1FA3FB0CL), 3L)) < p_42), l_433));
                    for (l_286 = 0; (l_286 != (-10)); l_286 = safe_sub_func_int8_t_s_s(l_286, 1))
                    {
                        union U2 *l_436 = &g_93;
                        union U2 **l_437 = &l_324;
                        (*l_437) = ((*g_128) = l_436);

                        ;
                    }
                }
                else
                {
                    for (g_431 = 0; (g_431 <= (-14)); g_431--)
                    {
                        const int **l_440 = (void*)0;
                        const int **l_441 = &l_359;
                        if ((*g_63))
                            break;
                        (*l_441) = p_40;

                        ;
                        if (l_432)
                            break;
                        (*p_41) = (*g_63);
                    }

                    ;
                    for (g_93.f0 = 0; (g_93.f0 != 12); g_93.f0 = safe_add_func_int8_t_s_s(g_93.f0, 4))
                    {
                        p_40 = p_40;
                        (*p_41) = (*g_63);
                        if (l_433)
                            continue;
                    }

                    for (l_286 = 0; (l_286 != 27); ++l_286)
                    {
                        unsigned l_450 = 0x03773507L;
                        (*p_41) = (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(l_450, 14)), (*g_375)));
                        (*p_41) = (safe_sub_func_int16_t_s_s(((**g_374) = ((((void*)0 != l_453) >= (g_257 & 0xADL)) ^ ((**l_231) = (safe_div_func_uint8_t_u_u((l_286 || ((safe_sub_func_uint8_t_u_u((g_85 || ((safe_mod_func_int8_t_s_s((p_42 != ((*l_399) = (safe_rshift_func_int8_t_s_u((-5L), g_220)))), 5UL)) >= 0x14A5L)), g_114)) & g_200.f2)), 0xC7L))))), p_42));
                    }

                    (*p_41) = (*p_41);
                }

                ;
                ;
                ;
                l_462 = ((*p_41) = 2L);
                (*l_463) = &g_213;
                (*l_229) = p_41;

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
    }

    ;

    p_41 = p_41;
    (*p_41) = (*g_63);
    return &g_174;


}







static int * func_43(int p_44, short p_45, int * p_46)
{
    int *l_116 = &g_14;
    int **l_115 = &l_116;
    short *l_117 = &g_99;
    char *l_118 = &g_119;
    union U1 *l_197 = (void*)0;
    int *l_222 = (void*)0;
lbl_221:
    (*l_115) = &g_14;
    if (((((*l_118) = (((*l_117) = p_45) == g_114)) | g_83) & (safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s((2L < 1UL), g_114)), g_64))))
    {
        union U2 *l_131 = &g_93;
        int l_135 = 0x0B97FFB8L;
        if ((safe_lshift_func_int16_t_s_u(p_45, 2)))
        {
            union U2 *l_126 = &g_93;
            unsigned char *l_127 = &g_93.f1;
            if (((l_126 == &g_93) < ((0xEA524B17L <= g_119) || ((&p_45 == &g_99) != ((*l_127) = 0x2BL)))))
            {
                union U2 ***l_130 = &g_128;
                (*l_130) = g_128;
            }
            else
            {
                (*l_115) = &p_44;

                ;
            }

            ;
        }
        else
        {
            g_57 = (*g_63);
            (*g_128) = l_131;

            ;
        }

        ;
        (*l_115) = (*l_115);
        p_46 = &p_44;

        ;
        for (g_57 = 0; (g_57 > 23); g_57 = safe_add_func_uint16_t_u_u(g_57, 7))
        {
            char l_134 = 0L;
            l_135 = ((*p_46) = l_134);
            (*p_46) = (&g_128 != (void*)0);
        }
    }
    else
    {
        union U2 *l_142 = &g_93;
        unsigned short *l_148 = &g_114;
        int *l_155 = &g_57;
        unsigned l_186 = 1UL;
        const int *l_194 = &g_64;
        for (g_114 = 0; (g_114 > 1); g_114 = safe_add_func_uint16_t_u_u(g_114, 4))
        {
            unsigned l_145 = 1UL;
            char l_183 = 0x7FL;
            int *l_189 = &g_174;
            for (p_44 = (-27); (p_44 <= (-23)); p_44 = safe_add_func_int8_t_s_s(p_44, 4))
            {
                unsigned short **l_149 = (void*)0;
                unsigned short **l_150 = (void*)0;
                unsigned short **l_151 = (void*)0;
                unsigned short **l_152 = (void*)0;
                unsigned short **l_153 = &l_148;
                int l_154 = (-1L);
                short l_187 = 0L;
                unsigned char *l_219 = &g_93.f1;
            }
            (*l_189) = ((*l_155) = (-4L));
            if (g_114)
                goto lbl_221;
        }
    }


    ;
    return l_222;


}







static int func_47(int * const p_48, int p_49, int * p_50)
{
    int l_95 = (-1L);
    l_95 = 0x3FEC725EL;
    for (g_83 = (-19); (g_83 == 45); g_83 = safe_add_func_int32_t_s_s(g_83, 1))
    {
        short *l_98 = &g_99;
        int *l_100 = (void*)0;
        int *l_101 = &l_95;
        unsigned short *l_113 = &g_114;
        (*l_101) = (g_11 == (((*l_98) = p_49) ^ g_93.f0));
        (*l_101) = (safe_rshift_func_int8_t_s_s((-1L), 4));
        (*l_101) = (safe_sub_func_int16_t_s_s((*l_101), ((+(((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(g_64)), p_49)) & p_49) > 0x690DL)) >= ((*l_113) = ((!(safe_lshift_func_uint8_t_u_u(((void*)0 == &l_100), 7))) <= (safe_add_func_uint8_t_u_u(p_49, 0xC7L)))))));
    }
    return (*p_48);
}







static char func_51(char p_52, char p_53)
{
    int *l_56 = &g_57;
    int **l_62 = &l_56;
    char l_65 = 0xCEL;
    char l_66 = (-2L);
    int l_67 = 0xA0230A26L;
    const int l_80 = (-10L);
    union U2 *l_90 = (void*)0;
    (*l_56) = p_52;
    l_67 = (safe_add_func_int8_t_s_s(p_53, ((((safe_add_func_int32_t_s_s(g_14, ((l_65 = (p_52 < ((((-10L) > p_52) == p_52) | (((*l_62) = &g_57) != (g_63 = &g_14))))) | l_66))) & 0x8B108A66L) < p_53) >= l_66)));

    ;
    if (p_53)
    {
        unsigned l_70 = 4294967295UL;
        unsigned short *l_81 = (void*)0;
        unsigned short *l_82 = &g_83;
        unsigned *l_84 = &g_85;
        int *l_86 = (void*)0;
        int *l_87 = (void*)0;
        int *l_88 = (void*)0;
        int l_89 = 0x8DE677DAL;
        (*l_56) = (((*g_63) || ((safe_div_func_uint32_t_u_u(l_70, (*g_63))) & l_70)) <= 0xCC53L);
        l_89 = ((p_52 >= l_70) < ((g_14 || (((*l_84) = ((safe_sub_func_uint16_t_u_u(p_52, (((0L < p_52) <= (((*l_82) = ((safe_div_func_int16_t_s_s(((((*l_62) = (void*)0) == &g_14) < ((safe_unary_minus_func_uint32_t_u((((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_80 && 65528UL), g_64)), g_64)) < l_70) & 0xC99C4DB7L))) || l_70)), 0x959FL)) >= 0xA5A1L)) ^ 0xFF69L)) ^ l_70))) < 0L)) | g_14)) || l_70));

        ;
    }
    else
    {
        union U2 **l_91 = (void*)0;
        union U2 *l_92 = &g_93;
        int *l_94 = &g_57;
        (*l_56) = p_53;
        l_92 = l_90;

        ;
        (*l_62) = &g_14;

        ;
        (*l_62) = l_94;

        ;
    }

    ;
    return p_53;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_93.f0, "g_93.f0", print_hash_value);
    transparent_crc(g_93.f1, "g_93.f1", print_hash_value);
    transparent_crc(g_93.f2, "g_93.f2", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_200.f0, "g_200.f0", print_hash_value);
    transparent_crc(g_200.f1, "g_200.f1", print_hash_value);
    transparent_crc(g_200.f2, "g_200.f2", print_hash_value);
    transparent_crc(g_200.f3, "g_200.f3", print_hash_value);
    transparent_crc(g_200.f4, "g_200.f4", print_hash_value);
    transparent_crc(g_200.f5, "g_200.f5", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_214.f1, "g_214.f1", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_784, "g_784", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_904, "g_904", print_hash_value);
    transparent_crc(g_1018.f0, "g_1018.f0", print_hash_value);
    transparent_crc(g_1018.f1, "g_1018.f1", print_hash_value);
    transparent_crc(g_1018.f2, "g_1018.f2", print_hash_value);
    transparent_crc(g_1018.f3, "g_1018.f3", print_hash_value);
    transparent_crc(g_1018.f4, "g_1018.f4", print_hash_value);
    transparent_crc(g_1018.f5, "g_1018.f5", print_hash_value);
    transparent_crc(g_1049, "g_1049", print_hash_value);
    transparent_crc(g_1215.f0, "g_1215.f0", print_hash_value);
    transparent_crc(g_1215.f1, "g_1215.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
