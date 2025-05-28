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



static unsigned g_24 = 4294967294UL;
static int g_43 = 0x1B07FB07L;
static char g_45 = 0L;
static int g_47 = (-2L);
static int *g_46 = &g_47;
static char *g_58 = &g_45;
static char **g_57 = &g_58;
static short g_62 = 0L;
static const int **g_96 = (void*)0;
static const int g_100 = 7L;
static unsigned char g_105 = 251UL;
static unsigned char g_108 = 255UL;
static int g_136 = 0L;
static unsigned g_148 = 0x53FA0D08L;
static volatile int g_173 = 0x4CF1313BL;
static short g_177 = 0xB2D4L;
static unsigned short g_182 = 0xD93EL;
static unsigned char **g_207 = (void*)0;
static const short *g_224 = &g_177;
static const short **g_223 = &g_224;
static unsigned g_239 = 4294967288UL;
static unsigned g_290 = 3UL;
static const int g_435 = 0x1EBF98C9L;
static const int *g_434 = &g_435;
static short **g_465 = (void*)0;
static short ***g_464 = &g_465;
static int *g_469 = (void*)0;



static unsigned char func_1(void);
static unsigned func_2(const unsigned p_3, short p_4);
static unsigned func_5(unsigned short p_6, unsigned char p_7, const short p_8);
static unsigned short func_9(unsigned char p_10);
static const int * func_12(int * p_13, int * p_14, const unsigned char p_15, short p_16);
static int * func_17(int p_18);
static int func_19(unsigned short p_20, unsigned short p_21, int * p_22, int * p_23);
static const unsigned func_36(char p_37, int * p_38);
static char func_39(unsigned char p_40);
static int * func_48(unsigned short p_49, unsigned short p_50);
static unsigned char func_1(void)
{
    unsigned char l_11 = 8UL;
    unsigned short *l_159 = (void*)0;
    int l_160 = 7L;
    unsigned short *l_181 = &g_182;
    const int *l_212 = &g_47;
    unsigned l_218 = 0x17840552L;
    unsigned short *l_284 = (void*)0;
    unsigned l_315 = 1UL;
    unsigned l_324 = 4294967286UL;
    int l_333 = (-1L);
    unsigned l_390 = 0xED616F42L;
    int ** const l_421 = &g_46;
    char l_441 = (-8L);
    unsigned l_532 = 0xD400788CL;
    short l_555 = 3L;
    if ((func_2(func_5((l_160 = func_9(l_11)), l_11, g_105), (((safe_sub_func_int32_t_s_s((l_11 | ((*l_181) = (l_11 && (+(l_11 < l_11))))), g_105)) && g_24) > (-1L))) < g_136))
    {
        unsigned char l_196 = 0xADL;
        int *l_197 = (void*)0;
        int *l_198 = &g_43;
        unsigned l_203 = 0xAA36D6AEL;
        char *l_252 = (void*)0;
        int *l_257 = &l_160;
        unsigned l_314 = 6UL;
        unsigned char *l_326 = &l_11;
        unsigned char ** const l_325 = &l_326;
        unsigned l_365 = 0x88687C02L;
        int *l_389 = &g_47;
        const unsigned short l_398 = 0x9A29L;
        short *l_406 = &g_177;
        short **l_405 = &l_406;
        unsigned char *l_408 = &l_196;
        char *l_414 = &g_45;
        (*l_198) = (l_196 | l_196);
        if ((&g_182 != &g_182))
        {
            int *l_211 = &g_136;
            unsigned l_219 = 0xD67FE130L;
            unsigned short *l_265 = &g_182;
            const short l_274 = 0x51E4L;
            int l_312 = 1L;
            unsigned l_359 = 3UL;
            if ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(g_45, func_39((*l_198)))), ((l_203 = (g_24 & g_173)) && g_177))))
            {
                unsigned l_204 = 0xAA54D713L;
                int l_238 = 1L;
                if (func_39(l_204))
                {
                    return g_105;
                }
                else
                {
                    int *l_209 = &g_47;
                    int **l_210 = &l_197;
                    for (g_148 = 17; (g_148 > 44); g_148++)
                    {
                        unsigned char ***l_208 = &g_207;
                        (*l_208) = g_207;
                    }
                    g_46 = l_209;

                    ;
                    (*l_210) = &l_160;

                    ;
                }

                ;
                ;
                l_212 = func_12(&g_136, l_211, g_108, g_148);

                ;
                if ((*g_46))
                {
                    short l_217 = 1L;
                    unsigned *l_220 = (void*)0;
                    unsigned *l_221 = (void*)0;
                    unsigned *l_222 = &g_148;
                    unsigned char l_228 = 0xEEL;
                    int l_233 = 0xE5FD258EL;
                    if ((safe_sub_func_int8_t_s_s(((*g_58) = ((*l_198) == ((*g_58) > ((safe_sub_func_uint16_t_u_u(1UL, (l_204 < (l_217 ^ 0x0BAFL)))) > l_218)))), (((*l_222) = ((((l_219 < l_217) | 0L) | g_43) < (*l_212))) != 0xB2C63165L))))
                    {
                        const short ***l_225 = &g_223;
                        (*l_225) = g_223;
                    }
                    else
                    {
                        int **l_232 = (void*)0;
                        int ***l_231 = &l_232;
                        (*l_198) = (*l_198);
                        (*l_211) = ((safe_lshift_func_uint16_t_u_s(0x00D0L, 2)) != func_19((l_228 | ((*l_198) = (safe_add_func_uint32_t_u_u((l_233 = (&g_96 != l_231)), l_204)))), g_173, &g_47, &g_136));

                        ;
                    }

                    ;
                }
                else
                {
                    (*l_197) = func_39((*l_212));
                }

                ;
                if ((~(+(*l_198))))
                {
                    (*g_46) = func_39((safe_mod_func_uint32_t_u_u((*l_212), (-1L))));
                    (*l_211) = ((l_160 = (func_9((l_238 = (safe_lshift_func_uint8_t_u_u(func_2((*l_198), (**g_223)), 2)))) ^ (g_239 <= l_204))) & l_204);

                    ;
                    (*l_211) = ((*l_211) > (*l_211));
                    for (l_219 = 0; (l_219 <= 29); l_219++)
                    {
                        short l_244 = 0x9AF5L;
                        unsigned *l_249 = &g_148;
                        (*l_198) = (safe_lshift_func_uint8_t_u_s((l_244 && g_173), (safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((*g_46), ((*l_211) = ((*l_211) == (g_182 ^ ((*l_249) = (*l_212))))))), (4UL == (safe_mod_func_uint16_t_u_u((((void*)0 != l_252) != (*g_58)), l_244)))))));
                    }
                }
                else
                {
                    unsigned l_255 = 0x745251B9L;
                    const char l_258 = 0xF4L;
                    int *l_270 = &g_47;
                    int **l_271 = &l_257;
                    for (g_136 = 0; (g_136 == 9); g_136++)
                    {
                        int **l_256 = &g_46;
                        const int *l_266 = &g_43;
                        (*l_198) = (*l_197);
                        (*g_46) = l_255;
                        (*l_256) = &l_160;

                        ;
                        l_266 = func_12(l_257, &g_136, l_258, ((**l_256) > ((safe_lshift_func_uint16_t_u_u(0x0AB6L, (0x5CD5D447L != (safe_rshift_func_uint16_t_u_u(func_39(((safe_rshift_func_uint8_t_u_u((l_204 != ((void*)0 != l_265)), 5)) | (*l_257))), 9))))) <= (**g_223))));

                        ;
                    }

                    ;
                    for (g_62 = 4; (g_62 != (-30)); --g_62)
                    {
                        int **l_269 = &l_211;
                        (*l_269) = (l_198 = l_211);

                        ;
                        (*l_211) = (*g_46);
                        l_211 = l_211;
                        (*l_197) = (-4L);
                    }

                    ;
                    (*l_271) = l_270;

                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                int *l_275 = &l_160;
                int **l_276 = (void*)0;
                int **l_277 = &l_198;
                const unsigned short *l_285 = &g_182;
                int *l_360 = (void*)0;
                unsigned short l_373 = 65535UL;
                if (func_19((*l_212), (*l_212), func_48((safe_add_func_uint8_t_u_u(l_274, 0x61L)), g_173), ((*l_277) = l_275)))
                {
                    short *l_286 = &g_177;
                    int l_289 = 2L;
                    (**l_277) = (((((*l_286) = (safe_mul_func_uint16_t_u_u((func_19((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(((*l_265) = (((*l_211) != g_43) || (l_284 != l_285))), (0x90L != (g_239 < ((*l_286) = (-8L)))))), 0)), ((*g_46) != ((safe_sub_func_int16_t_s_s(l_289, g_148)) > (*l_212))), l_197, &g_47) > l_289), (*l_211)))) | g_100) < (*l_211)) >= g_290);
                    return (*l_212);
                }
                else
                {
                    unsigned short l_303 = 0UL;
                    int *l_313 = &g_47;
                    const int **l_316 = &l_212;
                    int ***l_317 = &l_276;
                    unsigned short l_356 = 65535UL;
                    const short l_388 = 0L;
                    (*l_316) = func_12(func_48((safe_sub_func_uint16_t_u_u(65535UL, (safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(func_36((safe_lshift_func_uint16_t_u_u(func_19(l_303, ((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((*g_224), func_39((safe_sub_func_int16_t_s_s(0xC561L, g_239))))), g_177)) >= (safe_sub_func_int8_t_s_s(l_312, 1L))), &g_47, l_313), (*l_275))), &g_47), (*g_58))), (**g_223))), (*l_257))), l_314)))), l_315), &l_312, (*l_211), (*l_275));

                    ;
                    (*l_317) = &g_46;

                    ;
                    if ((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u((g_62 = ((*l_313) != (safe_lshift_func_uint16_t_u_u(65535UL, (*l_211))))), 1)) != ((*l_275) = l_324)), ((*l_313) == ((l_325 != &l_326) < ((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(func_19(g_45, g_108, &g_47, &g_136), g_177)) && (*g_46)), (*l_211))) || 0x57L))))))
                    {
                        (**l_317) = &g_43;
                    }
                    else
                    {
                        l_333 = (safe_mul_func_uint16_t_u_u((*l_212), (*l_212)));
                        (*l_276) = &l_312;

                        ;
                        (*l_257) = 0xA87C478BL;
                        (*l_313) = 0xC7A937C5L;
                    }

                    ;
                    if ((*g_46))
                    {
                        int **l_355 = &l_211;
                        unsigned *l_357 = (void*)0;
                        unsigned *l_358 = &l_315;
                        unsigned char *l_361 = &l_196;
                        short *l_366 = (void*)0;
                        short *l_367 = &g_62;
                        short *l_368 = &g_177;
                        (**l_276) = ((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((**l_316), (safe_mul_func_uint8_t_u_u((+0x5DL), (safe_sub_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((*l_257) = ((((*l_326) = func_2(g_45, (safe_add_func_uint8_t_u_u(((**l_325) = (((safe_unary_minus_func_uint16_t_u((**l_277))) & (((*l_358) = (safe_sub_func_int32_t_s_s((**l_277), (safe_mul_func_uint16_t_u_u(g_136, (safe_mul_func_uint16_t_u_u(((((((l_356 = (l_355 != (void*)0)) && (**l_355)) != g_62) || (*l_198)) ^ 1UL) && (*g_224)), (*l_212)))))))) < 7UL)) && (*g_58))), 0x35L)))) >= 0L) > 0xBEL)), l_359)) & (***l_317)), (*g_58))))))), 0L)), 65535UL)) || 4L);
                        (*l_316) = func_12(l_360, l_197, ((*l_361) = g_43), ((*l_275) = (safe_unary_minus_func_int16_t_s((((*l_358) = (**l_355)) != func_2(g_45, ((*l_367) = (~(safe_lshift_func_int16_t_s_u((func_2((((*l_368) = ((*l_367) = l_365)) || (*l_212)), (*l_275)) != (**l_277)), 0))))))))));

                        ;
                        (*g_46) = (*g_46);
                        (**l_317) = l_389;

                        ;
                    }
                    else
                    {
                        (*l_276) = func_48((*l_212), g_62);

                        ;
                        return (*l_212);
                    }

                    ;
                    ;
                }

                ;
                ;
                ;
                ;
                (**l_276) = (*l_211);
            }

            ;
            ;
            ;
            ;
            ;
            return l_390;


        }
        else
        {
            unsigned l_399 = 0x78FC21ABL;
            short **l_407 = &l_406;
            for (g_47 = 0; (g_47 < (-16)); g_47 = safe_sub_func_uint32_t_u_u(g_47, 7))
            {
                for (l_218 = 0; (l_218 == 44); l_218 = safe_add_func_uint32_t_u_u(l_218, 9))
                {
                    int **l_395 = &l_197;
                    (*l_395) = &l_160;

                    ;
                }
            }

            ;
            for (g_108 = 0; (g_108 >= 31); g_108 = safe_add_func_uint32_t_u_u(g_108, 1))
            {
                short *l_403 = &g_177;
                short **l_402 = &l_403;
                short ***l_404 = &l_402;
                char **l_409 = (void*)0;
                char **l_410 = (void*)0;
                char **l_411 = (void*)0;
                char **l_412 = &l_252;
                char **l_413 = &g_58;
                int l_415 = 0x7A94F726L;
                int **l_417 = &l_257;
                int ***l_416 = &l_417;
                (*l_198) = (*l_198);
                l_415 = (*l_212);
                if (l_415)
                    continue;
                (*l_416) = &g_46;

                ;
            }
        }

        ;
        return (*l_198);
    }
    else
    {
        unsigned short l_427 = 0x3000L;
        int l_428 = 0xAF31EC19L;
        unsigned l_432 = 2UL;
        const int *l_433 = (void*)0;
        int l_455 = 2L;
        short *l_526 = &g_177;
        if (g_100)
        {
            unsigned l_418 = 0UL;
            unsigned char *l_429 = &l_11;
            int l_436 = 0xC27CB549L;
            l_428 = ((l_418 ^ ((safe_rshift_func_int8_t_s_u(4L, func_2((g_24 = (*l_212)), (g_136 && ((void*)0 != l_421))))) < g_239)) || ((safe_sub_func_uint32_t_u_u(g_100, g_62)) & g_43));
            l_428 = l_428;
            l_436 = ((((((*l_429) = l_418) ^ (*g_58)) && (65526UL ^ (safe_sub_func_uint16_t_u_u(g_62, l_432)))) ^ 0UL) ^ ((g_434 = l_433) == (void*)0));

            ;
            (*l_421) = &g_43;

            ;
        }
        else
        {
            char l_446 = 0x40L;
            unsigned char *l_447 = (void*)0;
            unsigned char *l_448 = &g_108;
            int *l_463 = (void*)0;
            unsigned char ***l_482 = (void*)0;
            int l_536 = (-1L);
            short **l_554 = &l_526;
            unsigned l_556 = 0xCD436E5EL;
            if (((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((*l_212), 0)), l_441)) < (safe_mul_func_int8_t_s_s(((*g_58) = (safe_sub_func_uint8_t_u_u(0UL, ((*l_448) = l_446)))), ((safe_sub_func_int32_t_s_s((*g_434), (safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((~((((0xE5L < (l_455 <= (*l_212))) >= 0x90F0L) | g_24) <= (*l_212))), l_446)) > l_446), g_105)))) >= 0L)))))
            {
                int *l_456 = (void*)0;
                const int *l_457 = &g_43;
                int l_460 = 0x2CD69ADAL;
                (*l_421) = l_456;
                g_434 = l_457;

                ;
                for (g_105 = 0; (g_105 == 33); g_105 = safe_add_func_int32_t_s_s(g_105, 5))
                {
                    (*l_421) = &l_428;

                    ;
                    (*l_421) = func_17(l_446);

                    ;
                    (**l_421) = 1L;
                    for (g_47 = 0; (g_47 != (-19)); --g_47)
                    {
                        short ****l_466 = &g_464;
                        unsigned char *l_467 = &g_108;
                        int l_468 = 0xD1E0242EL;
                        int **l_470 = &g_469;
                        (*l_421) = (void*)0;

                        ;
                        l_433 = func_12(l_463, &g_43, ((*l_467) = (~((*l_457) >= (((*l_466) = g_464) != (void*)0)))), l_468);
                        (*l_470) = ((*l_421) = g_469);
                        (*l_421) = (void*)0;
                    }

                    ;
                }

                ;
            }
            else
            {
                int l_471 = (-1L);
                unsigned short l_478 = 65535UL;
                int l_480 = 1L;
                int l_543 = 0xA21B0793L;
                (*l_421) = func_48(l_471, g_182);

                ;
                if ((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((func_2(g_100, (safe_mul_func_int16_t_s_s((*g_224), 65526UL))) & ((*g_58) < (l_471 == (+(-1L))))) || (0UL && l_471)), 65535UL)), (*g_58))))
                {
                    (*g_46) = l_478;
                    if (func_9((**l_421)))
                    {
                        int l_479 = 0xD01DD956L;
                        (*g_46) = func_39((l_480 = l_479));
                        (*l_421) = func_17((*g_434));

                        ;
                    }
                    else
                    {
                        return g_100;
                    }

                    ;
                }
                else
                {
                    int l_481 = (-9L);
                    short *l_527 = &g_62;
                    int l_537 = 0x16A5DE53L;
                    int *l_538 = (void*)0;
                    int *l_539 = (void*)0;
                    int *l_540 = &g_136;
                    if ((*g_434))
                    {
                        unsigned l_485 = 0x29CAE256L;
                        short *l_490 = &g_177;
                        int *l_491 = &g_43;
                        (*g_46) = l_481;
                        (*l_491) = (((*g_58) = func_5(g_62, (l_482 != (void*)0), ((*l_490) = (((safe_mul_func_uint8_t_u_u(l_485, ((safe_add_func_int16_t_s_s(0L, l_481)) > l_485))) & (safe_add_func_uint32_t_u_u(func_39(g_100), g_173))) >= l_485)))) & 0x53L);

                        ;
                        (*l_491) = 1L;
                    }
                    else
                    {
                        unsigned l_498 = 4294967295UL;
                        short *l_501 = &g_62;
                        unsigned *l_502 = &l_324;
                        unsigned short *l_503 = &l_478;
                        int *l_515 = &g_136;
                        (*g_46) = (*g_46);
                        (*l_421) = func_48((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((*l_212), (*g_224))), 4)), ((*l_503) = (safe_add_func_int32_t_s_s(((((*l_181) = 65535UL) ^ (((*g_58) = l_481) || (65535UL && (g_24 && ((*l_502) = func_36(l_498, func_48((safe_mul_func_uint16_t_u_u(l_498, ((*l_501) = (**g_223)))), g_290))))))) > l_498), (*g_434)))));
                        (*l_515) = ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((*l_212) <= (safe_unary_minus_func_int16_t_s((safe_mod_func_int32_t_s_s(((((*g_58) & ((*l_448) = func_39((safe_sub_func_uint32_t_u_u(((**g_223) >= (safe_add_func_int32_t_s_s(((l_481 >= (!g_108)) > func_36(l_481, ((*l_421) = func_48((**l_421), ((*l_212) || ((*l_515) = (*g_46))))))), 0x3D8D166CL))), l_480))))) <= 4294967295UL) <= (*g_58)), 1L))))), l_481)), l_478)) || (*g_46));
                    }

                    ;
                    if (l_471)
                    {
                        int *l_516 = (void*)0;
                        const int **l_533 = &l_212;
                        (*l_533) = func_12(l_516, &g_136, (func_5((safe_sub_func_uint8_t_u_u((g_47 ^ ((safe_mod_func_int32_t_s_s(((safe_add_func_int16_t_s_s(l_481, (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int16_t_s(((-2L) <= (l_526 == l_527)))), g_173)))) >= func_19(((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(l_481, g_24)), l_471)) || l_532), g_136, &g_136, &l_481)), g_105)) ^ 0x95618E55L)), g_47)), g_182, (**g_223)) < (*g_58)), (**g_223));

                        ;
                        ;
                        l_433 = l_463;
                    }
                    else
                    {
                        int *l_534 = &g_136;
                        int **l_535 = &g_469;
                        (*l_535) = ((*l_421) = l_534);

                        ;
                        ;
                        (*g_46) = l_536;
                    }

                    ;
                    ;
                    ;
                    (*l_540) = l_537;
                }

                ;
                ;
                ;
                l_543 = (*g_434);
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
        return l_427;
    }
}







