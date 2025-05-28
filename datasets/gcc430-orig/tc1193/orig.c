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
};


static int g_22 = 0x64B5C6F8L;
static short g_50 = (-3L);
static int g_56 = 1L;
static int g_60 = 0xCA3396D5L;
static int *g_59 = &g_60;
static union U0 g_62 = {0x97L};
static union U0 *g_61 = &g_62;
static int g_85 = 0x38BE40E8L;
static int g_92 = 0x47FD326DL;
static int g_93 = (-1L);
static char g_96 = 6L;
static unsigned char g_116 = 0UL;
static int g_121 = 0x5FA60710L;
static unsigned g_142 = 0x8F0ABFABL;
static const unsigned short g_151 = 0x626FL;
static const unsigned short *g_150 = &g_151;
static int **g_165 = &g_59;
static int g_171 = 1L;
static int * const g_170 = &g_171;
static int * const *g_169 = &g_170;
static unsigned char g_216 = 1UL;
static int g_225 = (-1L);
static int *g_253 = &g_121;
static int g_255 = 0L;
static char *g_276 = &g_62.f0;
static const int *g_284 = (void*)0;
static const int **g_283 = &g_284;
static unsigned **g_398 = (void*)0;
static unsigned ***g_397 = &g_398;
static unsigned char g_432 = 0xB0L;
static unsigned short g_439 = 0x6A8AL;
static int g_445 = 0L;
static int *g_444 = &g_445;



static short func_1(void);
static int * func_2(char p_3, const int * p_4, int * p_5, int * p_6, int * p_7);
static const int * func_9(short p_10);
static int ** func_11(union U0 p_12, union U0 p_13, char p_14);
static union U0 func_15(int ** p_16, char p_17, char p_18, short p_19);
static const char func_23(int p_24, int ** p_25, unsigned short p_26, int ** p_27, short p_28);
static int ** func_29(short p_30, char p_31, char p_32, short p_33);
static char func_34(int * p_35, int * p_36, int * p_37, int * p_38);
static int * func_39(int * p_40);
static int * func_41(int ** p_42, int p_43, int * p_44);
static short func_1(void)
{
    int l_8 = 0xA9D19AC1L;
    int **l_461 = (void*)0;
    int **l_462 = (void*)0;
    int **l_463 = &g_444;
    (*l_463) = func_2(l_8, func_9(l_8), &l_8, g_444, &l_8);



    ;

    ;
    ;
    (*g_170) = (*g_170);
    (*g_444) = ((*g_170) = (**g_169));
    (*g_283) = (*l_463);

    ;
    return g_171;



}







static int * func_2(char p_3, const int * p_4, int * p_5, int * p_6, int * p_7)
{
    unsigned l_446 = 0UL;
    int l_447 = 0x4DA238A6L;
    int *l_454 = &g_85;
    l_447 = l_446;
    (*l_454) = ((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_446, (safe_lshift_func_uint8_t_u_u(l_447, 4)))), ((!(func_34(l_454, &l_447, p_5, &l_447) || (*p_7))) < (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(p_3, (*g_150))) | 1L), p_3)), (*p_5)))))) & 0xAD1B602BL);

    ;
    (*g_170) = (-1L);
    return p_5;



}







static const int * func_9(short p_10)
{
    int *l_21 = &g_22;
    int **l_20 = &l_21;
    int **l_45 = &l_21;
    unsigned short *l_48 = (void*)0;
    unsigned short *l_49 = (void*)0;
    int *l_55 = &g_56;
    union U0 l_226 = {5L};
    char l_227 = 0xBCL;
    int ***l_443 = (void*)0;
    l_20 = func_11(func_15(l_20, g_22, (func_23(p_10, func_29(p_10, func_34(((*l_45) = func_39(func_41(l_45, ((*l_55) = (safe_rshift_func_uint8_t_u_u(((!(g_50 = g_22)) ^ (**l_45)), (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(p_10, (g_22 <= g_22))) | g_22), (*l_21)))))), &g_22))), &g_22, &g_22, &g_22), g_92, p_10), p_10, g_165, g_171) ^ p_10), g_22), l_226, l_227);

    ;
    ;


    ;


    (*g_283) = (*l_45);

    ;
    return (*g_283);


}







