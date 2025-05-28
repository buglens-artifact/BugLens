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
   short f0;
   unsigned f1;
   int f2;
   unsigned short f3;
   int f4;
   const char f5;
   short f6;
};


static unsigned g_2 = 0UL;
static int g_5 = 0x5ED9A924L;
static struct S0 g_11 = {0xAC3DL,3UL,-1L,0xC775L,0x9CB0BEFCL,-5L,1L};
static int *g_12 = &g_5;
static int g_70 = (-4L);
static int g_72 = 0xF8F04B74L;
static unsigned char g_73 = 255UL;
static int g_74 = 0L;
static char g_83 = 0x6AL;
static unsigned g_96 = 1UL;
static int *g_128 = &g_5;
static short g_140 = 0L;
static unsigned g_163 = 4294967293UL;
static char g_237 = 0x61L;
static char g_239 = 0x33L;
static struct S0 *g_251 = &g_11;
static struct S0 **g_250 = &g_251;
static unsigned *g_272 = &g_2;
static unsigned **g_271 = &g_272;
static unsigned char *g_324 = &g_73;
static unsigned char **g_323 = &g_324;
static unsigned short g_348 = 0UL;
static int ** const g_414 = &g_128;
static int ** const *g_413 = &g_414;
static unsigned char g_421 = 0x55L;
static unsigned short *g_526 = &g_11.f3;
static unsigned short **g_525 = &g_526;
static unsigned short ***g_524 = &g_525;
static const int g_545 = 1L;
static int g_552 = (-10L);
static short *g_594 = &g_11.f6;
static short * const *g_593 = &g_594;
static unsigned g_638 = 0x330289DCL;
static unsigned short g_710 = 0x98F3L;
static char *g_733 = &g_83;
static char ** const g_732 = &g_733;
static unsigned ***g_799 = &g_271;
static unsigned **** const g_798 = &g_799;
static const int *g_825 = &g_5;
static unsigned *g_876 = (void*)0;
static unsigned **g_875 = &g_876;
static unsigned ** const * const g_874 = &g_875;
static int g_879 = 0L;
static int *g_923 = &g_879;
static int g_939 = (-4L);
static unsigned g_987 = 0xB23D4084L;
static struct S0 g_1030 = {0x7A1DL,0x546F5DA2L,0L,0xF718L,2L,0xF4L,0x6D67L};
static int *g_1171 = &g_11.f2;



static int func_1(void);
static int func_6(struct S0 p_7, int * p_8, struct S0 p_9, struct S0 p_10);
static struct S0 func_14(int * p_15, char p_16, unsigned char p_17, unsigned short p_18, int * p_19);
static int * func_20(unsigned char p_21);
static char func_25(struct S0 p_26, unsigned p_27, unsigned short p_28, const int * p_29);
static int func_32(unsigned p_33, unsigned short p_34, unsigned short p_35);
static unsigned func_36(struct S0 p_37, unsigned p_38);
static int * func_41(const int * p_42, char p_43, int * p_44, int * const p_45, int * p_46);
static int * func_47(short p_48, unsigned short p_49, int * p_50, int * p_51, short p_52);
static short func_53(short p_54, unsigned char p_55, const unsigned short p_56, unsigned char p_57, struct S0 p_58);
static int func_1(void)
{
    int *l_3 = (void*)0;
    int *l_4 = &g_5;
    struct S0 l_13 = {0xC0DEL,2UL,0xB101EB64L,0x07DDL,-6L,0xF7L,-1L};
    unsigned l_22 = 4UL;
    struct S0 l_39 = {1L,4294967295UL,0L,65534UL,0L,0L,0x6F73L};
    unsigned short l_40 = 0UL;
    unsigned l_536 = 4294967293UL;
    unsigned ***l_1198 = &g_271;
    short *l_1199 = &l_39.f0;
    (*l_4) = (1L || g_2);
    (*l_4) = func_6(g_11, (g_12 = (void*)0), l_13, func_14(func_20(((l_22 , g_11.f6) , ((safe_mod_func_uint16_t_u_u((((&g_5 != (void*)0) & (func_25(g_11, ((safe_add_func_int32_t_s_s(func_32(func_36(l_39, l_40), g_11.f4, g_11.f0), l_536)) , g_140), (**g_525), l_3) ^ 0UL)) , (*l_4)), (**g_593))) && 1L))), l_13.f5, g_11.f4, l_39.f2, &g_879));
    (*g_414) = l_4;
    return g_11.f4;
}