static unsigned func_2(const unsigned p_3, short p_4)
{
    const unsigned *l_183 = &g_148;
    int l_194 = 0L;
    if (p_4)
    {
        unsigned *l_184 = &g_148;
        unsigned short *l_185 = &g_182;
        int l_192 = 0x3EE19FA1L;
        int *l_193 = &g_47;
        (*l_193) = ((((*l_185) = (p_3 > (!(l_183 != l_184)))) & (g_100 != 0x9911L)) > (p_3 < (((safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((~(p_4 && ((safe_mul_func_int8_t_s_s(0x94L, 0x67L)) >= l_192))) & p_3), l_192)) <= p_4), g_136)) != g_173) < 0x08D7298EL)));
    }
    else
    {
        int *l_195 = &l_194;
        (*l_195) = (g_136 != l_194);
        (*l_195) = l_194;
    }
    return g_43;
}







static unsigned func_5(unsigned short p_6, unsigned char p_7, const short p_8)
{
    int **l_161 = (void*)0;
    int **l_162 = (void*)0;
    int **l_163 = &g_46;
    short *l_176 = &g_177;
    short **l_175 = &l_176;
    short ***l_174 = &l_175;
    int *l_178 = &g_47;
    (*g_46) = p_7;
    (*l_163) = (void*)0;

    ;
    (*l_178) = (p_7 > (safe_unary_minus_func_int16_t_s(((safe_mod_func_uint32_t_u_u((0UL == (0x0BL < ((!249UL) || (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((+(g_62 = g_108)), ((safe_rshift_func_int16_t_s_s((-1L), 15)) != g_173))), (((void*)0 != l_174) != g_105)))))), p_7)) < p_8))));
    (*l_163) = (*l_163);
    return g_62;
}







