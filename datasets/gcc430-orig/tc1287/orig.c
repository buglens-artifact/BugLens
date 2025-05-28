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
   char f0;
   unsigned f1;
   int f2;
   char * f3;
   int f4;
};

union U1 {
   unsigned f0;
   const unsigned f1;
   short f2;
   const char f3;
   const char f4;
};


static int g_2 = 7L;
static char g_28 = 1L;
static char *g_27 = &g_28;
static int g_58 = 0x9063446BL;
static int *g_61 = &g_58;
static short g_79 = 0xA6B8L;
static unsigned g_106 = 0x236CF92AL;
static unsigned short g_111 = 65527UL;
static union U0 g_116 = {1L};
static union U1 g_118 = {0xE3256063L};
static short **g_120 = (void*)0;
static unsigned char g_139 = 0x1CL;
static unsigned char *g_138 = &g_139;
static unsigned char **g_137 = &g_138;
static unsigned char *** const g_136 = &g_137;
static union U1 **g_149 = (void*)0;
static unsigned short g_173 = 65535UL;
static union U0 *g_176 = &g_116;
static union U0 **g_175 = &g_176;
static int *g_285 = (void*)0;
static unsigned g_302 = 4294967287UL;
static const unsigned g_334 = 0xFC0F73C5L;
static unsigned char g_338 = 9UL;
static int g_345 = (-6L);
static unsigned *g_356 = &g_106;
static unsigned **g_355 = &g_356;
static unsigned g_366 = 0x5053D333L;
static int g_386 = (-1L);
static int *g_404 = &g_386;
static unsigned *g_415 = (void*)0;
static unsigned char g_462 = 255UL;
static unsigned short g_479 = 0x2C08L;
static const unsigned **g_484 = (void*)0;
static char g_537 = 0x5CL;
static unsigned short *g_556 = &g_173;
static unsigned short **g_555 = &g_556;
static const unsigned g_641 = 0UL;
static char g_644 = 0x08L;
static union U1 g_686 = {4294967289UL};
static union U1 *g_685 = &g_686;
static union U1 *g_742 = (void*)0;
static union U1 g_744 = {0x4B1F3452L};
static const int *g_778 = &g_58;
static union U1 **g_900 = &g_742;
static union U1 ***g_990 = &g_900;



static short func_1(void);
static int func_13(unsigned short p_14, char * p_15);
static unsigned short func_18(char * p_19);
static char * func_20(int p_21, int p_22, char * p_23, union U1 p_24, char p_25);
static union U1 func_29(unsigned p_30, unsigned char p_31);
static unsigned short func_34(char * p_35, union U1 p_36, unsigned short p_37);
static char * func_38(unsigned short p_39, char * p_40, char * p_41, char p_42, unsigned char p_43);
static unsigned short func_44(unsigned p_45, unsigned char p_46);
static int func_47(short p_48, char * p_49);
static short func_50(char * p_51);
static short func_1(void)
{
    char *l_7 = (void*)0;
    int l_26 = (-1L);
    union U0 *l_970 = &g_116;
    int *l_973 = (void*)0;
    int l_980 = 4L;
    int *l_1010 = &g_116.f4;
    if (g_2)
    {
        char *l_8 = (void*)0;
        unsigned *l_406 = (void*)0;
        unsigned *l_407 = (void*)0;
        unsigned *l_408 = &g_302;
        int l_409 = (-6L);
        int l_584 = 0xAEA7D278L;
        union U1 l_666 = {4294967295UL};
        int *l_955 = (void*)0;
        int *l_956 = &g_386;
        unsigned char **l_968 = &g_138;
        if ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((l_7 == l_8) | g_2), 15)) > ((safe_sub_func_int32_t_s_s(g_2, ((safe_add_func_int32_t_s_s(((*l_956) = func_13(((safe_rshift_func_uint16_t_u_s(func_18(func_20(l_26, g_2, g_27, func_29(((safe_add_func_uint16_t_u_u(0x60D6L, func_34(func_38(func_44(((*l_408) = (func_47(func_50(&g_28), l_8) == 0xEF7C797FL)), l_409), g_27, g_27, l_584, l_584), l_666, l_26))) == g_2), g_744.f3), l_26)), g_334)) <= l_26), l_8)), g_744.f4)) | g_744.f4))) && 0L)), l_26)))
        {
            unsigned l_963 = 0x4BD76AC4L;
            char *l_964 = &g_537;
            int l_965 = (-1L);
            int l_972 = 0x4C7D4190L;
lbl_971:
            l_965 = ((((safe_mod_func_int8_t_s_s(((*g_27) = (safe_mul_func_uint8_t_u_u(255UL, l_26))), ((***g_136) = (safe_add_func_uint16_t_u_u(((*l_956) | g_302), l_963))))) < ((*l_964) = ((&g_175 == (void*)0) == 0L))) == l_963) & l_26);
            for (g_744.f0 = 0; (g_744.f0 != 36); g_744.f0 = safe_add_func_int16_t_s_s(g_744.f0, 1))
            {
                unsigned char l_969 = 253UL;
                if ((func_13(((*g_556) = (0xF9L == ((*g_136) != (l_968 = (*g_136))))), l_964) == l_969))
                {
                    (*g_175) = l_970;
                    if (g_173)
                        goto lbl_971;
                }
                else
                {
                    int **l_976 = &g_61;
                    g_778 = &g_386;

                    ;
                    if (l_972)
                    {
                        int **l_974 = &l_955;
                        (*l_956) = (*g_778);
                        (*l_974) = l_973;
                    }
                    else
                    {
                        int **l_975 = &g_285;
                        (*g_175) = (*g_175);
                        (*l_975) = &g_2;

                        ;
                    }


                    (*l_976) = &g_2;

                    ;
                    (*l_976) = &g_2;
                }

                ;


                (*l_956) = 0xB3DD0630L;
                (*g_61) = l_965;
                return g_744.f2;
            }
            l_965 = 2L;
        }
        else
        {
            union U1 l_979 = {4294967292UL};
            short l_981 = 0xDFC1L;
            (*g_61) = ((l_981 != (-6L)) < l_981);
        }


        ;

        ;



        ;

    }
    else
    {
        int l_995 = (-1L);
        char *l_996 = &g_644;
        unsigned *l_997 = &g_366;
        unsigned l_998 = 0x3731FD20L;
        int l_999 = 0x3EBFF527L;
        l_999 = ((func_47(g_641, &g_28) & ((*l_997) = (safe_mod_func_int32_t_s_s((0x5BFA9B45L & ((safe_sub_func_int32_t_s_s((l_26 = ((g_990 = (void*)0) == &g_900)), g_118.f3)) > (((*l_996) = (safe_add_func_int8_t_s_s(0L, (safe_mod_func_int32_t_s_s(((l_995 <= l_995) ^ 0x7697L), 0x45C0C3EFL))))) < l_980))), 0x17C4619EL)))) != l_998);

        ;

        ;
        ;
        for (l_980 = 0; (l_980 != 0); ++l_980)
        {
            (*g_61) = ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((l_999 | 1L), 7)), (*g_356))) || (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_386, (*g_556))), g_302)));
            return g_338;
        }
        return l_999;
    }


    ;

    ;



    ;

    (*l_1010) = ((*g_61) = 0x4DCCCCFEL);

    return g_173;
}