static int ** func_11(union U0 p_12, union U0 p_13, char p_14)
{
    const int *l_230 = (void*)0;
    int l_236 = 0L;
    int **l_238 = (void*)0;
    char *l_351 = (void*)0;
    char * const l_354 = &g_96;
    int **l_401 = &g_59;
    int l_425 = 0x23C0CD5BL;
    (**g_169) = (*g_59);
lbl_400:
    for (g_171 = 0; (g_171 < (-12)); g_171 = safe_sub_func_uint8_t_u_u(g_171, 3))
    {
        const int **l_231 = &l_230;
        int l_239 = (-2L);
        union U0 **l_241 = (void*)0;
        union U0 **l_242 = &g_61;
        unsigned *l_243 = &g_142;
        short *l_244 = &g_50;
        char *l_247 = &g_62.f0;
        const unsigned short l_254 = 65533UL;
        (*l_231) = l_230;
        for (g_93 = 0; (g_93 != 0); ++g_93)
        {
            int *l_240 = &g_85;
            (**g_165) = (**g_165);
            for (g_50 = 0; (g_50 < (-9)); g_50 = safe_sub_func_int16_t_s_s(g_50, 8))
            {
                int **l_237 = &g_59;
                l_236 = p_13.f0;
                return l_237;


            }
            (*g_165) = func_41(l_238, l_239, l_240);

            ;
        }
        (*l_242) = &g_62;
    }
    if (p_12.f0)
    {
        char ** const l_260 = (void*)0;
        short l_265 = (-10L);
        int *l_266 = &g_121;
        int * const **l_304 = (void*)0;
        short l_315 = 0xB371L;
        if (((p_13.f0 != (l_260 == (void*)0)) < (-5L)))
        {
            unsigned *l_262 = &g_142;
            unsigned **l_261 = &l_262;
            unsigned ***l_263 = &l_261;
            int *l_264 = &g_60;
            (*l_263) = l_261;
            (*l_266) = ((((l_262 != (l_264 = (void*)0)) ^ g_216) ^ (((l_265 > (func_34(func_39(&l_236), (*g_165), l_266, l_266) < (*g_150))) & p_14) <= g_216)) == g_50);

            ;
            ;
            return l_238;


        }
        else
        {
            int **l_281 = &l_266;
            int l_327 = 0xFDC2CA2CL;
            int **l_334 = &g_59;
            unsigned *l_335 = &g_142;
            unsigned char *l_345 = &g_116;
            short *l_346 = &l_265;
            if (p_12.f0)
            {
                int *l_267 = &g_171;
                int **l_297 = &g_59;
                (*g_165) = func_39((l_266 = l_267));

                ;
                ;
                for (p_14 = 0; (p_14 == (-13)); p_14 = safe_sub_func_int32_t_s_s(p_14, 4))
                {
                    int **l_279 = (void*)0;
                    (*g_165) = (void*)0;

                    ;
                    for (g_96 = (-16); (g_96 <= 1); ++g_96)
                    {
                        char **l_274 = (void*)0;
                        char **l_275 = (void*)0;
                        char *l_278 = &g_62.f0;
                        char **l_277 = &l_278;
                        int l_280 = (-5L);
                        int ***l_282 = &g_165;
                        const int ***l_285 = &g_283;
                        (*g_253) = ((*l_267) = (safe_sub_func_int8_t_s_s((g_62.f0 = (((g_276 = &p_14) == ((*l_277) = &g_96)) == (0x8CC2L >= func_23(g_116, &l_266, (*g_150), l_279, l_280)))), l_280)));

                        ;
                        ;
                        (*l_281) = func_41(l_281, (((*l_282) = &l_266) == ((*l_285) = g_283)), (*l_281));

                        ;
                        ;
                        ;
                        (*g_170) = ((*l_266) = ((0x88CC22B0L <= (0UL & (((***l_282) != 1L) != (p_12.f0 & 9UL)))) | func_23(((**l_281) ^ 0x3889B654L), l_238, (*l_266), &l_267, (*l_266))));
                        return &g_59;




                    }
                }

                ;
                if (p_14)
                {
                    char *l_291 = &g_96;
                    const int l_293 = 7L;
                    for (g_92 = 13; (g_92 > (-22)); g_92 = safe_sub_func_uint16_t_u_u(g_92, 1))
                    {
                        char **l_292 = &l_291;
                        int **l_294 = &g_253;
                        (*l_266) = (safe_unary_minus_func_int16_t_s((safe_mod_func_int8_t_s_s((&p_14 == ((*l_292) = l_291)), (g_116 = 0x80L)))));
                        (*l_267) = l_293;
                        (*l_294) = (*g_169);

                        ;
                        (*g_283) = &l_293;

                        ;
                    }

                    ;
                    ;
                    for (g_22 = 21; (g_22 >= 8); --g_22)
                    {
                        if (p_13.f0)
                            break;
                    }
                    return l_297;



                }
                else
                {
                    short l_300 = 0xC4DBL;
                    (*g_165) = (*l_281);

                    ;
                    l_300 = (safe_rshift_func_int16_t_s_u(g_62.f0, 4));
                    for (g_116 = 0; (g_116 < 19); ++g_116)
                    {
                        if ((**g_169))
                            break;
                    }
                    return &g_59;


                }
            }
            else
            {
                int * const **l_303 = (void*)0;
                int **l_305 = &g_253;
                short l_322 = (-10L);
                const int *l_333 = &g_171;
                if ((&l_238 != (l_304 = l_303)))
                {
                    unsigned char *l_310 = &g_116;
                    unsigned char **l_311 = (void*)0;
                    unsigned char *l_313 = (void*)0;
                    unsigned char **l_312 = &l_313;
                    unsigned l_314 = 0x02F3114DL;
                    int **l_316 = &g_59;
                    (**l_305) = func_23(p_12.f0, l_305, ((((*g_150) == (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((l_310 == ((*l_312) = l_310)), 2)), 5))) != (*g_276)) >= func_23(l_314, &l_266, p_12.f0, &g_59, l_315)), l_316, p_12.f0);

                    ;
                }
                else
                {
                    int l_317 = 1L;
                    char *l_323 = &g_62.f0;
                    char **l_324 = &g_276;
                    l_317 = ((l_317 > ((+(0x6FE3L && p_12.f0)) < (safe_mod_func_uint16_t_u_u(p_14, 9L)))) == ((*l_266) = ((5UL || g_93) ^ (*g_150))));
                    (*g_170) = ((*l_266) = ((+(safe_mod_func_int8_t_s_s((**l_305), l_322))) < (((*l_324) = l_323) == (void*)0)));
                    (*g_170) = (**l_281);
                    (**g_165) = (p_13.f0 > 0xF43D2F35L);
                }
                (**l_281) = ((**g_169) = (p_12.f0 <= ((((safe_sub_func_int32_t_s_s((l_327 <= p_13.f0), ((*g_150) ^ (**l_305)))) | (*g_276)) < p_14) & p_12.f0)));
                for (p_12.f0 = 0; (p_12.f0 <= (-18)); --p_12.f0)
                {
                    union U0 *l_332 = &g_62;
                    for (g_142 = (-30); (g_142 < 25); g_142 = safe_add_func_uint32_t_u_u(g_142, 5))
                    {
                        (*l_281) = (*g_165);

                        ;
                    }
                    if ((**g_169))
                    {
                        (**g_165) = p_12.f0;
                        (**g_169) = p_12.f0;
                    }
                    else
                    {
                        if (p_12.f0)
                            break;
                    }
                    (*l_266) = (l_332 == &p_12);
                    (*g_283) = l_333;

                    ;
                }

                ;
                ;
            }

            ;
            ;
            (*l_334) = func_41(l_334, func_23((((*l_335) = (**l_281)) | ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((*l_346) = ((safe_mod_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((*g_150))) || (-1L)), p_12.f0)) == ((((*l_345) = (**l_334)) != g_225) & (g_225 > 0x0DL)))), (*g_150))), 0x9B02L)) ^ p_12.f0)), &l_266, (*g_150), l_238, p_14), (*g_165));

            ;
        }

        ;
        ;
        ;
        (**g_165) = p_13.f0;
        for (g_22 = 0; (g_22 > 16); ++g_22)
        {
            char **l_352 = (void*)0;
            char **l_353 = &g_276;
            int l_364 = 0L;
            int l_365 = 0L;
            (**g_165) = (1L & ((((*l_353) = l_351) == l_354) > (!((1L & (safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(g_93, p_13.f0)) >= (func_23(((p_14 <= ((l_364 = l_364) & l_365)) || g_56), &l_266, p_12.f0, &l_266, p_13.f0) >= g_22)), p_13.f0)), (*l_266))), (*g_150)))))) ^ g_50))));

            ;
        }

        ;
    }
    else
    {
        int *l_394 = &l_236;
        int l_399 = 2L;
        union U0 **l_402 = &g_61;
        unsigned short *l_438 = &g_439;
        unsigned short **l_437 = &l_438;
        unsigned short ***l_440 = &l_437;
        short *l_441 = (void*)0;
        short *l_442 = &g_50;
        for (g_50 = 0; (g_50 == 27); ++g_50)
        {
            int *l_391 = &l_236;
            char l_426 = 0xFAL;
            for (g_142 = (-10); (g_142 >= 60); g_142++)
            {
                unsigned short l_388 = 0x6048L;
                for (g_121 = 13; (g_121 >= 2); --g_121)
                {
                    (**g_165) = (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((*g_276), (g_56 >= (0x520DL <= (safe_mul_func_uint8_t_u_u((p_12.f0 ^ g_116), (safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(p_14, 0xD7E99EABL)), (safe_add_func_uint32_t_u_u(0x72FC482BL, g_171)))))))))) <= 0x4A042813L), 1UL)), l_388));
                }
                (**g_169) = (safe_add_func_uint8_t_u_u((((*g_276) & p_14) < p_14), 9UL));
                (*g_283) = func_39(l_391);

                ;
            }
            if (((*g_170) = ((((safe_lshift_func_uint16_t_u_u((~func_23(func_34(l_391, &l_236, l_394, l_391), l_238, func_23(p_13.f0, func_29((safe_mod_func_uint32_t_u_u((~(g_397 != (void*)0)), (-1L))), g_142, p_14, g_85), (*g_150), &l_391, g_92), &l_394, g_255)), 4)) == g_92) & l_399) <= g_56)))
            {
                (*g_165) = func_41(&l_391, p_13.f0, (*g_165));

                ;
                if (g_142)
                    goto lbl_400;
                (*g_165) = func_41(l_401, p_12.f0, l_391);
            }
            else
            {
                union U0 ***l_403 = &l_402;
                int *l_408 = &g_22;
                (*l_403) = l_402;
                if ((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((func_34((*g_165), l_408, l_391, (*g_165)) ^ p_13.f0), 0x9D1E22A3L)), g_225)))
                {
                    const char *l_410 = &g_96;
                    const char **l_409 = &l_410;
                    const char ***l_411 = &l_409;
                    (*l_411) = l_409;
                    for (l_399 = 0; (l_399 <= (-20)); l_399 = safe_sub_func_uint32_t_u_u(l_399, 9))
                    {
                        (*g_283) = ((*g_165) = (void*)0);

                        ;
                        ;
                    }

                    ;
                }
                else
                {
                    unsigned short l_414 = 0x4678L;
                    (**g_165) = (l_414 = (-3L));
                    return &g_253;



                }

                ;
            }

            ;
            for (g_92 = 4; (g_92 < 4); ++g_92)
            {
                unsigned l_419 = 4294967295UL;
                int l_436 = 0xFCAE45B1L;
                (*g_165) = &l_399;

                ;
                (*g_165) = (*g_165);
                for (g_60 = 11; (g_60 <= (-30)); --g_60)
                {
                }
                if (p_14)
                    break;
            }

            ;
            return &g_253;



        }
        (*l_440) = l_437;
        (*l_401) = func_41(func_29(g_151, (*g_276), (*g_276), g_151), g_171, ((*l_401) = func_41(l_401, g_116, (*l_401))));

        ;
        (*g_170) = (func_23((*l_394), &g_253, ((*l_438) = (*g_150)), l_238, ((*l_442) = (*l_394))) <= (*l_394));
    }

    ;
    ;
    ;
    return &g_253;


}