static unsigned short func_9(unsigned char p_10)
{
    int *l_135 = &g_136;
    int l_143 = 0xBE97C1FBL;
    unsigned *l_146 = (void*)0;
    unsigned *l_147 = &g_148;
    const int *l_149 = &l_143;
    short *l_151 = &g_62;
    short **l_150 = &l_151;
    short ***l_152 = (void*)0;
    short ***l_153 = &l_150;
    short **l_155 = &l_151;
    short ***l_154 = &l_155;
    short ***l_156 = (void*)0;
    short **l_158 = &l_151;
    short ***l_157 = &l_158;
    l_149 = func_12(func_17(p_10), l_135, (*l_135), (safe_add_func_uint32_t_u_u((0x78FB872AL <= (safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((l_143 = (*l_135)), g_108)), p_10))), ((*l_147) = (safe_lshift_func_int16_t_s_s((g_24 && g_136), 12))))));

    ;
    ;
    (*l_157) = ((*l_154) = ((*l_153) = l_150));
    return g_148;
}







static const int * func_12(int * p_13, int * p_14, const unsigned char p_15, short p_16)
{
    return p_13;


}







static int * func_17(int p_18)
{
    const char l_29 = 0x97L;
    char *l_44 = &g_45;
    int l_71 = (-2L);
    int *l_77 = &g_47;
    short *l_126 = &g_62;
    (*l_77) = (l_71 = func_19(g_24, (safe_mod_func_int16_t_s_s((((void*)0 == &p_18) > (safe_lshift_func_int16_t_s_u(l_29, l_29))), (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((g_24 != ((safe_rshift_func_int8_t_s_s(g_24, 3)) | func_36(((*l_44) = func_39((((void*)0 == &p_18) | l_29))), g_46))) < l_71) >= p_18), l_71)), 1UL)))), &g_47, &g_47));

    ;
    for (g_62 = 0; (g_62 <= 8); g_62++)
    {
        int *l_82 = &g_43;
        for (g_45 = (-16); (g_45 >= 20); g_45++)
        {
            int **l_83 = &g_46;
            (*l_83) = l_82;
        }
        (*l_82) = (*g_46);
        if (((void*)0 != l_82))
        {
            int **l_84 = &l_82;
            (*l_84) = &g_47;

            ;
        }
        else
        {
            int *l_85 = &l_71;
            return &g_47;


        }

        ;
        (*l_82) = p_18;
    }
    for (p_18 = 0; (p_18 < 26); p_18 = safe_add_func_int32_t_s_s(p_18, 3))
    {
        const int ***l_97 = (void*)0;
        const int *l_99 = &g_100;
        const int **l_98 = &l_99;
        unsigned char *l_104 = &g_105;
        unsigned char *l_106 = (void*)0;
        unsigned char *l_107 = &g_108;
        unsigned char l_111 = 0xBFL;
        int *l_119 = &g_47;
        char l_123 = 0x24L;
        int **l_134 = &g_46;
    }
    return &g_43;


}