static int func_13(unsigned short p_14, char * p_15)
{
    unsigned l_943 = 0x6C0AD49DL;
    int l_946 = 0xF7AD84D7L;
    const unsigned short *l_948 = &g_111;
    const unsigned short **l_947 = &l_948;
    const unsigned short ***l_949 = &l_947;
    const int *l_951 = (void*)0;
    const int **l_952 = &l_951;
    short *l_954 = &g_744.f2;
    short **l_953 = &l_954;
    l_946 = (((p_14 == (safe_rshift_func_int16_t_s_s(l_943, (g_79 = (p_14 >= (safe_div_func_int32_t_s_s((&g_641 == (void*)0), func_18(p_15)))))))) || (1UL | (*g_356))) || p_14);
    if (l_943)
        goto lbl_950;
lbl_950:
    (*l_949) = l_947;
    (*l_952) = l_951;
    g_120 = l_953;

    ;
    return (*g_61);


}







static unsigned short func_18(char * p_19)
{
    int l_936 = 0x554352FBL;
    int *l_937 = (void*)0;
    int *l_938 = (void*)0;
    int *l_939 = &g_386;
    int **l_940 = &g_61;
    (*l_939) = l_936;
    (*l_940) = &g_58;

    ;
    return (**g_555);
}







static char * func_20(int p_21, int p_22, char * p_23, union U1 p_24, char p_25)
{
    char *l_935 = &g_116.f0;
    p_21 = 0x00288732L;
    return l_935;


}







static union U1 func_29(unsigned p_30, unsigned char p_31)
{
    unsigned char l_931 = 0xC1L;
    int l_932 = 6L;
    unsigned short l_933 = 0xF249L;
    union U1 l_934 = {0x088E6BC8L};
    l_932 = l_931;
    l_933 = l_932;
    return l_934;

    }