static union U0 func_15(int ** p_16, char p_17, char p_18, short p_19)
{
    unsigned *l_224 = &g_142;
    (*p_16) = func_41(&g_59, (safe_sub_func_uint16_t_u_u(0x979CL, ((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((g_225 = ((*l_224) = p_19)) == (*g_170)), (*g_150))), 1UL)) >= p_17))), l_224);


    return (*g_61);

    }







static const char func_23(int p_24, int ** p_25, unsigned short p_26, int ** p_27, short p_28)
{
    int *l_213 = &g_85;
    int l_217 = 0x74BF3BD9L;
    (**g_169) = (safe_mul_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((1UL <= (safe_lshift_func_int16_t_s_s(p_26, g_56))), (*l_213))) <= 6L), p_26));
    (*g_170) = (p_24 > (safe_mod_func_uint16_t_u_u(((g_216 = (g_142 = p_24)) ^ l_217), g_92)));
    (*g_170) = (*l_213);
    return g_216;
}







static int ** func_29(short p_30, char p_31, char p_32, short p_33)
{
    int **l_122 = &g_59;
    int ***l_123 = &l_122;
    unsigned char l_126 = 0x08L;
    union U0 **l_185 = &g_61;
    int *l_195 = &g_22;
    int l_203 = 1L;
    (*l_123) = l_122;
    for (g_96 = (-28); (g_96 != 12); g_96 = safe_add_func_uint32_t_u_u(g_96, 8))
    {
        int l_138 = 0x66050866L;
        int l_154 = 0xFEFA8C4DL;
        int **l_164 = &g_59;
        short l_174 = (-4L);
        unsigned l_196 = 0xABC806B1L;
    }
    return &g_59;


}