static int func_19(unsigned short p_20, unsigned short p_21, int * p_22, int * p_23)
{
    int * const l_72 = &g_43;
    int **l_73 = (void*)0;
    int **l_74 = (void*)0;
    int **l_75 = (void*)0;
    int **l_76 = &g_46;
    (*l_76) = l_72;

    ;
    (*g_46) = (*l_72);
    return (*g_46);
}







static const unsigned func_36(char p_37, int * p_38)
{
    unsigned char l_51 = 0UL;
    int *l_65 = &g_43;
    int **l_70 = &l_65;
    l_65 = func_48(l_51, p_37);

    ;
    (*l_70) = func_48((safe_mod_func_int16_t_s_s(p_37, (safe_add_func_int32_t_s_s((*g_46), (*p_38))))), (*l_65));
    return g_45;
}







static char func_39(unsigned char p_40)
{
    int *l_41 = (void*)0;
    int *l_42 = &g_43;
    (*l_42) = (-1L);
    return p_40;
}







static int * func_48(unsigned short p_49, unsigned short p_50)
{
    int **l_52 = &g_46;
    char *l_56 = &g_45;
    char **l_55 = &l_56;
    short *l_61 = &g_62;
    int ***l_63 = (void*)0;
    int **l_64 = &g_46;
    (*l_52) = &g_43;

    ;
    for (p_49 = (-21); (p_49 != 55); ++p_49)
    {
        g_57 = l_55;

        ;
    }


    (*g_46) = (safe_rshift_func_int16_t_s_u(((*l_61) = (**l_52)), g_43));
    l_64 = l_52;
    return (*l_64);



}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