static int func_6(struct S0 p_7, int * p_8, struct S0 p_9, struct S0 p_10)
{
    char l_893 = 0xB6L;
    unsigned ***l_897 = &g_875;
    unsigned ****l_896 = &l_897;
    unsigned * const * const **l_898 = (void*)0;
    int *l_901 = (void*)0;
    unsigned char ***l_962 = &g_323;
    unsigned char ****l_961 = &l_962;
    int l_994 = 0xB13F781CL;
    int l_1032 = (-1L);
    int *l_1044 = (void*)0;
    int *l_1054 = &g_939;
    unsigned char l_1081 = 249UL;
    unsigned short l_1084 = 1UL;
    short l_1103 = 0L;
    int *l_1108 = &g_1030.f2;
    struct S0 l_1123 = {0xA7F7L,4294967295UL,0xECE891A8L,0x2DA8L,0x4CB980B4L,0x5AL,0x1158L};
    unsigned short l_1141 = 0x645BL;
    unsigned char l_1150 = 0xA3L;
    unsigned char l_1159 = 0xD0L;
    const int l_1176 = 1L;
    int l_1190 = 0x78742DBCL;
    if ((l_893 , (*g_825)))
    {
        int *l_894 = (void*)0;
        (*g_414) = l_894;
        (*g_414) = (**g_413);
    }
    else
    {
        int *l_895 = &g_11.f2;
        const int **l_899 = (void*)0;
        const int **l_900 = &g_825;
        int **l_902 = &l_895;
        int l_954 = (-10L);
        unsigned short ***l_986 = &g_525;
        unsigned short l_995 = 0x68D3L;
        int *l_1072 = (void*)0;
        char l_1085 = 0x38L;
        unsigned **l_1119 = &g_876;
        (*l_900) = (((((((*g_324) , (*g_733)) | 0x90L) == 0xF3L) , (void*)0) == (void*)0) , (*l_900));
        (*l_900) = ((**g_413) = (void*)0);
        if ((g_5 = (((*l_902) = ((**g_413) = (*g_414))) != (p_10.f6 , p_8))))
        {
            int l_903 = 0x3FB3ECAFL;
            p_7.f2 = (l_903 = p_10.f2);
            (*l_902) = l_901;
        }
        else
        {
            unsigned ***l_906 = &g_875;
            int l_909 = 0x5004E2CEL;
            unsigned short l_917 = 0x502CL;
            struct S0 l_933 = {-1L,0x757A3F44L,0x12C01416L,0UL,0xE3C5DA37L,0xF0L,2L};
            const int *l_963 = &g_5;
            struct S0 l_978 = {1L,0x38DD0182L,0x3F39F7A6L,0x8266L,1L,0L,0xBDE9L};
            int l_996 = 0xAEABD62CL;
            unsigned l_1016 = 0xE57FAA16L;
            struct S0 **l_1023 = (void*)0;
            int l_1086 = 0xE4A1381EL;
            char *l_1125 = &l_893;
            struct S0 l_1143 = {0x707DL,4294967288UL,-8L,0x9523L,0x8EB912C8L,0xC4L,7L};
            if ((((p_10.f0 & (+(-1L))) | ((safe_mul_func_uint16_t_u_u(p_9.f5, ((l_906 = l_906) == ((**g_593) , &g_875)))) || (safe_mod_func_int8_t_s_s((0x8CL >= ((*g_733) = ((l_909 < p_7.f0) , 2L))), p_9.f4)))) >= 0x3DL))
            {
                struct S0 l_910 = {1L,4294967292UL,0x72CDCC09L,1UL,0x7F53626DL,0x57L,0x8621L};
                unsigned *l_918 = &g_638;
                int *l_919 = &g_72;
                unsigned short *l_922 = &g_710;
                unsigned short l_940 = 1UL;
                int *l_943 = &l_910.f2;
                int *l_955 = &g_72;
                unsigned char *l_960 = &g_421;
                (*l_919) = ((((*g_798) = ((l_909 = ((!l_909) == ((0x10L && (**g_323)) && (((func_25(l_910, (((safe_sub_func_uint32_t_u_u(((*l_918) = ((safe_rshift_func_int8_t_s_u((~(*g_733)), (1L && ((((safe_mod_func_uint32_t_u_u(l_910.f0, l_909)) , func_53(p_10.f3, p_7.f6, l_910.f0, (*g_324), (*g_251))) && l_917) , 0x22L)))) & p_7.f5)), 4294967292UL)) == l_910.f0) == p_10.f5), p_9.f6, p_8) != p_9.f6) & l_917) <= (**g_525))))) , (*g_798))) != (void*)0) < (-3L));
                (*g_414) = func_41((((**g_732) == p_7.f0) , p_8), p_7.f0, (*l_902), (**g_413), l_901);
                if ((*l_919))
                {
                    (*l_919) = 0xAFC6F627L;
                    for (p_10.f0 = (-17); (p_10.f0 < 15); p_10.f0++)
                    {
                        unsigned l_932 = 0x710F206DL;
                        int * const l_938 = &g_939;
                        int * const *l_937 = &l_938;
                        int * const **l_936 = &l_937;
                        (**g_413) = (void*)0;
                        if (p_10.f6)
                            break;
                        (*l_938) = ((safe_lshift_func_uint8_t_u_s(p_7.f0, 2)) , (((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((*g_594), (0UL < (l_932 = 0x97AFL)))) < func_25((l_933 , p_9), ((func_53((*g_594), (((((*l_936) = (((safe_rshift_func_uint16_t_u_u((**g_525), 4)) , (*g_594)) , (void*)0)) == (*g_413)) == 0x86A5L) != p_9.f2), (***g_524), p_9.f0, p_9) , (-10L)) ^ 1UL), (***g_524), (*g_414))), p_7.f4)) ^ p_10.f6) , p_7.f2));
                    }
                    (*l_919) = (0x78C7AFDCL <= p_10.f4);
                    (*l_919) = l_940;
                }
                else
                {
                    const int *l_944 = &g_70;
                    for (g_74 = 0; (g_74 > 26); g_74++)
                    {
                        (*l_902) = ((**g_413) = func_41((*g_414), p_7.f0, l_943, (**g_413), (**g_413)));
                        (*l_900) = l_944;
                    }
                    for (p_10.f4 = 15; (p_10.f4 != 15); p_10.f4++)
                    {
                        short l_949 = 5L;
                        if (p_10.f2)
                            break;
                    }
                }
                (*g_923) = ((safe_sub_func_int8_t_s_s((~(safe_mul_func_int8_t_s_s((+(*g_733)), func_53(p_7.f2, (((*g_323) = (void*)0) != l_960), func_25(func_14(p_8, func_25((*g_251), ((void*)0 == l_961), func_25(func_14(func_41(&l_909, p_7.f6, &l_909, l_943, (**g_413)), (**g_732), p_10.f3, (**g_525), (*l_902)), (*l_943), (***g_524), &l_909), l_963), (*l_955), p_10.f4, (*l_902)), l_893, (*g_526), l_901), p_10.f5, p_9)))), (**g_732))) < l_893);
            }
            else
            {
                char l_985 = 0x10L;
                for (g_73 = 0; (g_73 > 4); ++g_73)
                {
                    (*g_414) = ((safe_mul_func_int16_t_s_s(func_25(((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_10.f4, p_7.f1)), func_25(p_7, func_25(l_978, ((safe_sub_func_int16_t_s_s((**g_593), (*g_594))) < (~(safe_rshift_func_uint16_t_u_s((***g_524), (((*l_963) < (safe_lshift_func_uint16_t_u_u((l_985 < p_7.f3), 10))) != p_7.f3))))), p_10.f4, (*g_414)), (***g_524), l_901))) != l_985), 10)) ^ 249UL), p_9.f3)) , 0xC23EL), 2)) , p_10), p_9.f4, p_9.f4, p_8), 0xC9C0L)) , p_8);
                }
            }
            if ((((65535UL == ((&g_525 != l_986) & g_987)) >= (((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((l_909 = (((((***g_524) && ((safe_mul_func_int16_t_s_s((*l_963), (((*g_923) = (((0x7DL == ((+p_9.f3) <= (*l_963))) && (*l_963)) > 1L)) , 7UL))) != p_7.f2)) , l_994) != 0xD589L) , l_994)) != l_995), (**g_732))), (*g_594))) == p_10.f4) < 0xE5EA39E6L)) ^ l_996))
            {
                struct S0 * const l_1029 = &g_1030;
                struct S0 * const *l_1028 = &l_1029;
                unsigned l_1043 = 0x8EE0A261L;
                unsigned *l_1087 = &l_1016;
                unsigned l_1099 = 0UL;
                char l_1101 = 0xD1L;
                if (p_7.f3)
                {
                    unsigned l_999 = 0xCC4C32D2L;
                    if ((safe_add_func_uint32_t_u_u((0xBCF5L && ((***l_986) = (*g_526))), (~(l_999 < p_9.f5)))))
                    {
                        unsigned l_1000 = 0xEBE654F6L;
                        (*g_923) = (*g_923);
                        return l_1000;
                    }
                    else
                    {
                        unsigned **l_1004 = &g_272;
                        unsigned ***l_1003 = &l_1004;
                        (*g_923) = (safe_sub_func_uint16_t_u_u((**g_525), (*g_526)));
                        (*l_1003) = ((**g_798) = ((*g_923) , (**g_798)));
                    }
                }
                else
                {
                    unsigned char l_1049 = 1UL;
                    (*g_414) = (*g_414);
                    if (((*g_923) = p_10.f2))
                    {
                        unsigned ***l_1007 = &g_875;
                        int l_1017 = (-10L);
                        unsigned char *l_1018 = &g_73;
                        int l_1026 = 0x3AD3374BL;
                        struct S0 * const **l_1027 = (void*)0;
                        char *l_1031 = &g_239;
                        short **l_1034 = &g_594;
                        short ***l_1033 = &l_1034;
                        (*g_923) = ((0xCB7CL < ((+7L) ^ (((**g_593) = (l_1007 == ((*l_896) = (void*)0))) | (&l_1007 != (void*)0)))) , func_25(p_10, p_10.f3, ((*g_526) = ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((*l_1018) = (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((((((*l_963) ^ 1L) >= l_1016) || l_1017) , 0xC5L), 7)) >= 0x14BCL), 0xF5L))), 0)), 0xD4L)) , 65535UL)), (*g_414)));
                        (*g_923) = (((*g_733) = p_10.f4) || ((1L >= (*g_923)) <= p_10.f4));
                        (*l_1033) = &g_594;
                        p_10.f2 = (safe_mod_func_int8_t_s_s(func_25(p_10, (*l_963), (*g_526), &l_1017), ((((*g_272) , 0x37L) && ((p_10.f1 , (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_10.f2, (*g_526))), (*g_526)))) <= (**g_732))) , p_7.f3)));
                    }
                    else
                    {
                        (**g_413) = ((*g_251) , l_1044);
                    }
                    for (l_909 = 0; (l_909 == 28); l_909 = safe_add_func_int32_t_s_s(l_909, 9))
                    {
                        struct S0 l_1055 = {1L,0xEA9CB18BL,0L,0UL,-1L,7L,-10L};
                        int *l_1056 = &l_909;
                        struct S0 **l_1063 = &g_251;
                        p_7.f2 = func_53((((((*g_923) == ((((*g_272) , (func_14((p_10.f6 , ((*g_414) = (*g_414))), (safe_mul_func_int8_t_s_s(0x0FL, l_1049)), p_7.f4, (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(func_53((*g_594), p_9.f6, p_7.f3, p_9.f2, p_10), 8UL)), 0xA581D525L)), l_1054) , l_1043)) >= p_10.f6) == p_10.f4)) , p_10.f2) | 4294967295UL) , (**g_593)), p_7.f4, l_1049, p_9.f4, l_1055);
                        (*g_414) = l_1056;
                        (*l_1054) = ((((void*)0 != &l_917) | (g_638 && (safe_add_func_uint16_t_u_u((p_10.f6 <= ((p_10.f4 ^ func_53((safe_sub_func_int32_t_s_s(((*g_923) = 0L), ((!(*l_1056)) , (safe_rshift_func_int8_t_s_s((*g_733), (!(**g_732))))))), p_9.f5, (*g_526), g_140, (*g_251))) > 3L)), (***g_524))))) , (**g_414));
                        (*l_1063) = (*l_1028);
                    }
                    (*g_923) = (*l_963);
                }
                (*g_923) = ((void*)0 == &g_594);
                (*l_1054) = ((safe_mul_func_uint8_t_u_u((*l_963), ((func_25(p_10, (func_14(((*l_902) = (void*)0), ((p_7.f4 = ((*g_272) , ((((p_10.f2 <= p_9.f5) , ((((((0x05360448L > 5L) , l_1043) == (*g_526)) , p_10.f0) && 0xEFD5L) != p_9.f2)) , l_1043) >= (*g_733)))) , 0x2EL), p_10.f6, p_9.f2, (**g_413)) , p_10.f4), (*g_526), (*g_414)) < (-5L)) | (*g_923)))) | (*l_963));
                if (((safe_sub_func_uint32_t_u_u(((*l_1087) = (safe_rshift_func_int8_t_s_u(((**g_732) = l_1043), (*l_963)))), 4294967288UL)) >= p_9.f5))
                {
                    int *l_1088 = &g_939;
                    (*g_414) = (*l_902);
                }
                else
                {
                    const short l_1091 = 1L;
                    unsigned char *l_1097 = &l_1081;
                    unsigned char *l_1098 = &g_73;
                    int l_1100 = 8L;
                    (*l_1054) = ((*g_923) = (safe_add_func_int32_t_s_s(p_7.f5, l_1091)));
                    p_9.f2 = (l_1100 = (((-2L) & ((safe_mul_func_int8_t_s_s(((**g_732) >= ((*g_526) || ((safe_lshift_func_int16_t_s_u((p_10.f0 = 0x8FC2L), (p_7.f0 , (((*l_1098) = (((safe_unary_minus_func_int8_t_s(((((((*l_1097) = p_9.f0) == (*l_963)) < 4L) == func_25(p_7, p_7.f4, p_9.f5, (**g_413))) , (*g_733)))) , (*l_963)) > p_9.f5)) ^ p_7.f6)))) && l_1091))), l_1099)) < 0xB9L)) && p_7.f3));
                    return l_1101;
                }
            }
            else
            {
                short l_1102 = 0L;
                if (l_1102)
                {
                    return l_1103;
                }
                else
                {
                    (*l_1054) = (*g_923);
                    return (*l_963);
                }
            }
            (*l_1054) = (((p_9.f6 != p_9.f5) , (safe_mod_func_uint16_t_u_u((*l_963), p_10.f0))) , (*l_963));
            if ((0x8452L != ((safe_mul_func_int8_t_s_s((((*g_526) && (*l_963)) ^ ((p_9.f6 ^ g_987) || p_9.f2)), func_25(func_14(l_1108, p_9.f5, p_9.f5, p_10.f0, (**g_413)), p_9.f3, (*l_963), p_8))) != p_10.f6)))
            {
                int l_1117 = 0x86C8E222L;
                unsigned ***l_1118 = (void*)0;
                unsigned **l_1120 = &g_876;
                (*l_1108) = (*l_963);
                (*l_900) = ((*l_902) = p_8);
                (*l_1054) = (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((***g_524), (((*l_963) && ((safe_lshift_func_uint8_t_u_u(l_1117, 1)) , (((l_1119 = ((*l_906) = (*l_906))) != l_1120) >= (safe_sub_func_int16_t_s_s(((l_1117 & (*g_923)) , l_1117), 0x36E1L))))) ^ p_10.f2))), l_1117)), 0x67DCL));
                (*l_1054) = p_10.f2;
            }
            else
            {
                int l_1124 = 0x27688CAFL;
                int l_1126 = 1L;
                unsigned ***l_1133 = (void*)0;
                short *l_1140 = &g_1030.f6;
                unsigned char *l_1142 = &l_1081;
                l_1126 = ((func_25(p_7, l_1124, p_9.f0, p_8) > (((l_1125 != (*g_732)) ^ (((p_7.f5 , (*l_1108)) != (*g_733)) & 1UL)) < 0x2B91L)) <= l_1124);
                (*l_1108) = (safe_add_func_uint16_t_u_u((func_53((**g_593), ((*l_1142) = (safe_mul_func_int16_t_s_s(((*l_1140) = func_53((*g_594), ((safe_sub_func_int32_t_s_s((((255UL ^ (&g_875 == l_1133)) >= (safe_add_func_uint32_t_u_u(p_9.f5, ((***g_524) > (***g_524))))) , 9L), 0x72CDFE89L)) , (*l_963)), p_10.f4, l_1126, (*g_251))), l_1141))), (*l_1108), p_10.f4, l_1143) == 6UL), (***g_524)));
            }
        }
        (**g_413) = &l_1032;
    }
    (**g_413) = func_41((*g_414), (safe_rshift_func_uint16_t_u_u(((p_7.f5 , (safe_sub_func_uint16_t_u_u((*l_1054), (g_237 > (safe_mod_func_int32_t_s_s(((*l_1108) > 0xF8E0L), func_53(p_10.f0, (p_9.f3 , ((*g_526) <= (*g_594))), p_9.f6, p_10.f2, l_1123))))))) < 4294967289UL), l_1150)), p_8, (**g_413), p_8);
    if (((safe_rshift_func_uint16_t_u_u((***g_524), 6)) < (*l_1108)))
    {
        const int *l_1166 = &l_994;
        for (g_74 = 22; (g_74 >= (-14)); g_74 = safe_sub_func_int8_t_s_s(g_74, 2))
        {
            int **l_1162 = &g_923;
            int *l_1163 = &g_1030.f2;
            const int l_1167 = 9L;
            (*l_1162) = func_41((**g_413), p_7.f2, p_8, ((*l_1162) = (void*)0), l_1163);
            (**g_413) = (((((*g_251) , ((((*g_594) = 1L) , ((**g_593) = (*l_1163))) <= ((((3L == ((((safe_add_func_uint32_t_u_u((((+0x3C36L) , func_41(l_1166, (*g_733), &l_994, p_8, &l_1032)) == p_8), (-1L))) >= 255UL) <= p_7.f4) , l_1167)) && (*l_1108)) || 0x9BE0L) <= 0xDFEA1A7DL))) , (*g_526)) >= 0xD9D3L) , &l_994);
            return p_10.f0;
        }
    }
    else
    {
        unsigned char l_1185 = 7UL;
        struct S0 l_1197 = {1L,2UL,0x4E18F864L,8UL,0xACA7A0F1L,0xA5L,0x133DL};
        for (p_7.f3 = 0; (p_7.f3 == 5); ++p_7.f3)
        {
            unsigned short *l_1170 = (void*)0;
            int l_1174 = 0x06B76CA3L;
            short *l_1186 = &g_140;
            short l_1187 = 0xB076L;
            int l_1188 = 1L;
            unsigned l_1189 = 0x597AF0BBL;
            (*g_128) = ((l_1170 != l_1170) | (*l_1108));
            g_1171 = (*g_414);
            for (g_348 = 5; (g_348 != 10); g_348++)
            {
                char l_1175 = 0x5AL;
                (**g_414) = (**g_414);
                l_1175 = l_1174;
            }
            if ((!(0x10L <= ((g_987 = p_7.f6) & (l_1176 , (p_9.f4 < ((((((((safe_lshift_func_int16_t_s_s(l_1174, ((**g_593) = (safe_mod_func_uint8_t_u_u((l_1188 = (((*g_733) = (safe_mod_func_int8_t_s_s((((((func_25((*g_251), (safe_sub_func_int32_t_s_s((l_1174 < (((*l_1186) = l_1185) , l_1174)), (-2L))), (**g_525), &l_1174) > p_9.f2) , 0x78C4697CL) , p_7.f4) ^ 1L) && l_1185), l_1187))) <= 0x48L)), l_1187))))) & l_1189) && 1L) , (*g_251)) , p_10.f1) == (*l_1054)) <= l_1185) != p_7.f2)))))))
            {
                return (*g_923);
            }
            else
            {
                (*l_1054) = func_53(((*g_1171) >= l_1190), ((((p_10.f6 != ((**g_732) = (p_10.f2 , ((+((*l_1108) = (***g_413))) != p_9.f0)))) , ((((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_9.f2, 0L)), (safe_mul_func_uint16_t_u_u(((*g_799) != (**g_798)), l_1188)))) , 5L) , p_9.f3) > 0x7FL)) == 1UL) | 0L), p_10.f6, l_1185, l_1197);
            }
        }
    }
    return (***g_413);
}