static char func_34(int * p_35, int * p_36, int * p_37, int * p_38)
{
    int **l_103 = &g_59;
    int *l_104 = &g_60;
    (*l_103) = (void*)0;

    ;
    (*l_103) = l_104;

    ;
    for (g_62.f0 = 0; (g_62.f0 >= 2); g_62.f0 = safe_add_func_int32_t_s_s(g_62.f0, 2))
    {
        int l_107 = (-1L);
        unsigned char *l_114 = (void*)0;
        unsigned char *l_115 = &g_116;
        (*l_103) = p_38;
        (*p_35) = (l_107 == (g_121 = ((safe_mul_func_uint8_t_u_u(l_107, (0x73L != (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((*l_104), 2)) ^ (**l_103)), (g_56 | ((*l_115) = (0xABL != l_107)))))))) <= ((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0xA96A4AF1L, g_85)), l_107)) > 65529UL))));
    }


    return g_93;
}







static int * func_39(int * p_40)
{
    unsigned l_68 = 1UL;
    int *l_98 = &g_93;
    if (((void*)0 != &g_56))
    {
        short l_94 = 0x16D7L;
        int l_97 = 8L;
        for (g_60 = (-21); (g_60 <= 27); g_60 = safe_add_func_uint8_t_u_u(g_60, 6))
        {
            char *l_69 = &g_62.f0;
            int l_70 = 0xF8000858L;
            int *l_83 = (void*)0;
            int *l_84 = &g_85;
            char *l_95 = &g_96;
            l_70 = (safe_lshift_func_int8_t_s_s(g_50, ((*l_69) = l_68)));
            l_97 = (safe_rshift_func_int8_t_s_s(l_68, ((*l_95) = ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((*p_40), l_70)), ((0xD5L | ((*l_69) = (((g_93 = ((safe_sub_func_uint32_t_u_u(g_50, ((*l_84) = (*g_59)))) ^ (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_62.f0, ((safe_mod_func_uint8_t_u_u(l_68, g_92)) ^ l_68))), g_50)))) < 0x7FL) || g_85))) || l_94))) <= g_50), l_94)), 250UL)) && 0xF6L))));
        }
        (*p_40) = (*p_40);
        l_98 = p_40;


    }
    else
    {
        unsigned l_101 = 0x5D6068D1L;
        unsigned *l_102 = &l_101;
        (*p_40) = (safe_lshift_func_int8_t_s_u((((*l_98) = (~(l_101 && ((*l_102) = 0x9C6C2CF3L)))) > (g_60 < 0x40L)), 3));
    }


    return &g_93;


}







static int * func_41(int ** p_42, int p_43, int * p_44)
{
    for (p_43 = (-5); (p_43 == 20); p_43++)
    {
        union U0 **l_63 = &g_61;
        g_59 = &g_22;

        ;
        (*l_63) = g_61;
    }
    return &g_60;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