static unsigned short func_34(char * p_35, union U1 p_36, unsigned short p_37)
{
    union U0 *l_667 = &g_116;
    const int l_670 = 0xA1F309C8L;
    const int *l_672 = &g_58;
    int l_675 = 1L;
    unsigned **l_693 = &g_356;
    char **l_737 = &g_27;
    unsigned char **l_794 = &g_138;
    const unsigned *l_853 = (void*)0;
    const unsigned **l_852 = &l_853;
    union U1 ***l_861 = (void*)0;
    short l_911 = 1L;
    (*g_175) = l_667;

    ;
    for (g_366 = 0; (g_366 != 21); g_366 = safe_add_func_uint16_t_u_u(g_366, 7))
    {
        int *l_671 = &g_58;
        (*l_671) = l_670;
    }
lbl_736:
    if (l_670)
    {
        int l_673 = 0x271DF8FAL;
        int *l_674 = (void*)0;
        l_672 = &l_670;

        ;
        l_675 = p_36.f4;
        return (**g_555);


    }
    else
    {
        int *l_678 = &g_116.f4;
        (*l_678) = ((*l_672) >= ((*l_672) > ((**g_355) = (**g_355))));

    }

    if (p_36.f1)
    {
        int l_681 = 0x395CC4C9L;
        int l_684 = 0x1DE37787L;
        char *l_695 = &g_28;
        const union U0 *l_715 = &g_116;
        unsigned short **l_722 = &g_556;
        unsigned char ***l_733 = &g_137;
        for (g_479 = (-30); (g_479 <= 11); g_479 = safe_add_func_int32_t_s_s(g_479, 1))
        {
            int *l_682 = &g_386;
            char *l_683 = (void*)0;
            unsigned char **l_745 = &g_138;
            (*l_682) = l_681;
            l_684 = p_36.f2;
            g_685 = &p_36;

            ;
            if ((safe_add_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s(((*g_138) = p_37), 4)) <= 0x4ED1L) > 0xE66BFF48L), (*l_672))))
            {
                unsigned ***l_694 = &g_355;
                int l_712 = 0x5CE660AFL;
                const union U0 *l_717 = &g_116;
                unsigned char ***l_732 = &g_137;
                if ((safe_add_func_int8_t_s_s((-10L), ((*p_35) = ((((*l_694) = l_693) == (void*)0) <= ((*l_682) != (*l_682)))))))
                {
                    char l_706 = 1L;
                    unsigned short *l_707 = &g_111;
                    for (l_684 = 0; (l_684 >= 24); l_684 = safe_add_func_uint8_t_u_u(l_684, 4))
                    {
                        (*g_175) = (*g_175);
                    }
                    if ((safe_rshift_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((**g_555) = (**g_555)), l_684)), 10)), 2)) != l_706) & l_706) != ((*l_707) = 0x0C82L)), 8)))
                    {
                        int l_708 = (-3L);
                        (*l_682) = (((*g_556) & p_36.f3) | l_708);
                        (*l_682) = l_708;
                    }
                    else
                    {
                        int **l_709 = &g_404;
                        (*l_709) = l_682;

                        ;
                        (*l_694) = (void*)0;

                        ;
                        l_675 = ((**l_709) = ((*g_404) || ((*g_356) = 3UL)));
                        return l_706;


                    }
                }
                else
                {
                    const unsigned short *l_725 = (void*)0;
                    const unsigned short **l_724 = &l_725;
                    union U0 *l_735 = &g_116;
                    char ***l_738 = &l_737;
                    if ((((void*)0 == &g_537) | ((((*g_138) = l_712) > (((~p_36.f1) < (*p_35)) & 255UL)) >= ((*g_556) = p_36.f3))))
                    {
                        int **l_713 = (void*)0;
                        int **l_714 = &l_682;
                        const union U0 **l_716 = (void*)0;
                        (*l_714) = &g_2;

                        ;
                        l_717 = l_715;
                    }
                    else
                    {
                        unsigned short ***l_723 = &g_555;
                        int **l_734 = &g_285;
                        (*l_682) = ((g_644 && (((*p_35) < ((*l_695) = ((safe_rshift_func_uint8_t_u_u(((((*l_723) = l_722) == l_724) && ((*g_138) <= (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(l_684, (((safe_lshift_func_uint16_t_u_s(p_36.f4, ((l_733 = l_732) != &g_137))) & (**g_355)) <= l_712))), p_36.f2)))), (*g_138))) < 0x6B88L))) | p_36.f3)) != 0x42C6C796L);
                        (*l_734) = &l_712;

                        ;
                        (*g_175) = l_735;
                        if (p_36.f2)
                            goto lbl_736;

                    }


                    ;
                    (*l_738) = l_737;
                }


                ;
            }
            else
            {
                for (g_345 = 3; (g_345 == (-20)); g_345 = safe_sub_func_int32_t_s_s(g_345, 2))
                {
                    int **l_741 = &g_404;
                    union U1 *l_743 = &g_744;
                    if (p_36.f1)
                        break;
                    (*l_741) = &g_2;

                    ;
                    l_743 = g_742;

                    ;
                }
                (*l_682) = ((void*)0 == l_745);
            }

            ;
        }
    }
    else
    {
        unsigned short l_746 = 5UL;
        int l_747 = 9L;
        int *l_779 = &g_386;
        char *l_799 = &g_644;
        short l_800 = 0x5779L;
        unsigned char l_804 = 0x4FL;
        union U1 ***l_821 = &g_149;
        union U0 *l_892 = &g_116;
        int l_930 = 0x66ED0C47L;
        l_747 = l_746;
        if (((*p_35) & (*g_27)))
        {
            char l_757 = 0x4FL;
            int *l_780 = &g_2;
            unsigned short l_782 = 6UL;
            const unsigned char l_789 = 0x43L;
            int **l_809 = &g_285;
            if ((*l_672))
            {
                int **l_748 = &g_285;
                (*l_748) = &g_386;

                ;
                for (g_462 = 6; (g_462 < 4); g_462--)
                {
                    unsigned char l_775 = 0x9EL;
                    int *l_776 = &l_747;
                    for (g_173 = 18; (g_173 <= 37); g_173++)
                    {
                        unsigned l_771 = 4294967293UL;
                        unsigned char *l_772 = &g_338;
                        (*g_285) = (safe_sub_func_uint32_t_u_u(((*g_356) ^ (safe_lshift_func_uint8_t_u_s(((*l_772) = ((***g_136) = ((l_757 >= (safe_rshift_func_uint16_t_u_u(((-1L) & p_36.f1), (p_37 = 0x9CBDL)))) < (((((safe_unary_minus_func_int32_t_s(p_36.f2)) > ((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((*g_285), p_36.f2)), (((safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(p_36.f3, p_36.f0)) ^ l_746), p_36.f1)), (*p_35))) ^ p_36.f2) || l_771))) > p_36.f4)) ^ (*g_285)) > (*g_285)) <= p_36.f2)))), 4))), (-1L)));
                    }
                    if (p_36.f3)
                        continue;
                    for (g_345 = 0; (g_345 > (-12)); g_345 = safe_sub_func_uint8_t_u_u(g_345, 6))
                    {
                        (**l_748) = l_775;
                        (*g_285) = l_757;
                        (*l_748) = l_776;

                        ;
                        return (*l_672);



                    }
                }
                (*l_748) = &l_675;

                ;
            }
            else
            {
                const int *l_777 = &l_670;
                int **l_781 = &g_61;
                g_778 = l_777;

                ;
                l_779 = &g_58;

                ;
                (*l_781) = l_780;

                ;
                (*l_781) = &l_747;

                ;
            }



            ;
            ;
            if ((!(l_747 = ((*l_779) = (l_782 = p_36.f1)))))
            {
                unsigned char l_788 = 0UL;
                if (p_36.f1)
                {
                    int *l_783 = &g_116.f4;
                    (*l_783) = ((*l_779) = (*l_780));
                }
                else
                {
                    return (*l_672);





                }
                if ((*l_779))
                {
                    unsigned char **l_795 = (void*)0;
                    unsigned short l_797 = 7UL;
                    int *l_801 = &l_675;
                    if (((((**l_737) = ((*p_35) = (*l_779))) >= (*l_780)) && (*g_778)))
                    {
                        unsigned short l_796 = 4UL;
                        int l_798 = 1L;
                        l_798 = (safe_add_func_int8_t_s_s(l_789, (safe_add_func_uint16_t_u_u(((((**g_555) = (safe_add_func_int32_t_s_s((*l_672), (((*g_136) = l_794) == l_795)))) | (~(*l_672))) == l_796), l_797))));
                    }
                    else
                    {
                        (*l_801) = (l_800 <= ((void*)0 != l_801));
                    }
                    (*l_801) = (!(p_36.f0 >= ((safe_mul_func_int8_t_s_s(((*p_35) >= l_804), 0x6FL)) < l_788)));
                }
                else
                {
                    char *l_805 = &l_757;
                    const unsigned ***l_806 = &g_484;
                    l_675 = ((*l_779) | ((void*)0 == l_806));
                }
            }
            else
            {
                int **l_807 = &g_61;
                const int **l_808 = (void*)0;
                (*l_807) = l_780;

                ;
                g_778 = (l_672 = l_780);

                ;
                ;
            }

            ;
            ;
            (*l_809) = &g_58;

            ;
        }
        else
        {
            int **l_810 = &g_285;
            char *l_845 = &g_537;
            unsigned short *l_854 = &l_746;
            unsigned char **l_855 = &g_138;
            unsigned char l_863 = 0xE3L;
            union U0 *l_891 = &g_116;
            short * const l_896 = &g_118.f2;
            short * const *l_895 = &l_896;
            short * const **l_894 = &l_895;
            (*l_810) = &g_386;

            ;
            for (p_36.f2 = 0; (p_36.f2 <= (-26)); p_36.f2 = safe_sub_func_int8_t_s_s(p_36.f2, 8))
            {
                char *l_813 = &g_537;
                int l_817 = 0x25211780L;
                union U1 ***l_820 = &g_149;
            }

                        for (g_686.f0 = 0; (g_686.f0 < 49); ++g_686.f0)
            {
                int *l_838 = &g_58;
                for (g_28 = 16; (g_28 >= 27); g_28++)
                {
                    short l_836 = 0x3C76L;
                    unsigned short **l_837 = &g_556;
                    if (p_36.f2)
                    {
                        return l_836;


                    }
                    else
                    {
                        (**l_810) = p_36.f4;
                        if (p_37)
                            continue;
                    }
                    if ((l_837 != (void*)0))
                    {
                        (*l_810) = &g_386;
                        (*l_810) = (l_779 = l_838);

                        ;
                        ;
                    }
                    else
                    {
                        return (**l_810);


                    }

                    ;
                    ;
                    (*l_810) = &g_386;

                    ;
                    g_404 = &g_58;

                    ;
                }
            }

            ;
            if ((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((p_36.f3 < (((*l_779) = (*l_672)) & ((safe_div_func_uint8_t_u_u(((*g_138) = p_36.f3), g_302)) >= (safe_rshift_func_uint16_t_u_u((+((*l_854) = ((**g_555) = ((l_852 != (void*)0) <= (p_36.f4 > 0x26677C73L))))), p_36.f3))))), 1)), p_36.f3)))
            {
                union U1 *l_856 = &g_686;
                unsigned short l_862 = 2UL;
                int l_867 = 0xEB8171EBL;
                (*g_285) = ((+(*g_27)) ^ (((*g_136) = l_855) != l_794));
                g_742 = l_856;

                ;
                if ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((**g_555) = p_36.f3), (((**g_355) = ((l_861 == (void*)0) >= l_862)) || l_863))), 6)))
                {
                    char ***l_866 = &l_737;
                    int l_880 = 0x340669DEL;
                    for (l_800 = 0; (l_800 <= 4); l_800 = safe_add_func_int32_t_s_s(l_800, 4))
                    {
                        g_778 = (void*)0;

                        ;
                        (*l_810) = &g_2;

                        ;
                        (*l_810) = (*l_810);
                    }

                    ;
                    ;
                    (*l_810) = &l_747;

                    ;
                    l_867 = ((*g_285) = (l_866 != (void*)0));
                    if (((safe_lshift_func_uint16_t_u_s((*l_672), (((**l_810) = ((safe_lshift_func_int16_t_s_u((&g_120 != (void*)0), 13)) > (p_37 <= (((*l_794) != (*g_137)) <= ((*g_285) == (safe_lshift_func_uint8_t_u_s(p_36.f4, 5))))))) > 0x10967B2BL))) || l_880))
                    {
                        unsigned short l_889 = 0xB53CL;
                        (*l_779) = (*l_672);
                        (*g_285) = (safe_sub_func_uint32_t_u_u(((p_37 ^ (((*p_35) ^ (+0L)) <= (l_867 = ((*l_672) > p_37)))) == (~((safe_mul_func_int8_t_s_s((*g_27), (safe_lshift_func_uint16_t_u_s(0UL, 15)))) < 0x23L))), l_889));
                        (*l_810) = (*l_810);
                        (*g_285) = (**l_810);
                    }
                    else
                    {
                        return (*l_672);



                    }
                }
                else
                {
                    int *l_890 = (void*)0;
                    (*l_810) = l_890;

                    ;
                    (*l_821) = (*l_821);
                    (*g_175) = l_891;
                }

                ;
                ;
                (*l_810) = &g_386;

                ;
            }
            else
            {
                union U0 **l_893 = &l_891;
                short * const ***l_897 = &l_894;
                int l_915 = (-1L);
                l_675 = ((*g_285) = ((((*g_175) = l_892) != ((*l_893) = l_892)) || 65535UL));
                if (((((*l_897) = l_894) != &l_895) ^ (*l_779)))
                {
                    unsigned short l_914 = 0x75CDL;
                    for (g_28 = 0; (g_28 < 15); g_28 = safe_add_func_uint32_t_u_u(g_28, 6))
                    {
                        unsigned l_916 = 4294967286UL;
                        (*l_821) = g_900;

                        ;
                        (*l_810) = (void*)0;

                        ;
                        l_916 = ((*l_779) = (safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((*p_35), (((p_37 = 0x1BBCL) < p_36.f4) && (safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((void*)0 == &l_747) || (l_911 = ((***l_894) = 0L))), p_36.f3)), (safe_add_func_int32_t_s_s((l_914 ^ (0x18724CF4L == 0xE0A7AB15L)), (**g_355))))), l_915))))), l_915)));
                    }

                    ;
                    ;
                }
                else
                {
                    int l_927 = 1L;
                    unsigned char *l_928 = &l_804;
                    int *l_929 = &l_747;
                    (**l_810) = (0x5CL || (*g_27));
                }

                ;
                ;
                (*l_779) = p_37;
            }

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

    ;

        ;
    ;
    ;
    return p_36.f3;



}