static struct S0 func_14(int * p_15, char p_16, unsigned char p_17, unsigned short p_18, int * p_19)
{
    struct S0 l_892 = {0x81CDL,0x1C79CB3CL,0x6A669CD3L,0x5CA2L,0xB79777D5L,9L,0xADA6L};
    return l_892;
}







static int * func_20(unsigned char p_21)
{
    int *l_620 = &g_70;
    unsigned **l_626 = &g_272;
    struct S0 l_630 = {0xF56AL,0x34ACB669L,0x462DF318L,0UL,-6L,0x93L,0x2E62L};
    const int *l_658 = &g_5;
    unsigned char **l_689 = &g_324;
    int *l_755 = &g_5;
    int l_778 = 5L;
    int l_787 = (-1L);
    unsigned short l_796 = 0xC240L;
    int *l_866 = &l_630.f2;
    unsigned char l_887 = 0x8AL;
    short *l_890 = &l_630.f6;
    int *l_891 = &g_11.f2;
    if (((*g_128) = (***g_413)))
    {
        int * const l_629 = &g_5;
        int *l_662 = &g_5;
        struct S0 *l_663 = &g_11;
        char *l_694 = (void*)0;
        char **l_693 = &l_694;
        struct S0 *l_762 = (void*)0;
        (**g_413) = l_620;
        for (g_5 = (-16); (g_5 <= (-6)); g_5 = safe_add_func_uint32_t_u_u(g_5, 3))
        {
            unsigned *l_625 = &g_96;
            short *l_631 = &l_630.f0;
            int l_652 = 0xDDDFBAEBL;
            unsigned char **l_655 = &g_324;
            short *l_682 = &g_140;
            unsigned char ***l_685 = &g_323;
            unsigned char ***l_686 = (void*)0;
            unsigned char ***l_687 = (void*)0;
            unsigned char ***l_688 = &l_655;
            unsigned char ***l_690 = &l_689;
            unsigned short *l_695 = &g_348;
            struct S0 *l_707 = &l_630;
            (*l_620) = (((((**g_593) , (((*l_631) = ((func_25((*g_251), ((*l_625) = ((**g_593) , (safe_mul_func_int16_t_s_s(4L, (*g_594))))), (l_626 != &g_272), func_41(l_625, (safe_lshift_func_uint8_t_u_s((*g_324), p_21)), l_620, l_629, (*g_414))) , l_630) , p_21)) & p_21)) != p_21) != 4294967292UL) <= p_21);
        }
        (*l_662) = (***g_413);
    }
    else
    {
        char *l_773 = &g_237;
        unsigned l_774 = 0xE1A58A38L;
        const struct S0 l_777 = {0L,0xAB771C24L,0x1D15EA2AL,1UL,0x6E67EAACL,-1L,0x42E1L};
        struct S0 *l_779 = &g_11;
        struct S0 **l_780 = &g_251;
        int * const l_788 = &l_787;
        int *l_797 = (void*)0;
        unsigned short *l_860 = &g_348;
        const int *l_863 = (void*)0;
        unsigned *l_871 = &g_96;
        unsigned **l_870 = &l_871;
        unsigned ** const *l_869 = &l_870;
        unsigned ** const **l_872 = (void*)0;
        unsigned ** const **l_873 = &l_869;
        short *l_880 = (void*)0;
        short *l_881 = &l_630.f6;
        int l_882 = 0xFA687E7AL;
        (*l_620) = (((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((((l_630 , l_773) == (void*)0) , p_21) != (*l_658)), p_21)), (-5L))) > l_774) & (**g_732));
        if (((safe_lshift_func_uint16_t_u_u(((*l_755) = (l_777 , l_777.f2)), l_778)) , (((*l_780) = l_779) != (void*)0)))
        {
            unsigned *l_783 = &g_96;
            unsigned *l_784 = &g_638;
            int l_785 = 0x186B8DD0L;
            struct S0 l_786 = {-3L,0x5EF8EA93L,0x1F0434EFL,0x1AC3L,0xB65D8B18L,2L,0xC440L};
            unsigned short *l_789 = (void*)0;
            unsigned short *l_790 = (void*)0;
            unsigned short *l_791 = &g_710;
            unsigned char ***l_807 = &g_323;
            unsigned char * const *l_809 = (void*)0;
            unsigned char * const **l_808 = &l_809;
            int **l_823 = &g_128;
            int ***l_822 = &l_823;
            (*g_414) = func_41(((((*l_620) = l_777.f1) ^ 248UL) , &l_778), (safe_add_func_int16_t_s_s((((*l_784) = ((*l_783) = 0xA38078ABL)) , l_785), func_25(l_786, l_787, (*g_526), func_41((**g_413), p_21, (**g_413), &l_785, (*g_414))))), &l_785, l_788, &l_787);
            (*l_755) = 6L;
            if ((!func_25((*l_779), ((*l_783) = ((*l_784) = p_21)), ((*l_791) = 0xD977L), func_41((*g_414), (7UL | (func_53(l_785, ((**l_689) = (safe_rshift_func_uint8_t_u_u((((*g_128) && (g_239 ^ (safe_mul_func_int16_t_s_s(((*g_733) | (-8L)), (-1L))))) > p_21), 0))), (***g_524), p_21, (*g_251)) || l_796)), &l_778, (**g_413), l_797))))
            {
                int l_804 = 3L;
                const int l_810 = 0xC4F738E2L;
                int **l_811 = &g_128;
                int **l_812 = &l_755;
                (*l_811) = l_788;
                (*l_812) = l_788;
                (*g_414) = (*l_811);
                return l_797;
            }
            else
            {
                unsigned char *** const *l_821 = &l_807;
                int ** const *l_824 = &l_823;
                int *l_835 = &l_785;
                struct S0 l_858 = {6L,0UL,-1L,65535UL,1L,0xF6L,-5L};
                unsigned short *l_859 = &g_348;
                unsigned short **l_861 = (void*)0;
                unsigned short **l_862 = &l_789;
                int l_864 = 0x8F831D1BL;
                short *l_865 = &l_858.f0;
                for (g_73 = 0; (g_73 <= 41); g_73++)
                {
                    int *l_836 = &l_787;
                    (*l_755) = (safe_mod_func_int16_t_s_s(((((p_21 <= 0x0B3492E0L) , (*g_251)) , ((*g_733) = ((safe_rshift_func_int16_t_s_u(func_25((*g_251), p_21, ((safe_rshift_func_int16_t_s_s((0xF994L & ((void*)0 != l_821)), 5)) , ((*l_620) = ((l_822 == l_824) , 0x2E43L))), g_825), p_21)) && 0xCF32L))) > p_21), 0xDEBFL));
                    for (g_348 = (-8); (g_348 != 18); g_348 = safe_add_func_uint16_t_u_u(g_348, 9))
                    {
                        int **l_828 = &l_620;
                        (*l_828) = l_788;
                        (*l_828) = func_41(func_41(func_41((*g_414), (safe_lshift_func_int16_t_s_s(((**g_323) , (((*l_658) & (((safe_rshift_func_int16_t_s_u(((***l_824) = (safe_mod_func_uint8_t_u_u((p_21 = (**l_823)), (**l_823)))), (***g_524))) && 4294967295UL) , 0xD669L)) <= (!((~(-6L)) != 0x5FL)))), (*l_620))), (*l_823), (**l_824), (**l_822)), (**l_828), l_835, l_797, l_836), (*l_835), l_797, &l_787, &l_778);
                    }
                    for (g_239 = 6; (g_239 == (-2)); g_239--)
                    {
                        unsigned short l_847 = 0xCC9BL;
                        (*l_788) = (((*l_755) = ((safe_add_func_int32_t_s_s(((safe_add_func_int8_t_s_s((p_21 != (*l_755)), (*l_788))) >= ((*g_128) = (((((0L < (p_21 || (***g_524))) || ((safe_add_func_uint16_t_u_u(((*l_791) = ((safe_sub_func_uint32_t_u_u((&l_784 != (void*)0), p_21)) < (***l_822))), l_847)) , 0x44BAA014L)) , p_21) > (***l_824)) , (***l_824)))), 0x31B656E1L)) < (**g_323))) , 0x8AA5F93BL);
                        (*l_835) = (***l_824);
                    }
                    (***l_824) = (***g_413);
                }
                (*l_835) = (((safe_rshift_func_uint16_t_u_u(func_53((**g_593), (*g_324), ((((*l_791) = (safe_lshift_func_int8_t_s_u((*g_733), 3))) || ((*l_865) = (safe_rshift_func_uint8_t_u_u((((*l_773) = (safe_rshift_func_uint8_t_u_u((((**g_323) > ((*l_788) = (safe_mul_func_int16_t_s_s((**g_593), (func_25(l_858, (*l_835), ((((*g_525) = l_859) != ((*l_862) = l_860)) | p_21), l_863) != (*g_733)))))) , 0xCAL), 4))) || 0UL), l_864)))) , 0xAEB4L), p_21, (*l_779)), p_21)) | 65535UL) , (***g_413));
                return (**g_413);
            }
        }
        else
        {
            (*l_788) = p_21;
        }
        (*l_620) = ((safe_lshift_func_int8_t_s_u((((((*l_873) = l_869) == ((p_21 | (**g_593)) , (((void*)0 == (*g_323)) , g_874))) | ((*l_881) = (((*l_788) = ((!(((**l_870) = (0xD176L <= (((((((((*l_755) = (*g_526)) == ((~((safe_mod_func_uint8_t_u_u(func_25(l_630, p_21, g_879, &l_787), 0xB3L)) < 0xFDL)) , (*g_594))) | p_21) , l_630) , 0x02C13753L) != p_21) == p_21) | p_21))) , (*l_866))) & 0xACL)) <= p_21))) >= (*g_324)), l_882)) < p_21);
    }
    (*g_414) = (*g_414);
    return (**g_413);
}







