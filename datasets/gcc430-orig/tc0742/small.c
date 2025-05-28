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



static int g_11 = 0x0F8067E3L;
static int *g_10 = &g_11;
static int **g_20 = &g_10;
static int *** volatile g_19 = &g_20;
static int g_45 = 0xB5C4CE10L;
static int * volatile g_44 = &g_45;
static int *g_51 = &g_11;
static int ** volatile g_50 = &g_51;
static int * volatile g_53 = &g_45;
static short g_54 = 0x7D69L;
static int g_133 = (-1L);
static volatile unsigned char g_180 = 0xF7L;
static const char g_208 = 0xD4L;
static int ** volatile g_215 = &g_51;
static int * volatile g_236 = (void*)0;
static int * volatile g_248 = &g_45;
static unsigned g_291 = 0UL;
static int ** volatile g_294 = &g_51;
static char g_301 = 1L;
static int ** volatile g_307 = &g_51;
static int ** volatile g_311 = &g_51;
static int *g_314 = &g_11;
static int ** const volatile g_318 = &g_314;



static int func_1(void);
static int * func_2(int * p_3, int * p_4);
static int * func_5(int * p_6, int * p_7, int * p_8, int * p_9);
static int * func_12(const unsigned p_13);
static int func_15(int * p_16);
static int * func_17(unsigned char p_18);
static int * func_23(const char p_24, short p_25, int p_26);
static unsigned short func_28(char p_29, char p_30);
static char func_31(int *** p_32);
static int *** func_33(const int p_34, int ** p_35, int p_36);
static int func_1(void)
{
    const int l_14 = 0x85A1FA14L;
    (*g_318) = func_2(func_5(g_10, func_12(l_14), g_10, g_10), g_314);

    ;
    ;
    ;
    (*g_294) = (*g_311);
    return l_14;
}







static int * func_2(int * p_3, int * p_4)
{
    short l_317 = 0xD351L;
    (*g_314) = (safe_mod_func_int8_t_s_s(g_291, l_317));
    (**g_19) = (*g_311);

    ;
    return (**g_19);


}







static int * func_5(int * p_6, int * p_7, int * p_8, int * p_9)
{
    int **l_312 = &g_10;
    int ***l_313 = &g_20;
    (*g_20) = (*g_20);
    (*g_20) = (void*)0;

    ;
    (*l_313) = l_312;
    return g_314;


}







static int * func_12(const unsigned p_13)
{
    unsigned char l_305 = 0x3FL;
    int *l_306 = &g_45;
    (*g_10) = (0x57L ^ ((func_15(func_17(g_11)) >= (g_10 == (void*)0)) && ((safe_add_func_uint16_t_u_u(l_305, (func_31(&g_20) | p_13))) >= 1UL)));

    ;
    (*g_307) = l_306;

    ;
    for (l_305 = 7; (l_305 <= 23); l_305++)
    {
        int **l_310 = &g_51;
        (*l_310) = l_306;
    }
    (*g_311) = (*g_307);
    return l_306;


}







static int func_15(int * p_16)
{
    unsigned char l_283 = 0x7BL;
    const int *l_300 = (void*)0;
    int l_302 = 0x4947FFBDL;
    if ((0x60BFL || (safe_sub_func_uint16_t_u_u(((l_283 > ((*g_19) == &p_16)) >= l_283), g_208))))
    {
        int **l_284 = (void*)0;
        (*g_215) = p_16;

        ;
    }
    else
    {
        for (l_283 = 0; (l_283 >= 53); l_283++)
        {
            (**g_20) = (g_133 | 0xAD5C0386L);
            for (g_133 = (-19); (g_133 <= (-12)); ++g_133)
            {
                int **l_293 = &g_51;
                for (g_11 = 0; (g_11 < 28); g_11++)
                {
                    if (((void*)0 != &g_20))
                    {
                        return g_291;
                    }
                    else
                    {
                        int **l_292 = &g_51;
                        (*l_292) = (*g_50);
                        (*l_292) = (*g_20);

                        ;
                        (*l_292) = (**g_19);
                    }

                    ;
                }
                if ((*g_44))
                    break;
                (*l_293) = (*g_50);
                (*g_50) = (void*)0;

                ;
            }
        }
    }
    (*g_294) = (**g_19);

    ;
    l_302 = ((safe_add_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(0x14L)) <= (0x3127CEA8L != (**g_294))), (((l_283 <= l_283) <= (l_300 == (void*)0)) || 0x2E1FL))) == (*g_51)) | l_283), g_45)) < g_301);
    return (*g_248);
}