static char * func_38(unsigned short p_39, char * p_40, char * p_41, char p_42, unsigned char p_43)
{
    int *l_585 = &g_386;
    int **l_586 = &l_585;
    int l_593 = 0xF9CFBFC2L;
    unsigned char **l_594 = &g_138;
    short *l_595 = &g_79;
    (*l_586) = l_585;
    if (((safe_add_func_uint32_t_u_u(0x284B5A01L, (((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(l_593, ((*l_595) = ((l_594 = l_594) == (*g_136))))), 7)) < (safe_div_func_int32_t_s_s(((((p_43 = (((safe_mod_func_int8_t_s_s(((((*g_27) && 0x85L) ^ ((0x52L ^ ((**l_586) > ((*g_556) & (*g_556)))) | (*l_585))) == p_43), (*g_27))) <= (*g_356)) < 0x8E4A41DFL)) ^ (*p_40)) == 248UL) != p_39), (*l_585)))) != 0L))) < (***g_136)))
    {
        char l_602 = 0xC6L;
        (*l_586) = &g_58;

        ;
        for (g_537 = 0; (g_537 != 9); g_537 = safe_add_func_int8_t_s_s(g_537, 7))
        {
            const int l_603 = 0x3B3FDABBL;
            (**l_586) = ((l_602 & (0xD3C109FDL || l_603)) || (((*l_585) & g_386) && g_118.f4));
        }
    }
    else
    {
        const int *l_604 = &g_2;
        char l_617 = 1L;
        int l_619 = 0xFB14A0B1L;
        int l_630 = 0x6C9952BFL;
        union U0 *l_650 = &g_116;
        short *l_652 = &g_79;
        if ((*l_585))
        {
            const int **l_605 = &l_604;
            char *l_616 = &g_537;
            unsigned short *l_618 = &g_479;
            int l_625 = 0x7B5BE34EL;
            union U0 *l_628 = &g_116;
            unsigned short l_637 = 0UL;
            const unsigned *l_638 = (void*)0;
            unsigned *l_662 = &g_366;
            (*l_605) = l_604;
            if ((((*g_138) = (**g_137)) >= ((*g_27) >= ((safe_mod_func_int16_t_s_s(p_43, ((*l_618) = (+((**g_555) && (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((((*g_556) = (((l_617 = ((p_42 != p_39) > ((*l_616) = (safe_mod_func_int16_t_s_s(p_43, ((p_42 ^ (~(**l_605))) || (-1L))))))) != p_42) < g_116.f0)) == p_43), 2)), (*g_27)))))))) > l_619))))
            {
                (*l_585) = (*l_604);
            }
            else
            {
                unsigned short l_620 = 0x57B6L;
                (**l_586) = l_620;
            }
            (**l_586) = (safe_add_func_uint8_t_u_u(((**g_137) = p_39), (((safe_lshift_func_int16_t_s_u((-6L), 15)) == p_43) < p_39)));
            if ((*l_585))
            {
                int *l_629 = &g_2;
                union U0 ***l_647 = &g_175;
                short *l_651 = &g_79;
                short **l_653 = &l_652;
                char *l_654 = &g_644;
                (**l_586) = l_625;
                if (((-10L) | (safe_mul_func_uint8_t_u_u(((*g_138) != (***g_136)), 251UL))))
                {
                    if (((void*)0 != l_628))
                    {
                        g_61 = l_629;

                        ;
                        l_630 = (-4L);
                        (*l_585) = (safe_sub_func_int8_t_s_s((~0L), (*g_27)));
                    }
                    else
                    {
                        return &g_537;


                    }

                    ;
                }
                else
                {
                    const unsigned **l_639 = (void*)0;
                    const unsigned *l_640 = &g_641;
                    int *l_645 = (void*)0;
                    int *l_646 = &g_116.f4;
                    (*l_646) = (((((*g_356) = p_42) && (safe_add_func_int8_t_s_s((((*p_41) ^ ((safe_mod_func_uint32_t_u_u(0x266918ABL, 0x05631D79L)) == p_43)) > l_637), ((l_640 = l_638) == &g_302)))) && ((**l_586) = (((safe_rshift_func_uint16_t_u_u(p_43, 6)) == g_644) || (*l_604)))) || p_42);

                    ;
                    if (((void*)0 != l_647))
                    {
                        (*l_585) = (safe_add_func_uint8_t_u_u((*l_604), (((*l_616) = 0L) > 4UL)));
                        (*l_605) = l_604;
                        (*g_175) = l_650;

                        ;
                        (*l_605) = ((*l_586) = &g_2);

                        ;
                    }
                    else
                    {
                        (*l_605) = ((*l_586) = l_646);

                        ;
                        ;
                    }

                    ;
                    ;
                }

                ;
                ;
                g_116.f4 = ((p_43 >= (l_651 == ((*l_653) = l_652))) < (l_654 != &g_28));

            }
            else
            {
                char **l_659 = (void*)0;
                char **l_660 = &l_616;
                int l_661 = (-1L);
                unsigned *l_663 = (void*)0;
                (*l_605) = l_604;
                (*l_585) = (safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((p_43 <= p_39), ((*l_652) = (l_661 < (*l_585))))) > p_42), p_43));
                (**l_586) = (((*g_355) = (*g_355)) != (l_663 = l_662));

                ;
            }

            ;
            ;
        }
        else
        {
            (*l_585) = (safe_rshift_func_int8_t_s_u((*p_41), 3));
        }

        ;
        ;
    }

    ;
    return &g_644;


}