static char func_25(struct S0 p_26, unsigned p_27, unsigned short p_28, const int * p_29)
{
    int *l_541 = (void*)0;
    unsigned char ***l_580 = &g_323;
    int l_619 = 1L;
    for (p_26.f4 = 0; (p_26.f4 <= 8); p_26.f4++)
    {
        const int *l_551 = &g_11.f2;
        int * const l_557 = &g_11.f2;
        for (p_26.f3 = 0; (p_26.f3 > 30); p_26.f3 = safe_add_func_uint32_t_u_u(p_26.f3, 8))
        {
            int *l_542 = &g_11.f2;
            const int *l_544 = &g_545;
            const int **l_543 = &l_544;
            const int **l_546 = (void*)0;
            const int *l_548 = &g_545;
            const int **l_547 = &l_548;
            (*l_547) = ((*l_543) = func_41(p_29, g_74, l_541, (*g_414), l_542));
        }
        for (p_27 = 9; (p_27 > 45); p_27++)
        {
            char *l_553 = &g_239;
            int * const l_555 = &g_70;
            int *l_556 = &g_5;
            unsigned **l_586 = &g_272;
            char l_615 = 5L;
            const int **l_616 = &l_551;
            const int *l_618 = &g_11.f2;
            const int **l_617 = &l_618;
            (**g_413) = func_41(l_551, ((*l_553) = g_552), func_41(l_551, (safe_unary_minus_func_uint8_t_u(0x6DL)), (*g_414), l_555, l_556), l_557, l_541);
        }
        if (p_26.f2)
            break;
    }
    return l_619;
}