static int * func_17(unsigned char p_18)
{
    int ***l_62 = &g_20;
    int *l_91 = &g_11;
    unsigned char l_223 = 0xD2L;
    int l_230 = 2L;
    const int * const **l_267 = (void*)0;
    int ***l_277 = &g_20;
    (*g_19) = &g_10;
    (*g_10) = (**g_20);
    for (p_18 = 0; (p_18 == 4); ++p_18)
    {
        const unsigned l_27 = 1UL;
        int **l_42 = &g_10;
        int **l_61 = &g_51;
        (*l_61) = func_23(l_27, (g_11 > (p_18 < p_18)), ((func_28(func_31(func_33(((0x6D0F065FL < p_18) || (l_27 >= ((safe_mod_func_uint32_t_u_u((l_27 & (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u(g_11)), p_18))), (***g_19))) < (-1L)))), l_42, (**g_20))), (**l_42)) == p_18) == g_11));

        ;
        if ((***g_19))
        {
            int **l_63 = &g_51;
            (**l_63) = ((l_62 != (void*)0) || ((void*)0 == l_63));
        }
        else
        {
            int *l_64 = (void*)0;
            return l_64;


        }
        (*l_61) = (*l_61);
    }

    ;
    if (p_18)
    {
        int **l_65 = &g_51;
        (*l_65) = (void*)0;

        ;
        if ((*g_44))
        {
            int **l_66 = &g_51;
            if ((((func_31(func_33((***l_62), l_66, (((void*)0 != &g_50) | (func_31(&l_66) || (**l_66))))) ^ g_54) || 0xF0CDL) >= g_11))
            {
                if ((safe_mul_func_uint16_t_u_u(g_45, ((**l_65) == (**l_65)))))
                {
                    (**g_50) = ((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(p_18, 4)) >= (**l_66)), (*g_44))) <= g_54);
                    (**l_66) = 0x156DE04BL;
                    (*g_10) = p_18;
                }
                else
                {
                    char l_78 = 0x06L;
                    int l_90 = (-2L);
                    int **l_98 = &l_91;
                    (*g_10) = (p_18 && p_18);
                    for (g_54 = 20; (g_54 <= (-6)); g_54--)
                    {
                        int **l_75 = &g_10;
                        short l_89 = 0x33C7L;
                        (*l_62) = l_75;
                        (*g_10) = 1L;
                        l_90 = (safe_sub_func_uint32_t_u_u((((func_28((l_78 < p_18), func_31(&g_20)) ^ (func_28((+(***l_62)), (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((!(safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(0x8D19L, (safe_sub_func_uint32_t_u_u(g_11, p_18)))), 4))), 0)), 0x6FA5B362L))) <= g_11)) != 0x57L) <= l_89), (***l_62)));

                        ;
                        (*l_65) = func_23(g_54, g_11, (***l_62));

                        ;
                    }

                    ;
                    l_91 = (*l_65);

                    ;
                    if ((((func_31(func_33(((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((p_18 && (**l_65)), ((*g_19) != (void*)0))), (safe_sub_func_uint16_t_u_u(p_18, ((0xE7287D28L > ((void*)0 != l_98)) ^ (p_18 == 0xF8CBCAB5L)))))) < (-1L)), (*l_62), (*g_51))) || 0xF9L) < (-1L)) || 0xCD71D57AL))
                    {
                        (*l_65) = (*l_65);
                        (*l_62) = (*l_62);
                    }
                    else
                    {
                        (***l_62) = (***l_62);
                        (*l_65) = func_23((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s(1L)), (p_18 <= g_54))), p_18, func_28(p_18, p_18));

                        ;
                        (**l_65) = 0L;
                    }
                }

                ;
                ;
            }
            else
            {
                (*l_65) = (*l_65);
                (*l_65) = (*l_66);
                (*l_65) = (*g_20);
            }

            ;
            ;
        }
        else
        {
            return (**l_62);


        }

        ;
        ;
        (**g_20) = 0xA7F8EC64L;
    }
    else
    {
        int ***l_102 = &g_20;
        char l_249 = 0x17L;
        int *l_250 = &g_11;
        const unsigned char l_254 = 0x54L;
        int l_269 = 0xC7098EABL;
        if ((l_102 != &g_50))
        {
            int l_120 = (-1L);
            int **l_126 = &g_10;
            int *l_141 = &g_45;
            if (func_31(&g_20))
            {
                unsigned l_103 = 0xCEA6EDC4L;
                int **l_121 = &g_51;
                (*l_121) = func_23(((l_103 <= (safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((***g_19), (safe_mod_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(0xC8546551L, func_28(((safe_sub_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(p_18, p_18)) == (***l_102)), (safe_rshift_func_uint16_t_u_u(func_28(l_120, p_18), l_103)))) <= 0xE9L), g_45))) != l_120) ^ 65526UL), 0x12L)))), p_18)), 1UL))) < (**g_20)), p_18, g_54);

                ;
                for (p_18 = 0; (p_18 > 19); p_18 = safe_add_func_int16_t_s_s(p_18, 6))
                {
                    (**g_20) = (g_45 != p_18);
                    (**g_20) = ((*l_91) < (((*l_102) == l_126) >= (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(p_18, g_11)), 0x180BL))));
                }
                if ((func_28((((safe_rshift_func_uint16_t_u_u((g_45 != p_18), 4)) < func_28(g_133, (((safe_unary_minus_func_uint32_t_u((**l_121))) > (***l_62)) == (safe_add_func_int32_t_s_s((l_102 != &g_50), ((***l_62) != g_11)))))) >= p_18), (***l_62)) > 251UL))
                {
                    char l_139 = 0L;
                    int *l_140 = &g_45;
                    for (p_18 = 9; (p_18 >= 23); p_18++)
                    {
                        l_140 = func_23(g_133, l_139, p_18);
                        l_141 = (*l_126);

                        ;
                        (*g_51) = (safe_rshift_func_uint16_t_u_s(g_45, 5));
                    }

                    ;
                    ;
                }
                else
                {
                    short l_154 = 0x4C9CL;
                    int l_157 = 0x815EE981L;
                    unsigned l_181 = 0x84222E9DL;
                    if ((safe_add_func_uint32_t_u_u(g_45, 0xE128E9C8L)))
                    {
                        (**l_121) = (*g_51);
                    }
                    else
                    {
                        char l_150 = 0xA3L;
                        int ***l_151 = &g_20;
                        (*g_10) = (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(p_18, p_18)), ((1L && (func_28(l_150, p_18) <= (l_102 == l_151))) | 0xAE46L)));
                        (**g_20) = func_28(((p_18 == ((void*)0 != &l_141)) | ((p_18 == ((((safe_add_func_int32_t_s_s((g_133 ^ (*g_51)), (l_62 == &g_20))) <= g_54) >= g_133) >= (-1L))) == (***l_102))), l_154);
                        (*g_10) = ((*g_53) >= (-1L));
                        return (**g_19);


                    }
                    if ((safe_sub_func_int32_t_s_s((**g_50), (l_62 != &g_20))))
                    {
                        (*l_121) = func_23(g_11, (!0xA1AEL), p_18);
                        l_157 = (*g_10);
                        (**l_126) = ((*l_141) == (safe_add_func_uint32_t_u_u((g_133 >= (safe_rshift_func_int8_t_s_u((g_11 || (g_54 ^ (-1L))), g_54))), (safe_mod_func_int8_t_s_s((func_28((safe_add_func_uint8_t_u_u(g_133, g_11)), g_11) || 0x9C8FL), g_11)))));
                    }
                    else
                    {
                        (**l_126) = (func_28(((safe_rshift_func_int16_t_s_u((g_45 & ((**l_121) == (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((p_18 != ((safe_lshift_func_uint8_t_u_u(func_28((((p_18 != (p_18 ^ (g_133 > (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(g_180, func_28(g_54, func_28((**l_126), g_133)))), 6)), (*g_10)))))) != l_181) <= 0xFFL), g_45), p_18)) & 0xAA34L)), l_154)), p_18)))), 13)) >= 0xA497F643L), g_11) && g_133);
                    }
                    (*l_141) = (safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u((((*g_53) >= 0x93169C20L) | (*l_91)), ((0x34017EA3L || ((void*)0 == &l_157)) & (***l_102)))) < ((!g_133) || (safe_unary_minus_func_uint32_t_u(p_18)))), 12));
                }

                ;
                ;
                if ((safe_add_func_uint16_t_u_u(1UL, (func_31(&l_126) && g_180))))
                {
                    for (g_54 = 15; (g_54 <= 16); g_54++)
                    {
                        int *l_193 = (void*)0;
                        (*l_121) = l_193;

                        ;
                        (*g_53) = (*g_10);
                        (**g_20) = ((&l_121 == &g_50) & ((safe_lshift_func_int8_t_s_s(5L, p_18)) < 0xF7L));
                        (**g_20) = (func_28(p_18, ((safe_lshift_func_int16_t_s_u(func_28((p_18 <= 0L), (p_18 <= (*g_53))), g_11)) != (g_54 != p_18))) && 1L);
                    }

                    ;
                    for (g_11 = 0; (g_11 < 4); g_11++)
                    {
                        if (p_18)
                            break;
                    }
                    for (l_120 = 0; (l_120 >= (-17)); l_120--)
                    {
                        (*g_53) = ((void*)0 != l_62);
                        if ((*g_10))
                            break;
                        (*l_91) = (safe_sub_func_uint16_t_u_u(g_11, (0x62L > g_11)));
                        (**l_126) = ((void*)0 == (*g_19));
                    }
                }
                else
                {
                    (*g_44) = 0x75AC6F22L;
                    (*l_62) = (*g_19);
                    (*l_121) = func_23(g_54, g_11, g_45);

                    ;
                    if (((void*)0 != (**g_19)))
                    {
                        (*l_121) = (*l_126);

                        ;
                        (*l_121) = (*g_20);
                    }
                    else
                    {
                        (*l_121) = (void*)0;

                        ;
                    }

                    ;
                }

                ;
            }
            else
            {
                int **l_204 = &g_51;
                (*l_204) = (**l_62);
                (*l_204) = (*l_126);
            }

            ;
            ;
            if ((safe_add_func_int16_t_s_s(0x18C4L, ((**l_126) <= (4294967295UL > (*g_53))))))
            {
                int **l_207 = &l_141;
                (*g_10) = func_28(p_18, (***l_102));
                (*l_207) = (void*)0;

                ;
                (**l_126) = (func_31(func_33(g_208, (*l_102), ((safe_unary_minus_func_int16_t_s(p_18)) < ((void*)0 != (**l_102))))) && (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((g_54 < 1L) || 0x90L))), 5)));

                ;
            }
            else
            {
                int *** const l_219 = &l_126;
                for (g_133 = 0; (g_133 < 8); g_133 = safe_add_func_int16_t_s_s(g_133, 8))
                {
                    unsigned short l_216 = 0UL;
                    if (func_31(l_62))
                    {
                        (*g_215) = (**l_102);
                        return (*g_50);


                    }
                    else
                    {
                        (**l_126) = (((g_133 < (*l_141)) ^ 1UL) != l_216);
                        l_91 = (*l_126);
                        if ((*g_51))
                            break;
                    }

                    ;
                    (***l_102) = (**g_50);
                    (*l_141) = (+l_216);
                }
                (*l_62) = (*g_19);
                for (g_11 = 0; (g_11 != 26); ++g_11)
                {
                    int *l_222 = (void*)0;
                    if (((((void*)0 == l_219) > (~(safe_sub_func_int32_t_s_s((l_222 == (**l_62)), l_223)))) == (safe_mod_func_uint16_t_u_u((*l_91), 0xE3EAL))))
                    {
                        const unsigned short l_235 = 0x4E60L;
                        int *l_237 = &l_230;
                        l_230 = ((*g_44) < (safe_rshift_func_int8_t_s_u((g_45 & p_18), ((safe_add_func_int8_t_s_s((*l_141), ((*l_91) & g_45))) == g_208))));
                        (*g_50) = (**l_219);

                        ;
                        (*l_237) = (((func_28((((0L && 0xBA4A270CL) > (((255UL & (!p_18)) || (safe_rshift_func_int16_t_s_s((*l_141), ((safe_lshift_func_int16_t_s_u(l_235, 10)) != ((g_11 >= g_133) ^ p_18))))) & 0x83C70057L)) && g_54), (**l_126)) <= 8UL) <= (-5L)) >= p_18);
                        (*l_237) = (((void*)0 == (**l_219)) & ((((((~(safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0xEAL, 0x4FL)), g_133))) ^ ((**l_126) > 0x8380ACD6L)) != (func_28(((safe_lshift_func_uint16_t_u_u(((**l_126) >= ((***l_219) & 4294967295UL)), 12)) | (***l_102)), p_18) > p_18)) || g_54) > 65535UL) != 0xE400L));
                    }
                    else
                    {
                        int **l_251 = &l_250;
                        (*g_53) = (((safe_rshift_func_uint16_t_u_u(0UL, 1)) | p_18) < (***l_62));
                        (*g_248) = ((**l_126) && (safe_mod_func_uint8_t_u_u(((p_18 || g_54) & (***l_219)), 254UL)));
                        l_249 = func_28((*l_141), g_208);
                        (*l_251) = l_250;
                    }
                }
                for (l_230 = (-23); (l_230 < 22); ++l_230)
                {
                    const unsigned l_255 = 1UL;
                    const int *l_261 = &g_45;
                    if (((void*)0 != (**g_19)))
                    {
                        unsigned char l_258 = 250UL;
                        (***l_62) = (l_254 & ((l_255 ^ p_18) == ((p_18 != (safe_lshift_func_uint8_t_u_u((p_18 >= g_133), 1))) | l_258)));
                    }
                    else
                    {
                        (*l_91) = (p_18 | g_11);
                    }
                    (*l_91) = (p_18 | ((void*)0 == &g_50));
                    (*g_44) = (p_18 ^ (safe_rshift_func_uint8_t_u_u(p_18, (l_261 != (*g_50)))));
                }
            }

            ;
            for (l_223 = 0; (l_223 != 58); l_223 = safe_add_func_int8_t_s_s(l_223, 1))
            {
                const int *l_265 = &g_45;
                const int **l_264 = &l_265;
                char l_266 = 0xC5L;
                if ((*g_53))
                    break;
                (*l_264) = (*l_264);
                if (((&l_126 != l_267) > (p_18 && p_18)))
                {
                    if (func_31(&g_20))
                    {
                        int *l_268 = &l_230;
                        return (*g_50);


                    }
                    else
                    {
                        (*g_10) = 0xC117ADE7L;
                        if ((*g_51))
                            break;
                        if ((*g_248))
                            break;
                    }

                    ;
                    if (l_269)
                        continue;
                    (*g_10) = 1L;
                    (*l_91) = ((p_18 && (func_31(&l_126) && func_31(&g_20))) && g_45);
                }
                else
                {
                    (*l_250) = func_28(g_133, p_18);
                    if ((*l_265))
                    {
                        return (**l_102);


                    }
                    else
                    {
                        int l_272 = 0xE5032B20L;
                        (***l_102) = ((safe_sub_func_uint8_t_u_u(((*l_250) > (*g_248)), l_272)) & func_28(p_18, g_54));
                        (*l_264) = (*g_50);

                        ;
                    }

                    ;
                }

                ;
            }
            if ((***l_102))
            {
                (*l_91) = (g_54 > g_45);
                (***l_277) = (safe_sub_func_uint16_t_u_u(g_54, (safe_sub_func_int32_t_s_s((l_277 == l_102), g_208))));
                return (*g_50);


            }
            else
            {
                return (*g_20);


            }
        }
        else
        {
            int ***l_278 = &g_20;
            l_91 = func_23(p_18, (0xBAB8L | (l_102 == l_278)), p_18);

            ;
        }

        ;
        l_250 = (**l_102);
        (**g_20) = (func_28(g_54, (func_31(l_102) <= func_28(((func_28((safe_rshift_func_uint8_t_u_s(((***l_102) != (*l_250)), p_18)), p_18) & func_28((*l_250), p_18)) == g_54), g_54))) ^ 0x45DCL);

        ;
        (***l_102) = ((*l_250) > p_18);
    }

    ;
    return (**l_277);


}







static int * func_23(const char p_24, short p_25, int p_26)
{
    int *l_60 = &g_45;
    (*g_10) = (***g_19);
    (**g_20) = 6L;
    for (p_26 = 2; (p_26 == 28); p_26 = safe_add_func_uint8_t_u_u(p_26, 9))
    {
        int **l_59 = &g_51;
        (*g_51) = p_25;
        (*l_59) = (**g_19);

        ;
    }
    return l_60;


}







static unsigned short func_28(char p_29, char p_30)
{
    int * const l_55 = &g_45;
    int *l_56 = (void*)0;
    l_56 = l_55;

    ;
    return g_11;
}







static char func_31(int *** p_32)
{
    int **l_52 = &g_51;
    (*l_52) = (**g_19);

    ;
    (*g_53) = (**l_52);
    return g_54;
}







static int *** func_33(const int p_34, int ** p_35, int p_36)
{
    unsigned char l_43 = 255UL;
    int **l_49 = (void*)0;
    (*g_44) = (l_43 > (**p_35));
    for (p_36 = (-24); (p_36 <= 29); p_36++)
    {
        int ***l_48 = &g_20;
        return l_48;


    }
    (*g_50) = (**g_19);

    ;
    return &g_20;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