static unsigned short func_44(unsigned p_45, unsigned char p_46)
{
    int l_412 = 0xC0C42D20L;
    int l_436 = (-1L);
    int l_439 = (-6L);
    int l_449 = 0x96BA76FAL;
    unsigned short *l_502 = &g_479;
    unsigned * const *l_543 = &g_356;
    unsigned char l_563 = 0xC3L;
    int *l_571 = &g_58;
    int **l_580 = &g_404;
    const union U1 *l_581 = &g_118;
    const union U1 **l_582 = &l_581;
    unsigned short l_583 = 1UL;
    if ((safe_mul_func_int8_t_s_s(p_45, l_412)))
    {
        unsigned l_430 = 0x7F4DD995L;
        int l_433 = 7L;
        int *l_438 = &g_116.f4;
        unsigned **l_495 = &g_356;
        int **l_533 = &l_438;
        char *l_564 = &g_537;
        int l_566 = 0x2E020759L;
        if (l_412)
        {
            int *l_413 = (void*)0;
            int **l_414 = &l_413;
            const union U0 **l_418 = (void*)0;
            char l_466 = 0xFCL;
            unsigned short *l_469 = &g_111;
            unsigned short **l_468 = &l_469;
            (*l_414) = l_413;
        }
        else
        {
            const unsigned *l_481 = &g_334;
            const unsigned **l_480 = &l_481;
            const unsigned ***l_482 = (void*)0;
            const unsigned ***l_483 = (void*)0;
            int l_503 = 8L;
            int **l_504 = &g_285;
lbl_511:
            g_484 = l_480;

            ;
            for (g_139 = 19; (g_139 != 2); g_139--)
            {
                unsigned short *l_489 = &g_173;
                const int l_490 = (-8L);
                unsigned **l_493 = &g_356;
                unsigned ***l_494 = &g_355;
                (*l_438) = ((safe_sub_func_uint16_t_u_u(((*l_489) = g_118.f2), (l_490 ^ ((l_503 = (safe_rshift_func_int16_t_s_u((((*l_494) = l_493) == l_495), ((*l_502) = ((safe_lshift_func_uint16_t_u_s(g_302, (safe_sub_func_int8_t_s_s((*g_27), ((!p_45) <= (safe_div_func_uint32_t_u_u(((void*)0 != l_502), p_45))))))) || (*g_356)))))) == (**g_137))))) <= p_45);

                (*g_404) = p_45;
                (*l_438) = 1L;
            }
            (*l_504) = &l_439;

            ;
            for (g_479 = 2; (g_479 < 53); ++g_479)
            {
                for (g_58 = 0; (g_58 == (-9)); g_58 = safe_sub_func_uint8_t_u_u(g_58, 6))
                {
                    for (p_45 = (-30); (p_45 >= 54); p_45 = safe_add_func_uint16_t_u_u(p_45, 3))
                    {
                        unsigned short l_532 = 65535UL;
                        if (g_58)
                            goto lbl_511;
                        l_503 = ((safe_rshift_func_uint16_t_u_u((~(safe_rshift_func_uint16_t_u_u(p_46, (l_449 && ((safe_sub_func_uint32_t_u_u((*g_356), (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((*g_404) && (safe_rshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(p_46, (p_45 ^ p_46))) == (safe_rshift_func_uint8_t_u_s((((*l_438) = (safe_mul_func_int16_t_s_s((l_532 = (((**l_504) = g_118.f4) != ((safe_sub_func_int8_t_s_s(0xB8L, p_45)) && 4L))), l_412))) | 0x650EC15DL), p_45))), 2))), 5)), l_449)))) == (*g_27)))))), 4)) > l_412);
                    }
                    if ((*g_285))
                        break;
                }
            }
        }



        (*l_533) = &g_2;

        ;
        if (p_46)
        {
            int *l_541 = &g_2;
            int l_568 = 0L;
            for (g_302 = 19; (g_302 != 4); g_302 = safe_sub_func_uint16_t_u_u(g_302, 8))
            {
                int *l_536 = &l_433;
                if (l_439)
                    break;
                (*g_404) = p_45;
                (*l_536) = func_47(p_46, &g_28);


            }
            if ((*g_404))
            {
                l_439 = ((g_537 ^ (***g_136)) >= l_436);
                (*l_533) = &g_58;

                ;
            }
            else
            {
                unsigned * const **l_544 = &l_543;
                unsigned short l_547 = 0x809AL;
                int l_548 = 1L;
                for (g_537 = 28; (g_537 <= 7); --g_537)
                {
                    const int l_540 = 0xC145CE3BL;
                    (*g_404) = (l_540 || (**g_355));
                    if (p_45)
                    {
                        return g_118.f2;


                    }
                    else
                    {
                        (*l_533) = l_541;
                        (*g_404) = p_46;
                        (*g_404) = ((void*)0 != &g_175);
                    }
                }
                if (l_436)
                    goto lbl_542;
lbl_542:
                (*g_175) = (void*)0;

                ;
                (*l_544) = l_543;
                l_548 = ((~l_547) < (!(*g_27)));
            }

            ;
            for (l_430 = (-18); (l_430 < 40); l_430 = safe_add_func_int32_t_s_s(l_430, 9))
            {
                unsigned short **l_558 = &g_556;
                unsigned short ***l_557 = &l_558;
                int l_565 = 1L;
                unsigned *l_567 = &g_366;
                l_568 = ((safe_add_func_int16_t_s_s(((-3L) | (((*l_567) = (safe_add_func_int32_t_s_s((l_565 = (((((*l_564) = ((*g_27) = (((g_555 = g_555) == ((*l_557) = &l_502)) > (+(safe_mul_func_uint16_t_u_u(((((**l_543) = (((-1L) <= (*l_541)) <= (safe_sub_func_int16_t_s_s(g_118.f2, (((-1L) || (+(l_449 || func_47(((**g_355) > l_563), l_564)))) && 255UL))))) > (*l_541)) || (**g_137)), p_46)))))) || (*l_541)) ^ g_118.f4) && 65530UL)), l_566))) != 0x886C32A1L)), p_45)) != g_118.f4);

                ;
                for (g_118.f2 = 0; (g_118.f2 < (-8)); g_118.f2--)
                {
                    l_541 = &g_2;
                }

                return l_565;


            }
        }
        else
        {
            return p_46;


        }

        ;
        (*l_533) = (void*)0;

        ;
    }
    else
    {
        l_571 = &g_386;

        ;
        for (g_537 = (-25); (g_537 == 4); g_537 = safe_add_func_uint32_t_u_u(g_537, 2))
        {
            union U1 *l_574 = (void*)0;
            union U1 **l_575 = (void*)0;
            union U1 **l_576 = (void*)0;
            union U1 **l_577 = &l_574;
            (*l_577) = l_574;
        }
    }



    ;
    for (l_563 = (-21); (l_563 > 13); ++l_563)
    {
        (*g_404) = (~p_45);
        (*l_571) = 0x17915873L;
        l_571 = &l_449;

        ;
    }

    ;
    (*l_580) = &l_449;

    ;
    (*l_582) = l_581;
    return l_583;



}