static int func_32(unsigned p_33, unsigned short p_34, unsigned short p_35)
{
    short *l_427 = &g_11.f6;
    short **l_426 = &l_427;
    unsigned short l_428 = 0x9ED0L;
    unsigned short *l_435 = &g_348;
    char *l_442 = (void*)0;
    char *l_443 = &g_83;
    const int l_446 = 0x2857D9F9L;
    struct S0 l_447 = {0x7285L,0x826F6BB8L,1L,1UL,0L,0L,0x684BL};
    unsigned l_448 = 0xF3ACD965L;
    int *l_458 = &g_11.f2;
    if ((safe_mul_func_int16_t_s_s(func_53((safe_add_func_uint8_t_u_u(p_33, ((l_428 = ((void*)0 == l_426)) < ((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_421, func_53(g_239, (safe_sub_func_uint16_t_u_u(((*l_435) = g_237), ((((((((((**g_323) = (0x86L >= ((((safe_sub_func_uint32_t_u_u(((func_53((((((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(((*l_443) = p_35), 5)), ((safe_sub_func_int32_t_s_s(((void*)0 != &g_96), g_140)) ^ l_446))) , g_11.f4) , p_34) != (***g_413)) > (**g_323)), (**g_323), g_140, l_446, l_447) <= 0UL) > g_11.f2), p_34)) == 0x6413676EL) <= l_447.f0) == l_447.f6))) <= l_447.f4) < l_447.f4) != p_33) != 0x5DE98533L) > p_34) ^ 1L) && l_447.f3) && 1L))), g_140, l_447.f3, (*g_251)))), 1L)) | p_35)))), l_447.f2, g_11.f2, l_448, l_447), l_448)))
    {
        struct S0 l_451 = {0xBF1EL,0xD471A9AAL,1L,0xA220L,2L,0x32L,-1L};
        if (((***g_413) = p_35))
        {
            struct S0 l_456 = {0xBD7AL,5UL,0xA55D4B49L,9UL,1L,1L,0x3F3EL};
            int *l_457 = &l_456.f2;
            const int *l_460 = &l_451.f2;
            const int **l_459 = &l_460;
            (*l_459) = &l_446;
            (*l_459) = (*l_459);
        }
        else
        {
            short *l_461 = &l_451.f6;
            int *l_462 = &g_5;
            (**g_413) = (**g_413);
            for (l_448 = 0; (l_448 != 59); l_448++)
            {
                if (l_451.f0)
                    break;
            }
            (*g_128) = (-1L);
        }
    }
    else
    {
        int l_467 = 6L;
        struct S0 l_472 = {0L,0x5B9472ADL,0x322F597AL,0xBCCFL,0xC64A288BL,0L,0L};
        short *l_487 = &l_472.f0;
        for (g_348 = 0; (g_348 == 37); ++g_348)
        {
            struct S0 l_473 = {0x88BCL,1UL,0x0C580E44L,0x25FDL,0L,7L,1L};
            int *l_482 = &g_72;
            if (l_467)
                break;
            (***g_413) = (safe_rshift_func_uint8_t_u_u((*g_324), (safe_lshift_func_uint8_t_u_s((*g_324), 0))));
            (*l_482) = p_33;
            for (l_447.f2 = 0; (l_447.f2 == 18); l_447.f2 = safe_add_func_uint16_t_u_u(l_447.f2, 1))
            {
                unsigned char l_491 = 1UL;
                unsigned short *l_502 = (void*)0;
                int l_527 = 7L;
                unsigned char l_534 = 1UL;
                for (l_472.f2 = 0; (l_472.f2 >= 10); ++l_472.f2)
                {
                    short **l_490 = (void*)0;
                    int l_496 = 0x2CEB77BDL;
                    unsigned short *l_497 = &l_472.f3;
                    unsigned short *l_498 = &l_473.f3;
                    unsigned short l_499 = 0x828AL;
                    unsigned short ***l_523 = (void*)0;
                    int *l_535 = &l_496;
                    (***g_413) = (-7L);
                    if ((l_487 == ((safe_mul_func_int8_t_s_s((g_11.f4 == (((void*)0 == l_490) < ((l_491 < (l_491 == ((safe_sub_func_uint16_t_u_u(((*l_498) = (p_33 , ((*l_497) = (safe_rshift_func_int16_t_s_u((((**g_323) = (p_34 | ((p_33 != 0L) | p_35))) , (-1L)), l_496))))), l_499)) | p_33))) , l_472.f5))), p_35)) , l_487)))
                    {
                        (***g_413) = (((safe_add_func_uint8_t_u_u((l_502 != &p_34), p_34)) , (safe_sub_func_int16_t_s_s(g_140, 0x5ECCL))) , (g_421 , (*l_458)));
                    }
                    else
                    {
                        unsigned l_511 = 0xF2FF3444L;
                        l_482 = ((safe_add_func_int32_t_s_s(0x0F94A629L, ((safe_lshift_func_uint16_t_u_s(((*l_498) = (safe_rshift_func_uint16_t_u_u((((**g_414) = 7L) , (p_35 = l_511)), 7))), 9)) != (0x3902L & (g_11.f5 == 0x67EDL))))) , ((**g_413) = (*g_414)));
                        (***g_413) = (safe_mod_func_int16_t_s_s(l_472.f1, l_496));
                        if ((*g_128))
                            continue;
                    }
                    l_527 = (((((safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_uint32_t_u(0xC2D76455L)) ^ (l_472 , (safe_mul_func_uint16_t_u_u(0x1359L, (4294967292UL < (0x31F8L | ((((~((**g_323) = ((safe_lshift_func_int8_t_s_s(((***g_413) >= p_34), (safe_lshift_func_int8_t_s_u(((void*)0 != &l_447), (**g_323))))) >= p_34))) | (*l_458)) < (***g_413)) ^ l_491))))))), p_35)) ^ (-1L)) , l_523) != g_524) > g_11.f5);
                    (*l_535) = ((safe_add_func_int16_t_s_s((l_472.f4 <= ((**g_323) , p_35)), p_35)) , (l_472.f5 ^ (((*l_482) = ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((**g_323) = (((*g_128) ^ (!((+0x12L) && g_5))) <= ((*l_487) = (g_96 || p_35)))), l_534)), 4294967295UL)) && 1UL)) == 0x071A631DL)));
                }
                if (l_472.f1)
                    break;
            }
        }
    }
    return (*l_458);
}







static unsigned func_36(struct S0 p_37, unsigned p_38)
{
    unsigned short l_59 = 0UL;
    int *l_65 = &g_5;
    unsigned l_66 = 0UL;
    struct S0 l_67 = {3L,1UL,-1L,0x5918L,-2L,0x12L,0xCF19L};
    int **l_403 = &l_65;
    (*l_403) = func_41(func_47(func_53((l_59 ^ (safe_unary_minus_func_uint16_t_u(g_11.f5))), g_11.f5, g_11.f1, ((p_37.f2 , (g_11.f3 || (+g_11.f3))) , ((*l_65) = (safe_add_func_int16_t_s_s((l_59 , ((safe_sub_func_int16_t_s_s((((l_65 == &g_5) > l_66) , 0x6E27L), (*l_65))) | g_11.f2)), (*l_65))))), l_67), p_37.f0, l_65, l_65, p_37.f4), g_11.f4, l_65, g_272, l_65);
    for (p_37.f3 = 0; (p_37.f3 == 1); p_37.f3++)
    {
        unsigned char l_410 = 0xE7L;
        unsigned short *l_417 = &l_67.f3;
        unsigned char *l_420 = &g_421;
        (*g_414) = (*l_403);
        if ((*g_128))
            continue;
    }
    return p_38;
}







static int * func_41(const int * p_42, char p_43, int * p_44, int * const p_45, int * p_46)
{
    int *l_330 = &g_70;
    int **l_331 = &g_128;
    unsigned l_340 = 4294967295UL;
    unsigned char l_373 = 1UL;
    const unsigned l_387 = 0x318096DAL;
    (*l_331) = l_330;
    for (g_163 = 0; (g_163 == 55); g_163++)
    {
        short l_346 = 0x5A76L;
        const unsigned short *l_380 = &g_11.f3;
        const unsigned short **l_379 = &l_380;
        char l_381 = (-5L);
        int *l_402 = &g_70;
        for (p_43 = 0; (p_43 != (-10)); --p_43)
        {
            int l_345 = 0L;
            unsigned short *l_347 = &g_348;
            short *l_349 = &g_140;
            struct S0 l_350 = {-8L,4294967295UL,1L,4UL,-8L,0x5CL,0x96DDL};
            unsigned short * const **l_376 = (void*)0;
        }
    }
    return &g_70;
}