static int func_47(short p_48, char * p_49)
{
    int **l_293 = &g_285;
    unsigned *l_308 = &g_106;
    union U0 **l_364 = (void*)0;
    union U0 *l_372 = (void*)0;
    char *l_376 = &g_28;
    int **l_405 = &g_404;
    (*l_293) = &g_58;

    ;
    if (((**l_293) = (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((**l_293), 11)), (**l_293)))))
    {
        union U1 ***l_313 = &g_149;
        const int l_329 = 0xA48E1810L;
        union U0 **l_363 = (void*)0;
        for (g_139 = (-6); (g_139 < 10); ++g_139)
        {
            union U1 ***l_315 = &g_149;
            int l_321 = 0x3572653DL;
            int l_340 = 0x739EEF94L;
            for (g_28 = 27; (g_28 <= (-28)); --g_28)
            {
                int l_322 = 0x7C50ED04L;
                if (g_302)
                {
                    union U1 ****l_314 = &l_313;
                    union U1 ****l_316 = &l_315;
                    unsigned short *l_319 = &g_111;
                    unsigned short *l_320 = &g_173;
                    (**l_293) = ((safe_mod_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((-1L))), (safe_div_func_uint16_t_u_u(((void*)0 == l_308), p_48)))) ^ (g_118.f2 || ((((*l_320) = ((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((((*l_314) = l_313) == ((*l_316) = l_315)), 8)), (safe_mul_func_uint16_t_u_u(((*l_319) = g_116.f0), p_48)))) && 0xD8L)) != l_321) && l_322)));
                    if ((((**l_293) = l_321) != ((g_118.f1 && (g_173 && g_302)) & g_118.f0)))
                    {
                        unsigned **l_330 = &l_308;
                        const unsigned **l_331 = (void*)0;
                        const unsigned *l_333 = &g_334;
                        const unsigned **l_332 = &l_333;
                        unsigned char *l_337 = &g_338;
                        int l_339 = (-1L);
                        unsigned *l_341 = (void*)0;
                        int l_342 = 0x81D4D931L;
                        int l_343 = 0xF1B845BBL;
                        char *l_344 = &g_116.f0;
                        (*l_315) = g_149;
                        (*l_293) = &l_321;

                        ;
                        (*g_285) = ((safe_sub_func_uint8_t_u_u(255UL, (***g_136))) ^ ((safe_lshift_func_int8_t_s_u((g_345 = ((*l_344) = (((l_342 = (((safe_sub_func_int16_t_s_s((g_118.f2 == (l_321 != l_321)), (((l_329 <= (l_339 = ((((*l_330) = &g_106) == ((*l_332) = (void*)0)) ^ (((!(l_340 = ((safe_mul_func_uint8_t_u_u(((((*l_337) = p_48) >= l_339) >= p_48), (*g_138))) == p_48))) < p_48) && 0xF4L)))) ^ p_48) != 9UL))) == g_79) < (*g_27))) & 0xEE12775CL) >= l_343))), 7)) || 0UL));

                        ;
                        (*g_285) = (safe_lshift_func_uint8_t_u_s((*g_138), (*g_27)));
                    }
                    else
                    {
                        char *l_348 = &g_28;
                        (*g_285) = p_48;
                        (*g_285) = ((void*)0 == l_348);
                    }

                    ;
                    return p_48;


                }
                else
                {
                    if (l_329)
                        break;
                }
            }
            (**l_293) = (!(**l_293));
            if (l_340)
                continue;
        }
        for (g_139 = (-22); (g_139 <= 20); ++g_139)
        {
            unsigned *l_365 = &g_366;
            int l_370 = 0x936EF0B1L;
        }
        (*l_293) = (*l_293);
    }
    else
    {
        char l_373 = 0x81L;
        int *l_392 = &g_386;
        l_373 = p_48;
        if ((safe_add_func_int8_t_s_s(p_48, 1UL)))
        {
            short l_377 = (-4L);
            (**l_293) = p_48;
            (*l_293) = (*l_293);
            (**l_293) = (((*g_356) < (!p_48)) != (((*g_27) < (0x3DB1L && l_377)) == (9L <= 65535UL)));
        }
        else
        {
            for (g_345 = 20; (g_345 > (-4)); g_345--)
            {
                union U0 *l_390 = &g_116;
                int l_391 = 6L;
                unsigned char l_393 = 0x6CL;
                unsigned char *l_399 = &l_393;
                unsigned char **l_398 = &l_399;
                int *l_401 = &l_391;
                for (g_58 = 0; (g_58 != 14); g_58 = safe_add_func_int16_t_s_s(g_58, 5))
                {
                    int *l_384 = &g_116.f4;
                    int *l_385 = &g_386;
                    (*l_385) = ((*l_384) = (safe_add_func_uint32_t_u_u(0x2466D64FL, 0xB17AEFA5L)));

                    (*l_384) = (safe_mul_func_uint8_t_u_u(((**g_137) = (**l_293)), (safe_unary_minus_func_int32_t_s(0x484A4214L))));
                    (*g_175) = (l_390 = (void*)0);

                    ;
                    ;
                    (*l_385) = l_391;
                }

                ;
                (*l_293) = l_392;

                ;
                if (l_393)
                    break;
                if ((safe_rshift_func_int16_t_s_u(l_391, (l_391 || (((**g_136) = (*g_137)) != ((*l_398) = p_49))))))
                {
                    int *l_400 = &g_58;
                    union U1 *l_402 = &g_118;
                    union U1 **l_403 = &l_402;
                    g_61 = ((*l_293) = &g_58);

                    ;
                    ;
                    l_401 = l_400;

                    ;
                    (*g_61) = (-1L);
                    (*l_403) = l_402;
                }
                else
                {
                    (*l_293) = g_404;

                    ;
                }

                ;
                ;
                ;
            }

            ;
        }

        ;
    }

    ;
    (*l_405) = ((*l_293) = &g_58);

    ;
    ;
    return (**l_293);
}