static int * func_47(short p_48, unsigned short p_49, int * p_50, int * p_51, short p_52)
{
    int *l_76 = &g_5;
    int **l_75 = &l_76;
    char *l_81 = (void*)0;
    char *l_82 = &g_83;
    int l_99 = 0xEE114377L;
    struct S0 l_141 = {0x99CAL,0xB65799C7L,0x5F5692BDL,0x9671L,1L,5L,0L};
    char l_240 = 0x35L;
    struct S0 *l_248 = &l_141;
    struct S0 **l_247 = &l_248;
    int *l_252 = (void*)0;
    int l_253 = 1L;
    unsigned l_281 = 0x52AFE84FL;
    char l_304 = 0x5AL;
    (*l_75) = &g_70;
    if (((**l_75) = (safe_rshift_func_uint16_t_u_u(((g_70 != ((((~((*l_82) = g_72)) && (*l_76)) != (g_2 > (p_52 == ((p_49 & g_73) == g_11.f6)))) && (safe_mul_func_uint16_t_u_u((p_50 == p_51), p_52)))) && 0L), g_72))))
    {
        const unsigned char l_86 = 0x9DL;
        unsigned *l_95 = &g_96;
        struct S0 l_100 = {9L,4294967295UL,0xC049D9BBL,0x2B28L,0xFFB082E2L,0L,-1L};
        unsigned l_113 = 1UL;
        const unsigned short l_120 = 0x09E2L;
        int *l_123 = (void*)0;
        const int *l_144 = &l_100.f2;
        unsigned *l_232 = &g_2;
        unsigned *l_233 = &g_163;
        char *l_236 = &g_237;
        char *l_238 = &g_239;
        unsigned short *l_241 = (void*)0;
        unsigned short *l_242 = (void*)0;
        unsigned short *l_243 = &l_100.f3;
        int l_244 = 1L;
        (*p_51) = func_53(p_52, g_11.f2, l_86, (safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(p_48, ((((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((*l_76) >= ((*l_95) = p_49)) && 0xDDE4L), (g_5 , (safe_sub_func_uint16_t_u_u(((g_11 , l_86) >= p_48), p_48))))), 6)) && p_52) ^ (**l_75)) , p_52))), l_99)), l_100);
        if ((*p_50))
        {
            int l_101 = (-10L);
            int l_118 = 0x3885E37CL;
            struct S0 l_122 = {0xBE12L,0x64217F86L,0x92DBF0B2L,0xD924L,0x5D133FD7L,3L,0L};
            unsigned char *l_172 = &g_73;
            unsigned char **l_171 = &l_172;
            unsigned char l_188 = 0x04L;
            (*p_50) = l_101;
            for (l_99 = 15; (l_99 >= 14); l_99--)
            {
                int *l_105 = &g_5;
                int **l_104 = &l_105;
                unsigned short *l_112 = &l_100.f3;
                short *l_116 = &l_100.f6;
                unsigned *l_117 = &g_2;
                short *l_119 = &l_100.f0;
                struct S0 l_121 = {0x26AFL,4294967286UL,-8L,1UL,0xFA0A7086L,0L,2L};
                (*l_104) = ((*l_75) = &g_72);
                for (l_100.f3 = 4; (l_100.f3 <= 55); ++l_100.f3)
                {
                    (*p_50) = (*p_51);
                }
                if (((safe_add_func_uint16_t_u_u((((*l_95) = (safe_add_func_int8_t_s_s((((((*l_112) = (**l_104)) & g_11.f0) && p_49) || func_53(l_113, (((safe_mod_func_int16_t_s_s((((func_53(((*l_116) = g_74), (((*l_117) = l_113) , (((*l_119) = l_118) && 0UL)), l_120, l_101, l_121) , g_11.f0) == g_11.f1) <= p_52), g_11.f1)) == g_11.f6) >= 2L), l_100.f1, g_11.f1, l_122)), 0UL))) & l_86), p_48)) | p_52))
                {
                    return l_95;
                }
                else
                {
                    short l_127 = 4L;
                    l_123 = (void*)0;
                    (*l_75) = &g_72;
                    for (l_122.f3 = (-6); (l_122.f3 != 32); l_122.f3++)
                    {
                        unsigned char l_126 = 0UL;
                        if ((*l_105))
                            break;
                        (*p_50) = l_126;
                        (*l_76) = l_127;
                        g_128 = l_95;
                    }
                    return &g_70;
                }
            }
            for (l_122.f2 = (-26); (l_122.f2 != (-27)); l_122.f2 = safe_sub_func_int32_t_s_s(l_122.f2, 2))
            {
                unsigned short *l_139 = &l_122.f3;
                const int l_147 = (-1L);
                struct S0 l_181 = {0x0F1BL,0UL,0L,0UL,0xD2D33707L,1L,0x7FAEL};
                char *l_184 = &g_83;
                short *l_187 = &l_122.f6;
                struct S0 *l_190 = &g_11;
                struct S0 **l_189 = &l_190;
                if (func_53((p_48 && p_52), g_2, (g_140 = (((safe_rshift_func_int16_t_s_s(p_48, 7)) ^ (p_52 > (safe_rshift_func_uint16_t_u_u(((*l_139) = ((safe_sub_func_uint32_t_u_u(((&g_83 == (void*)0) ^ (safe_rshift_func_int16_t_s_s(0x1C7EL, 1))), ((**l_75) = (*g_128)))) , (**l_75))), p_48)))) < 2L)), g_83, l_141))
                {
                    (*l_75) = &g_70;
                    if ((*g_128))
                        continue;
                }
                else
                {
                    const int **l_145 = (void*)0;
                    const int **l_146 = &l_144;
                    struct S0 l_148 = {-7L,3UL,3L,0x3652L,-1L,1L,0x044FL};
                    (*g_128) = ((safe_sub_func_int8_t_s_s(func_53(l_101, ((p_51 = (void*)0) != ((*l_146) = l_144)), l_147, g_11.f2, l_148), (((safe_sub_func_int8_t_s_s(p_52, 4L)) && 4294967291UL) , (-2L)))) | g_11.f5);
                    (*l_76) = ((*g_128) = (g_140 != p_52));
                    (*l_146) = &g_70;
                }
                for (g_72 = 0; (g_72 != 21); ++g_72)
                {
                    unsigned char l_168 = 246UL;
                }
                (*l_76) = ((l_118 = (safe_sub_func_uint8_t_u_u(func_53(((*l_187) = ((l_181 , ((g_83 , ((safe_rshift_func_int16_t_s_s(g_163, 7)) , (l_172 != (l_184 = (p_49 , &g_83))))) && (l_181.f3 == ((*l_76) = ((*p_50) = (255UL >= ((0x02L ^ 0UL) && 1UL))))))) ^ 0L)), p_48, p_48, l_188, l_181), 0xD2L))) >= g_11.f1);
                (*l_189) = &g_11;
            }
        }
        else
        {
            short l_192 = 0x8D99L;
            unsigned char l_209 = 0UL;
            struct S0 l_223 = {-1L,4294967294UL,9L,65535UL,1L,0x36L,-5L};
            const unsigned short l_226 = 0UL;
            short l_227 = 1L;
            if ((*g_128))
            {
                int *l_191 = &g_11.f2;
                p_51 = l_191;
                (*l_75) = &g_5;
                (*g_128) = (*g_128);
                l_192 = 0L;
            }
            else
            {
                int *l_193 = &l_100.f2;
                return &g_72;
            }
            (*g_128) = (*p_51);
            (*p_50) = (~((-1L) <= ((l_192 , (0x85E3D3FFL >= (((!(p_49 != ((p_48 , (func_53((((*l_144) && (~(l_100 , (g_72 ^ 0x25L)))) >= p_52), (*l_144), (*l_76), (**l_75), g_11) , g_96)) >= 0xB4F2L))) || (*l_144)) == (-9L)))) | g_83)));
            for (g_72 = (-30); (g_72 > 8); g_72 = safe_add_func_int8_t_s_s(g_72, 9))
            {
                short *l_206 = (void*)0;
                short *l_207 = &l_192;
                int l_208 = 0xC1E0805CL;
                unsigned *l_216 = (void*)0;
                int *l_228 = &l_208;
                int *l_229 = &l_99;
                (*p_50) = ((0x97B6L >= p_48) , (safe_rshift_func_uint8_t_u_u((((((g_11.f5 != (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(p_52, ((safe_mod_func_int8_t_s_s(0x7AL, (((*l_95) = (g_11.f4 <= (g_11.f4 , ((*l_207) = (1L && 3L))))) | l_208))) || l_209))), g_163))) & 0xF347L) , p_48) != 0x25B5L) ^ 1UL), 0)));
                (*l_229) = (((((l_223.f2 = (safe_mod_func_uint8_t_u_u((((*l_228) = ((*g_128) = (safe_mod_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_s((((g_163 , &g_96) == l_216) & ((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(g_11.f6)), (safe_unary_minus_func_uint16_t_u((((*l_207) = (safe_add_func_uint8_t_u_u(((*g_128) >= (l_223 , (*l_144))), ((safe_sub_func_int8_t_s_s((g_11.f6 ^ (g_140 = p_49)), g_163)) > (*p_51))))) , l_226))))) , g_83)), p_49)) , l_208) , l_227) , 0L), (*l_144))))) ^ l_223.f3), p_49))) || (*p_51)) | p_49) > g_74) & 1L);
            }
        }
        (*g_128) = (func_53(((*l_144) & (*g_128)), ((g_96 <= (g_96 < g_11.f3)) , ((l_244 = (safe_mod_func_int8_t_s_s(((*l_82) = 0x44L), ((*l_76) ^ (((*l_243) = (((*l_233) = ((*l_232) = p_48)) , (safe_lshift_func_uint8_t_u_s((l_240 = (((*l_238) = ((*l_236) = (*l_144))) , 246UL)), p_48)))) == g_11.f3))))) & p_49)), g_140, p_48, l_141) , (*l_144));
        for (l_100.f2 = 23; (l_100.f2 >= 18); l_100.f2 = safe_sub_func_int32_t_s_s(l_100.f2, 5))
        {
            struct S0 ***l_249 = (void*)0;
            g_250 = l_247;
            return l_252;
        }
    }
    else
    {
        short l_257 = 0x8756L;
        unsigned *l_258 = &g_96;
        int l_259 = 0xE34DF51DL;
        unsigned short *l_260 = (void*)0;
        unsigned short *l_261 = &l_141.f3;
        short *l_266 = &l_141.f6;
        struct S0 l_269 = {2L,1UL,0x3A2DD5C5L,65529UL,0x8925770AL,-1L,-1L};
        short l_279 = (-6L);
        char l_290 = 0x82L;
        int l_293 = 0x0DC0335DL;
        (*l_75) = (*l_75);
        (*g_128) = (p_48 ^ (((l_253 > (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint8_t_u(((**l_75) , (0xA2L | l_257)))), g_74))) > ((*l_261) = (((l_259 = (((l_257 , ((*l_258) = 4294967295UL)) <= ((**l_247) , 4294967295UL)) >= (**l_75))) , (*g_251)) , 0UL))) | p_48));
        for (l_141.f4 = 0; (l_141.f4 > (-7)); l_141.f4--)
        {
            return &g_72;
        }
        if ((p_48 > (safe_add_func_int8_t_s_s((((void*)0 != &g_96) ^ (g_11.f0 != (0UL ^ g_140))), func_53(((*l_266) = g_72), ((*l_76) , (safe_lshift_func_int16_t_s_s(l_259, g_83))), p_49, p_49, l_269)))))
        {
            unsigned **l_270 = (void*)0;
            char l_274 = 0xE6L;
            const int *l_280 = &l_259;
            struct S0 l_282 = {-10L,0xA78CF511L,7L,65535UL,1L,0L,0xD05DL};
            unsigned short **l_292 = (void*)0;
            unsigned short ***l_291 = &l_292;
            if (((**l_75) = 0L))
            {
                int *l_273 = &g_5;
                (*l_75) = &l_259;
                g_271 = l_270;
                return l_273;
            }
            else
            {
                const unsigned l_283 = 5UL;
                (*p_51) = func_53(g_96, (func_53((((+((~func_53(p_49, l_274, g_70, (g_73 = (safe_mul_func_uint16_t_u_u((((**g_250) , g_163) ^ (safe_mod_func_int8_t_s_s((-6L), (g_11.f6 && 0x1FF1L)))), l_274))), (*g_251))) , l_279)) , l_280) != g_128), g_140, g_83, l_281, l_282) && (*l_280)), l_283, g_83, l_282);
            }
            g_128 = &g_70;
            (*l_75) = ((safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((*l_258) = p_49), 0x1220F7FBL)) , ((!g_163) ^ ((*l_82) = ((safe_lshift_func_uint8_t_u_u(((p_49 = (l_269.f5 > l_290)) >= (func_53((((void*)0 != l_291) != (~g_11.f6)), (p_52 > 0UL), (*l_76), l_293, (**l_247)) , p_48)), 5)) , g_140)))), (*l_280))) , (*l_75));
            g_128 = p_50;
        }
        else
        {
            char l_298 = 1L;
            unsigned char *l_303 = &g_73;
            unsigned ***l_305 = &g_271;
            (*l_75) = p_51;
            (*l_76) = (safe_mul_func_uint8_t_u_u(((*l_303) = func_53((*l_76), ((*l_303) = ((safe_rshift_func_uint16_t_u_s(((*g_271) == (void*)0), (l_298 || (((*l_261) = p_48) & (safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(g_5, 0xB62CL)), g_11.f5)))))) , 0UL)), l_269.f6, l_304, (**g_250))), g_163));
            (*l_305) = &g_272;
        }
    }
    for (l_253 = 28; (l_253 > 8); l_253 = safe_sub_func_int8_t_s_s(l_253, 5))
    {
        struct S0 ***l_321 = (void*)0;
        for (g_5 = 0; (g_5 != 20); g_5 = safe_add_func_int8_t_s_s(g_5, 4))
        {
            int *l_310 = &l_99;
            int l_322 = (-1L);
            unsigned l_329 = 3UL;
            l_322 = ((g_140 = g_11.f4) || (((*l_310) = (*g_128)) ^ (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(0x52L, ((g_163 && (g_72 & (safe_mul_func_int16_t_s_s(5L, (safe_mul_func_int8_t_s_s(((*p_50) && (l_141.f2 = (&g_250 == l_321))), 9UL)))))) >= p_49))), p_49))));
            (*l_75) = ((*g_128) , p_51);
            (*l_310) = (((void*)0 != g_323) || (safe_add_func_int8_t_s_s((p_49 , ((safe_rshift_func_uint16_t_u_s(((**g_323) > (g_11.f4 > (*l_310))), 0)) < 0xCBF5L)), (p_52 ^ (l_329 ^ g_140)))));
        }
    }
    return p_50;
}