static short func_50(char * p_51)
{
    const int *l_52 = &g_2;
    const int **l_53 = (void*)0;
    const int **l_54 = &l_52;
    int l_150 = 0L;
    short ***l_201 = &g_120;
    unsigned l_276 = 0UL;
    (*l_54) = l_52;
    (*l_54) = &g_2;
    if (((*l_52) > (**l_54)))
    {
        return g_28;
    }
    else
    {
        unsigned l_64 = 0UL;
        unsigned char l_66 = 0UL;
        int l_67 = 0x6BA05392L;
        union U0 *l_113 = (void*)0;
        union U0 *l_115 = &g_116;
        short l_157 = 1L;
        unsigned l_181 = 0xD8DAA76CL;
        short *** const l_202 = &g_120;
        unsigned char l_245 = 0xFEL;
        unsigned l_258 = 0xFB8FAB62L;
        if (g_28)
        {
            unsigned short l_55 = 0UL;
            if (l_55)
            {
                int *l_56 = (void*)0;
                int *l_57 = &g_58;
                (*l_57) = (-3L);
            }
            else
            {
                int *l_60 = &g_58;
                int **l_59 = &l_60;
                g_61 = ((*l_59) = &g_58);
                for (g_58 = 0; (g_58 <= (-25)); g_58 = safe_sub_func_uint8_t_u_u(g_58, 5))
                {
                    if (l_64)
                    {
                        return (**l_54);
                    }
                    else
                    {
                        int *l_65 = &g_2;
                        (*l_54) = l_65;
                    }
                }
                (*g_61) = l_64;
                l_67 = l_66;
            }
        }
        else
        {
            char l_76 = 0x7CL;
            int *l_83 = &l_67;
            int *l_112 = &g_2;
            (*l_54) = &g_58;

            ;
            if (l_64)
            {
                unsigned char *l_77 = &l_66;
                short *l_78 = &g_79;
                short l_90 = 0L;
                int l_95 = 8L;
                if (((g_2 && (&g_61 != (void*)0)) > ((*l_78) = (((g_2 ^ (safe_mul_func_int8_t_s_s(1L, ((*p_51) | (safe_sub_func_uint32_t_u_u(0xE9BDCCB4L, (*g_61))))))) >= ((*l_77) = (safe_add_func_int32_t_s_s((*g_61), l_76)))) > 0x88L))))
                {
                    int *l_80 = &l_67;
                    (*g_61) = (*g_61);
                    (*l_80) = ((*g_61) = (l_66 < (**l_54)));
                    if ((*g_61))
                    {
                        int **l_81 = (void*)0;
                        int **l_82 = &g_61;
                        (*l_54) = ((*l_82) = &g_58);
                        l_83 = &g_2;

                        ;
                    }
                    else
                    {
                        unsigned l_98 = 4294967289UL;
                        unsigned l_99 = 4294967295UL;
                        (*l_80) = (g_79 || 3UL);
                        (*l_83) = (safe_div_func_uint16_t_u_u((g_28 != ((safe_add_func_int32_t_s_s((l_66 ^ ((safe_mul_func_uint8_t_u_u(l_90, (safe_sub_func_int8_t_s_s(l_90, ((safe_mod_func_uint16_t_u_u(0x5908L, g_2)) <= (*p_51)))))) <= (l_95 = 0xA2L))), (safe_sub_func_int16_t_s_s(((*l_78) = l_98), 65526UL)))) > (*g_61))), l_99));
                        (*l_54) = l_80;

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    int l_102 = (-9L);
                    const union U1 *l_117 = &g_118;
                    if (l_64)
                    {
                        unsigned *l_105 = &g_106;
                        unsigned short *l_109 = (void*)0;
                        unsigned short *l_110 = &g_111;
                        (*l_83) = (g_28 == ((safe_mul_func_uint16_t_u_u(l_66, l_102)) < ((safe_add_func_uint16_t_u_u(g_79, (0x3A74F570L | (((((*l_83) == ((((*l_105) = ((**l_54) && ((l_102 >= (*l_83)) > 0x55L))) | (*g_61)) <= l_64)) < (*g_61)) || 0x977603CCL) >= g_28)))) && 0x43L)));
                        (*l_83) = ((safe_mod_func_int16_t_s_s((*l_83), 0x1253L)) < ((*l_110) = 4UL));
                        (*l_54) = &l_102;

                        ;
                        (*l_54) = l_112;

                        ;
                    }
                    else
                    {
                        union U0 **l_114 = &l_113;
                        const union U1 **l_119 = &l_117;
                        l_115 = ((*l_114) = l_113);

                        ;
                        (*l_119) = l_117;
                    }

                    ;
                    ;
                    (*l_54) = &g_2;

                    ;
                    (*l_54) = &l_67;

                    ;
                }

                ;
                ;
                ;
                if ((g_118.f1 == g_118.f0))
                {
                    short ***l_121 = &g_120;
                    (*l_121) = g_120;
                    for (l_76 = 0; (l_76 == 6); l_76++)
                    {
                        (*g_61) = ((*p_51) < g_106);
                        (*g_61) = (*l_112);
                        (*g_61) = ((l_95 = l_66) && (*l_112));
                    }
                    for (l_67 = 0; (l_67 == 27); l_67 = safe_add_func_uint32_t_u_u(l_67, 8))
                    {
                        return l_64;
                    }
                }
                else
                {
                    union U1 **l_126 = (void*)0;
                    union U1 *l_128 = &g_118;
                    union U1 **l_127 = &l_128;
                    unsigned char **l_130 = &l_77;
                    unsigned char ***l_129 = &l_130;
                    (*l_54) = (*l_54);
                    (*l_127) = &g_118;
                    (*l_129) = (void*)0;

                    ;
                    (*g_61) = (*g_61);
                }
                (*l_54) = l_112;

                ;
            }
            else
            {
                (*l_54) = &g_2;

                ;
            }

            ;
            ;
            ;
            for (g_111 = 0; (g_111 < 49); g_111++)
            {
                unsigned short l_151 = 3UL;
                int l_182 = 0x00286ECFL;
                (*g_61) = (-9L);
                for (g_58 = 0; (g_58 <= (-3)); g_58 = safe_sub_func_uint16_t_u_u(g_58, 1))
                {
                    int *l_135 = (void*)0;
                    int l_140 = 0x28475860L;
                    unsigned short l_152 = 65535UL;
                    short *l_155 = &g_79;
                    const unsigned char l_164 = 0x4FL;
                    l_135 = l_135;
                    l_140 = ((void*)0 != g_136);
                    l_152 = ((safe_rshift_func_uint16_t_u_s((&l_76 == (void*)0), (0UL <= ((safe_mul_func_uint8_t_u_u(0UL, (((l_67 = (~(safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((void*)0 == g_149) != (*l_112)), (g_106 < (l_151 = (l_150 = (*g_61)))))), (-1L))))) <= 0L) > 0xD187L))) == l_140)))) <= 65530UL);
                    if ((~(safe_rshift_func_int16_t_s_s((((*l_155) = 0x650DL) && g_28), 10))))
                    {
                        int *l_156 = &l_140;
                        l_150 = ((*l_156) = l_66);
                        (*l_54) = &g_2;
                        (*l_156) = (*l_112);
                    }
                    else
                    {
                        unsigned short *l_169 = &l_152;
                        unsigned short *l_172 = &l_151;
                        int l_174 = 0x596E0544L;
                        const union U1 * const l_184 = &g_118;
                        const union U1 * const *l_183 = &l_184;
                        const union U1 * const **l_185 = &l_183;
                        if ((*g_61))
                            break;
                        l_182 = (l_157 ^ ((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((g_118.f1 ^ l_164), ((*g_27) = ((safe_mul_func_uint16_t_u_u((l_174 = (g_173 = ((*l_172) = (safe_mul_func_uint16_t_u_u(((*l_169) = g_2), (safe_lshift_func_uint16_t_u_u((**l_54), l_64))))))), ((void*)0 != g_175))) & (((***g_136) = (((safe_add_func_uint32_t_u_u(((((*l_155) = (safe_sub_func_int16_t_s_s((l_164 == 65534UL), g_2))) ^ g_106) != 247UL), l_181)) == 3UL) > 0xC31E8507L)) ^ 0xB2L))))), 253UL)) || (*l_83)), g_58)) && g_173));
                        (*l_185) = l_183;
                    }
                }
            }
        }

        ;
        if (((safe_div_func_uint16_t_u_u(g_118.f3, g_2)) && ((void*)0 == &l_67)))
        {
            unsigned short *l_192 = &g_173;
            int l_193 = 0xB3BB4DD1L;
            if ((((*l_52) & (safe_lshift_func_int8_t_s_u((((l_181 < (**l_54)) && (g_28 < ((*l_192) = l_66))) | (l_193 <= l_193)), (g_120 != g_120)))) < 0x0CC1BE0CL))
            {
                (*l_54) = &g_58;

                ;
            }
            else
            {
                int **l_194 = &g_61;
                int *l_195 = &l_150;
                l_195 = ((*l_194) = &l_193);

                ;
                ;
                for (l_64 = 0; (l_64 == 50); l_64 = safe_add_func_uint32_t_u_u(l_64, 8))
                {
                    (*l_195) = (*g_61);
                }
            }

            ;
            ;
        }
        else
        {
            int *l_198 = &l_67;
            union U0 ***l_199 = (void*)0;
            union U0 ***l_200 = &g_175;
            (*l_54) = l_198;

            ;
            (*l_200) = &g_176;
            (*l_198) = ((l_201 = &g_120) != l_202);
        }

        ;

        if (l_66)
        {
            unsigned short *l_207 = &g_111;
            int l_208 = 0L;
            int *l_209 = &g_58;
            (*l_209) = (g_118.f4 & ((safe_add_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((l_67 == ((((*l_207) = g_118.f3) < (l_64 & (g_118.f4 > 1UL))) < g_28)), ((l_208 | (0x03D8L <= g_173)) ^ 0x75L))) <= l_208), (*p_51))) > (*p_51)));
            (*l_209) = (safe_lshift_func_uint8_t_u_u((*l_209), 6));
        }
        else
        {
            short l_212 = 0L;
            int *l_251 = &g_58;
            if (l_212)
            {
                int *l_217 = (void*)0;
                unsigned char l_218 = 0xA8L;
                g_58 = (safe_mod_func_int16_t_s_s((*l_52), (safe_add_func_int16_t_s_s(1L, l_157))));
                if ((l_218 != g_116.f0))
                {
                    char l_234 = (-8L);
                    unsigned l_246 = 0xA2822E89L;
                    (*g_175) = (void*)0;

                    ;
                    for (g_118.f0 = 14; (g_118.f0 < 35); ++g_118.f0)
                    {
                        const short l_221 = 0L;
                        int **l_224 = &l_217;
                        short *l_231 = (void*)0;
                        short *l_232 = &l_157;
                        int *l_233 = &l_67;
                        (*l_233) = (l_221 != (((((*l_224) = &l_150) == &g_2) ^ (!(((***g_136) && 0x4BL) ^ (safe_add_func_uint32_t_u_u(g_79, (safe_mod_func_uint32_t_u_u((*l_52), (safe_rshift_func_uint8_t_u_s((l_212 <= ((*l_232) = g_58)), 7))))))))) ^ l_218));

                        ;
                        l_234 = l_212;
                        return l_212;
                    }
                    for (l_212 = 12; (l_212 >= 1); --l_212)
                    {
                        int *l_247 = &l_67;
                        unsigned l_248 = 0x675B0FBBL;
                        (*l_247) = (safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(4294967293UL, l_157)), (l_245 = (safe_mul_func_uint16_t_u_u(((void*)0 == p_51), g_111))))), l_246));
                        return l_248;
                    }
                    (*l_54) = &g_58;

                    ;
                }
                else
                {
                    short *l_250 = &l_157;
                    short **l_249 = &l_250;
                    int l_265 = 0L;
                    (*l_202) = l_249;

                    ;
                    (*l_54) = l_251;

                    ;
                    (*l_251) = (safe_div_func_int16_t_s_s(((l_66 >= ((safe_mod_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(l_258, ((**g_120) >= (**g_120)))) == ((*g_138) = 0x76L)) ^ ((*l_251) <= (((+(safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((**g_120), l_265)), (safe_rshift_func_uint16_t_u_u((g_2 ^ g_173), l_258)))), g_28))) | 255UL) != g_116.f0))), (**g_120))) & l_64)) | 0xB79DC5B5L), l_66));
                    return l_265;


                }

                ;
                ;
                (*l_54) = &g_58;
            }
            else
            {
                int *l_268 = &l_67;
                union U1 *** const l_273 = &g_149;
                union U1 ***l_275 = (void*)0;
                union U1 ****l_274 = &l_275;
                int l_281 = 0L;
                (*g_175) = (*g_175);
                (*l_54) = l_268;

                ;
                if (((safe_add_func_int8_t_s_s(((*p_51) = ((~(((l_273 != ((*l_274) = &g_149)) != l_157) || ((l_276 <= 0xA815E18FL) < (0UL < (safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s((*l_268), ((g_2 ^ ((*l_52) & (*p_51))) > (*l_52)))) || (*l_251)), 6)))))) > (*l_268))), (*l_268))) & 0UL))
                {
                    return l_281;
                }
                else
                {
                    short *l_289 = &g_118.f2;
                    for (l_281 = 15; (l_281 != (-21)); --l_281)
                    {
                        int **l_284 = &g_61;
                        unsigned short *l_286 = &g_111;
                        int l_290 = 0xB05E1E16L;
                        g_285 = ((*l_284) = l_251);

                        ;
                        ;
                        (*g_61) = (((*l_286) = (**l_284)) == (safe_rshift_func_int16_t_s_s(((*l_268) = ((*g_27) ^ (l_67 < (&g_79 != l_289)))), 4)));
                        (*l_268) = (l_290 = ((*l_251) = (*l_268)));
                        (*g_175) = (*g_175);
                    }

                    ;
                }

                ;
                ;
                for (g_118.f0 = (-16); (g_118.f0 != 30); g_118.f0 = safe_add_func_int16_t_s_s(g_118.f0, 1))
                {
                    (*l_54) = (*l_54);
                }
            }

            ;
            ;
            ;
            g_58 = (*l_251);
        }

        ;
        ;
    }



    ;
    ;
    return g_2;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_116.f0, "g_116.f0", print_hash_value);
    transparent_crc(g_118.f2, "g_118.f2", print_hash_value);
    transparent_crc(g_118.f3, "g_118.f3", print_hash_value);
    transparent_crc(g_118.f4, "g_118.f4", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_686.f0, "g_686.f0", print_hash_value);
    transparent_crc(g_686.f1, "g_686.f1", print_hash_value);
    transparent_crc(g_686.f2, "g_686.f2", print_hash_value);
    transparent_crc(g_686.f3, "g_686.f3", print_hash_value);
    transparent_crc(g_686.f4, "g_686.f4", print_hash_value);
    transparent_crc(g_744.f0, "g_744.f0", print_hash_value);
    transparent_crc(g_744.f1, "g_744.f1", print_hash_value);
    transparent_crc(g_744.f2, "g_744.f2", print_hash_value);
    transparent_crc(g_744.f3, "g_744.f3", print_hash_value);
    transparent_crc(g_744.f4, "g_744.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