static short func_53(short p_54, unsigned char p_55, const unsigned short p_56, unsigned char p_57, struct S0 p_58)
{
    int *l_68 = &g_5;
    int *l_69 = &g_70;
    int *l_71 = &g_72;
    g_74 = (g_73 = ((*l_71) = ((*l_69) = ((*l_68) = (p_58 , g_11.f3)))));
    return g_5;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    transparent_crc(g_11.f3, "g_11.f3", print_hash_value);
    transparent_crc(g_11.f4, "g_11.f4", print_hash_value);
    transparent_crc(g_11.f5, "g_11.f5", print_hash_value);
    transparent_crc(g_11.f6, "g_11.f6", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_545, "g_545", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_710, "g_710", print_hash_value);
    transparent_crc(g_879, "g_879", print_hash_value);
    transparent_crc(g_939, "g_939", print_hash_value);
    transparent_crc(g_987, "g_987", print_hash_value);
    transparent_crc(g_1030.f0, "g_1030.f0", print_hash_value);
    transparent_crc(g_1030.f1, "g_1030.f1", print_hash_value);
    transparent_crc(g_1030.f2, "g_1030.f2", print_hash_value);
    transparent_crc(g_1030.f3, "g_1030.f3", print_hash_value);
    transparent_crc(g_1030.f4, "g_1030.f4", print_hash_value);
    transparent_crc(g_1030.f5, "g_1030.f5", print_hash_value);
    transparent_crc(g_1030.f6, "g_1030.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
