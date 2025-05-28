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
   unsigned char f1;
   int f2;
   unsigned f3;
   unsigned f4;
   signed f5 : 2;
   signed f6 : 3;
   int f7;
   unsigned char f8;
   unsigned f9;
};


static int g_11 = 0x91DF82D8L;
static unsigned char g_37 = 0xC2L;
static unsigned short g_39 = 0x553FL;
static int g_54 = (-1L);
static int g_57 = 0xA5FC0266L;
static int *g_59 = &g_54;
static char g_61 = 0xEEL;
static struct S0 g_108 = {0xEAB19957L,0x09L,0x197C8249L,0x4AD0BC07L,0x6CFB31DFL,-1,-0,-2L,249UL,0x27C819A8L};
static struct S0 g_117 = {-9L,251UL,0x1266FB99L,0xB7FB1DA9L,0UL,-0,-0,0xE50A8E06L,0x90L,0x4389381DL};
static struct S0 g_176 = {0x8B3B0CBDL,0x39L,0xC62CBA5FL,3UL,0x424E9327L,0,1,0x96FF316CL,0x2CL,0xD1ADB1F9L};
static unsigned short *g_192 = &g_39;
static unsigned short **g_191 = &g_192;
static unsigned char g_200 = 0UL;
static unsigned g_219 = 0x711D43F7L;
static short g_237 = (-1L);
static char *g_256 = &g_61;
static char **g_255 = &g_256;
static char g_269 = 0xC6L;
static struct S0 *g_280 = &g_176;
static char g_324 = 0x11L;
static int **g_326 = (void*)0;
static int ***g_325 = &g_326;
static short g_344 = (-1L);
static unsigned *g_370 = &g_219;
static unsigned short g_390 = 6UL;
static unsigned short ****g_415 = (void*)0;
static short **g_430 = (void*)0;
static short ***g_429 = &g_430;
static int g_465 = (-5L);



static unsigned func_1(void);
static int * func_2(int * p_3, char p_4, int * p_5, unsigned p_6, int * p_7);
static int * func_8(unsigned short p_9, int * p_10);
static int * func_12(unsigned char p_13);
static int * func_14(unsigned p_15, int p_16);
static int func_22(int * p_23);
static int * func_24(unsigned short p_25, int * p_26);
static int * func_28(short p_29, unsigned short p_30, int p_31);
static struct S0 func_42(short p_43);
static char func_46(unsigned p_47, unsigned p_48, unsigned p_49, unsigned p_50, unsigned short * p_51);
static unsigned func_1(void)
{
    unsigned l_267 = 0UL;
    char *l_268 = &g_269;
    unsigned char l_270 = 255UL;
    unsigned l_271 = 0x131C22BAL;
    int *l_272 = &g_11;
    int **l_275 = &l_272;
    struct S0 *l_276 = &g_117;
    struct S0 **l_277 = &l_276;
    struct S0 **l_278 = (void*)0;
    struct S0 **l_279 = (void*)0;
    int ***l_281 = &l_275;
    unsigned *l_305 = &g_176.f9;
    struct S0 l_317 = {0x15DC8CDDL,2UL,0x945547A3L,0x7112B941L,0xA105A60EL,0,0,-5L,0x5DL,0xDB8084ECL};
    unsigned short *l_389 = &g_390;
    int l_404 = (-2L);
    unsigned short *l_437 = &g_39;
    unsigned short *l_438 = (void*)0;
    int l_448 = 0x02E75757L;
    (*l_275) = func_2(func_8(g_11, func_12(g_11)), ((*l_268) = l_267), func_28(g_176.f2, l_267, l_270), l_271, l_272);
    g_280 = ((*l_277) = l_276);
    (*l_281) = (void*)0;
    if ((*g_59))
    {
        unsigned l_296 = 0xDEBD5EE6L;
        int **l_316 = &l_272;
        unsigned char *l_323 = &l_270;
        short *l_330 = &g_237;
        short **l_329 = &l_330;
        unsigned *l_368 = (void*)0;
        struct S0 l_379 = {-10L,0UL,4L,0x3FA97DFDL,0x01A91321L,0,1,0x223055E5L,0xFDL,0x053CD6AEL};
        for (g_176.f3 = 0; (g_176.f3 <= 53); g_176.f3 = safe_add_func_int16_t_s_s(g_176.f3, 7))
        {
            unsigned char l_302 = 248UL;
            int *l_306 = (void*)0;
            struct S0 l_318 = {1L,0x64L,0x5F3555BBL,4294967289UL,0xCAFF29AAL,1,0,0x7B5E051AL,0UL,0UL};
            if (((*g_59) = (safe_rshift_func_int16_t_s_u((-7L), (**g_191)))))
            {
                unsigned l_288 = 0UL;
                unsigned *l_289 = (void*)0;
                unsigned *l_290 = &l_267;
                char ***l_295 = (void*)0;
                (*l_272) = (((safe_sub_func_int8_t_s_s((g_117.f8 > ((((*l_290) = l_288) | (safe_rshift_func_uint8_t_u_u((g_117.f5 != ((l_295 != (void*)0) | ((&g_191 == (void*)0) > (l_288 >= (*g_256))))), g_117.f8))) || 0xBBL)), 0xCAL)) != l_288) <= l_288);
                return g_108.f0;
            }
            else
            {
                struct S0 **l_314 = &g_280;
                if (l_296)
                {
                    struct S0 *l_297 = (void*)0;
                    g_280 = l_297;
                    if ((*g_59))
                        break;
                }
                else
                {
                    unsigned short **l_311 = &g_192;
                    struct S0 ***l_315 = &l_314;
                    (*l_272) = (*g_59);
                    for (g_176.f0 = 0; (g_176.f0 < (-22)); g_176.f0 = safe_sub_func_uint8_t_u_u(g_176.f0, 9))
                    {
                        short *l_303 = &g_237;
                        int l_304 = 1L;
                        int *l_313 = &l_304;
                        (*g_59) = (&g_108 == (void*)0);
                        (*l_272) = (safe_add_func_uint8_t_u_u(func_22(func_14((g_108.f3 & ((*l_303) = l_302)), l_304)), (l_272 != l_305)));
                        l_306 = func_24((**g_191), &g_54);
                        l_313 = func_12((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((l_311 != (void*)0), 4)), (safe_unary_minus_func_uint16_t_u(0xBD55L)))));
                    }
                    (*l_315) = l_314;
                }
            }
            l_316 = ((*l_281) = &g_59);
            l_318 = l_317;
            return g_108.f8;
        }
        (**l_277) = (**l_277);
        if (((*g_59) = ((**l_316) = ((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(248UL, 4)), 4)) != (((((*l_323) = (**l_316)) > (*l_272)) == g_324) <= (*g_59))))))
        {
            char **l_336 = (void*)0;
            if ((&l_275 == g_325))
            {
                (*g_59) = (*g_59);
                for (g_176.f9 = (-22); (g_176.f9 == 60); g_176.f9 = safe_add_func_int8_t_s_s(g_176.f9, 9))
                {
                    short ***l_331 = (void*)0;
                    l_329 = l_329;
                }
            }
            else
            {
                for (l_317.f8 = 16; (l_317.f8 >= 59); ++l_317.f8)
                {
                }
            }
            for (l_317.f3 = 0; (l_317.f3 < 55); l_317.f3 = safe_add_func_uint8_t_u_u(l_317.f3, 1))
            {
                char ***l_337 = &g_255;
                (*l_337) = l_336;
            }
            (*l_316) = (*l_316);
            (*g_59) = (*g_59);
        }
        else
        {
            short *l_343 = &g_344;
            unsigned *l_345 = &g_219;
            unsigned char *l_350 = &l_317.f8;
            int l_351 = 0x2B7316A2L;
            (**l_316) = (safe_unary_minus_func_uint16_t_u((**g_191)));
            if ((safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((**l_316), (((*l_345) = (((void*)0 != (*g_255)) <= ((*l_343) = ((**l_329) = ((**l_316) > g_176.f9))))) || (safe_add_func_uint8_t_u_u(((*l_323) = 0xEBL), (safe_mod_func_uint8_t_u_u(((**l_316) ^ ((*l_350) = (**l_316))), 247UL))))))), (*l_272))))
            {
                int *l_356 = &g_57;
                unsigned **l_367 = &l_345;
                unsigned **l_369 = (void*)0;
                (*g_59) = l_351;
                if ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((&l_271 == (g_370 = ((*l_367) = func_2(l_356, (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(0xF4L, ((func_22(l_356) >= l_351) | (g_219 = (safe_add_func_uint32_t_u_u((g_200 == (((safe_sub_func_uint16_t_u_u((~(((*l_367) = &g_219) == l_368)), l_351)) && g_269) >= 4294967295UL)), l_351)))))), 1)), (*l_316), g_344, l_356)))), 7)), g_176.f4)))
                {
                    int *l_371 = &l_317.f2;
                    (**l_277) = g_117;
                    (*l_316) = (void*)0;
                    (*g_59) = (*g_59);
                    (*l_316) = l_371;
                }
                else
                {
                    int *l_372 = &l_351;
                    (*l_316) = func_2(l_372, (*l_356), &g_11, (l_351 & (**l_316)), (*l_316));
                }
                for (g_117.f9 = 0; (g_117.f9 != 41); ++g_117.f9)
                {
                    int *l_377 = &g_11;
                    for (l_317.f1 = 0; (l_317.f1 < 5); l_317.f1 = safe_add_func_int32_t_s_s(l_317.f1, 8))
                    {
                        return g_117.f6;
                    }
                    l_377 = &l_351;
                }
            }
            else
            {
                unsigned l_378 = 4294967290UL;
                return l_378;
            }
        }
        (*l_276) = l_379;
    }
    else
    {
        char l_384 = 0x0EL;
        int l_387 = (-1L);
        unsigned l_388 = 4294967286UL;
        int *l_420 = &l_387;
        int l_449 = 2L;
        short *l_468 = &g_344;
        unsigned l_469 = 0UL;
        if ((safe_add_func_int8_t_s_s(((**g_191) != (safe_mul_func_int8_t_s_s(((*g_370) < l_384), (safe_rshift_func_uint8_t_u_u(l_387, 3))))), l_388)))
        {
            unsigned short *l_391 = &g_390;
            g_59 = func_28(g_117.f2, (*g_192), ((l_389 = (*g_191)) != l_391));
            (*l_276) = (*g_280);
        }
        else
        {
            int l_403 = 0xBB1C78F1L;
            unsigned short *l_406 = &g_39;
            int *l_418 = (void*)0;
            char ***l_421 = &g_255;
            unsigned l_433 = 0UL;
            int *l_450 = &g_108.f2;
            for (g_200 = (-3); (g_200 > 12); g_200 = safe_add_func_uint32_t_u_u(g_200, 2))
            {
                (*l_277) = (void*)0;
            }
            if ((*g_59))
            {
                struct S0 **l_398 = &g_280;
                unsigned short ***l_400 = (void*)0;
                unsigned short ****l_399 = &l_400;
                int l_405 = 0x21942E4CL;
                unsigned char *l_439 = &l_317.f1;
                int *l_451 = &g_54;
                if ((safe_mod_func_int32_t_s_s(0xF8A2E917L, (*g_370))))
                {
                    unsigned l_432 = 0xDCA61D59L;
                    if (((*g_59) = ((((safe_rshift_func_int16_t_s_s(l_405, l_403)) >= 0x4B94L) & (**g_191)) ^ (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((g_117.f2 >= (safe_div_func_uint8_t_u_u(((void*)0 == g_415), g_108.f4))), g_117.f8)), 65533UL)))))
                    {
                        int **l_417 = &g_59;
                        l_405 = 3L;
                        (*g_59) = (safe_unary_minus_func_int32_t_s(((void*)0 == l_389)));
                        l_418 = ((*l_417) = &l_403);
                    }
                    else
                    {
                        int **l_419 = &l_418;
                        unsigned short l_422 = 0x6397L;
                        short *l_431 = &g_237;
                        (*l_281) = ((*g_325) = (*l_281));
                        (*l_419) = &g_57;
                        l_420 = ((*l_419) = &g_54);
                        (*l_272) = ((!((((*l_418) = ((void*)0 != l_421)) & (((((l_422 ^ ((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((g_429 == (void*)0), (l_405 && ((*l_431) = l_405)))), ((*g_256) = (l_432 >= 0x50C6L)))), (*l_272))) ^ (*g_192))) != l_405) == g_117.f8) >= 5UL) >= l_433)) > 0xB7C4L)) != g_344);
                    }
                }
                else
                {
                    int l_436 = 0x905E8A5AL;
                    for (g_117.f8 = 0; (g_117.f8 >= 57); g_117.f8++)
                    {
                        return l_436;
                    }
                    (*g_280) = (*g_280);
                }
                (*l_272) = ((((*l_399) == (void*)0) >= (-1L)) ^ (((8UL >= (((*l_439) = (~(l_437 != l_438))) == (+((*l_268) = ((**g_255) = (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((0x8F760DCFL <= (safe_add_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(6UL, (func_22(func_28((((g_108.f3 & (*l_420)) | g_324) >= 0UL), (*g_192), (*g_59))) <= l_448))) ^ 0x848AL) | l_405), l_403))) & 4UL), l_449)), l_405))))))) >= g_344) < g_324));
                l_451 = l_450;
                l_451 = &l_387;
            }
            else
            {
                int **l_452 = &l_420;
                (*l_452) = &l_403;
                return g_176.f5;
            }
            (*l_272) = (((*l_450) >= (safe_div_func_int8_t_s_s((*g_256), 1L))) < ((safe_mod_func_uint16_t_u_u(1UL, (0xBF8D893DL || ((g_108.f4 != 1UL) & (!(safe_add_func_uint16_t_u_u(func_46((safe_rshift_func_uint16_t_u_u((*l_420), ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((*l_450), 9)), 2)) && (*l_420)))), (*l_450), (*g_370), (*l_450), (*g_191)), 9L))))))) != g_465));
        }
        l_420 = func_24((safe_div_func_uint32_t_u_u(((*g_256) > func_46(g_176.f2, ((*l_305) = (*l_420)), (*g_370), (~(((*l_272) != (((*l_272) || (l_468 == l_437)) > (*g_256))) <= (**g_255))), l_438)), l_469)), &g_11);
    }
    return g_176.f8;
}







static int * func_2(int * p_3, char p_4, int * p_5, unsigned p_6, int * p_7)
{
    int **l_273 = (void*)0;
    int **l_274 = &g_59;
    (*l_274) = &g_54;
    return &g_57;
}







static int * func_8(unsigned short p_9, int * p_10)
{
    (*g_59) = (*p_10);
    for (g_108.f9 = 16; (g_108.f9 >= 7); g_108.f9 = safe_sub_func_int16_t_s_s(g_108.f9, 2))
    {
        struct S0 *l_266 = &g_117;
        (*l_266) = g_108;
        if ((*p_10))
            continue;
        if ((*g_59))
            break;
    }
    return &g_57;
}







static int * func_12(unsigned char p_13)
{
    int l_17 = 0L;
    unsigned *l_218 = &g_219;
    int l_226 = 0x4344FC8FL;
    int **l_262 = (void*)0;
    int **l_263 = &g_59;
    (*l_263) = func_14(l_17, ((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(func_22(&g_11), ((*l_218) = (&g_192 == &g_192)))), (safe_rshift_func_int16_t_s_u(g_176.f0, (safe_add_func_uint8_t_u_u(((((p_13 && (safe_lshift_func_uint16_t_u_s((l_226 = l_17), l_17))) && p_13) <= l_17) ^ p_13), l_17)))))) ^ p_13));
    return (*l_263);
}







static int * func_14(unsigned p_15, int p_16)
{
    char l_235 = 0x25L;
    struct S0 l_239 = {-8L,0x99L,0x0C7754CEL,4294967295UL,1UL,-0,-0,0x15883FB6L,249UL,4294967287UL};
    struct S0 *l_240 = &g_117;
    for (g_117.f4 = 0; (g_117.f4 > 37); g_117.f4 = safe_add_func_uint16_t_u_u(g_117.f4, 5))
    {
        int l_229 = 1L;
        unsigned char l_230 = 0x04L;
        short *l_236 = &g_237;
        int **l_238 = &g_59;
        if (l_229)
            break;
        (*l_238) = func_28(((*l_236) = func_46(p_15, l_230, g_108.f0, (((p_16 ^ ((((g_61 || (p_15 | (l_229 != p_15))) > p_15) > l_235) == p_15)) | g_176.f8) && g_108.f9), (*g_191))), l_235, g_176.f6);
    }
    (*l_240) = l_239;
    for (g_61 = 14; (g_61 >= (-4)); g_61 = safe_sub_func_int8_t_s_s(g_61, 6))
    {
        unsigned short *l_247 = &g_39;
        int l_254 = 8L;
        if ((0x40L != p_16))
        {
            int *l_243 = &g_176.f2;
            int **l_244 = &g_59;
            unsigned short *l_252 = &g_39;
            if (p_15)
                break;
            (*l_244) = l_243;
            (*l_244) = func_28(((safe_rshift_func_int16_t_s_u(p_16, 10)) && func_46((((l_247 != l_247) & (safe_sub_func_int8_t_s_s((p_15 < g_117.f9), (-1L)))) & (safe_sub_func_int32_t_s_s((*g_59), (-1L)))), g_176.f1, g_176.f0, g_176.f0, l_252)), (**g_191), g_108.f7);
        }
        else
        {
            int *l_253 = &g_57;
            char **l_257 = &g_256;
            int **l_258 = &g_59;
            struct S0 l_261 = {0x4600C221L,255UL,0xAD7C1073L,1UL,0x7B4488D3L,-0,-1,0xD8BDE85AL,0xF0L,4294967295UL};
            g_54 = ((*l_253) = 6L);
            (*l_258) = func_28((l_254 = 0xBA50L), (g_255 == l_257), l_239.f2);
            for (g_108.f8 = (-9); (g_108.f8 > 51); g_108.f8 = safe_add_func_uint16_t_u_u(g_108.f8, 4))
            {
                l_261 = g_117;
            }
        }
    }
    return &g_54;
}







static int func_22(int * p_23)
{
    int l_27 = 0x6AEBA4D3L;
    unsigned char *l_36 = &g_37;
    unsigned short *l_38 = &g_39;
    int **l_212 = &g_59;
    char *l_214 = &g_61;
    char **l_213 = &l_214;
    char ***l_215 = (void*)0;
    char ***l_216 = &l_213;
    int l_217 = (-1L);
    (*l_212) = func_24(l_27, func_28((((*l_38) = (safe_add_func_uint8_t_u_u(((*l_36) = (safe_add_func_int16_t_s_s(l_27, l_27))), (-3L)))) || 1UL), g_11, (*p_23)));
    (*l_216) = l_213;
    return l_217;
}







static int * func_24(unsigned short p_25, int * p_26)
{
    short l_52 = 0L;
    char *l_60 = &g_61;
    unsigned char l_62 = 255UL;
    struct S0 *l_110 = &g_108;
    int *l_139 = (void*)0;
    unsigned short *l_141 = &g_39;
    (*l_110) = func_42(((safe_mul_func_int8_t_s_s(((*l_60) = func_46(l_52, g_37, l_52, g_39, &g_39)), l_52)) & l_62));
    (*l_110) = (*l_110);
    for (g_108.f0 = 0; (g_108.f0 != 6); ++g_108.f0)
    {
        struct S0 **l_118 = (void*)0;
        struct S0 **l_119 = (void*)0;
        struct S0 **l_120 = &l_110;
        g_117 = g_108;
        (*l_120) = &g_117;
    }
    for (g_108.f0 = 0; (g_108.f0 == (-17)); g_108.f0 = safe_sub_func_int8_t_s_s(g_108.f0, 9))
    {
        char *l_129 = &g_61;
        int l_138 = 1L;
        short *l_140 = &l_52;
        int **l_142 = &l_139;
        short **l_164 = &l_140;
        unsigned l_206 = 4294967289UL;
        (*l_142) = func_28((safe_lshift_func_uint16_t_u_u(g_108.f0, 15)), ((safe_mod_func_int32_t_s_s(func_46(g_37, g_108.f4, (safe_sub_func_int16_t_s_s(((((l_129 != (void*)0) == (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((((*l_140) = (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_62, l_138)), (l_139 == (void*)0)))) && p_25) != p_25), 9)), g_108.f7))) < 1L) >= 4UL), 0x5059L)), l_138, l_141), 1L)) == g_117.f2), l_138);
        (*l_142) = (void*)0;
        for (g_108.f4 = 22; (g_108.f4 > 48); g_108.f4 = safe_add_func_int32_t_s_s(g_108.f4, 6))
        {
            unsigned l_145 = 0x6C56EA18L;
            unsigned short **l_189 = &l_141;
            l_145 = ((void*)0 != p_26);
            for (g_117.f0 = (-15); (g_117.f0 < (-29)); g_117.f0--)
            {
                unsigned *l_150 = (void*)0;
                unsigned *l_151 = &l_145;
                int l_152 = 0L;
                unsigned short **l_153 = &l_141;
                unsigned short *l_154 = &g_39;
                short **l_161 = &l_140;
                unsigned short ***l_190 = &l_153;
                unsigned short ***l_193 = &g_191;
                unsigned short **l_195 = &l_154;
                unsigned short ***l_194 = &l_195;
                unsigned short **l_197 = &g_192;
                unsigned short ***l_196 = &l_197;
                unsigned char *l_201 = &g_176.f8;
            }
        }
        (*l_142) = p_26;
    }
    return l_139;
}







static int * func_28(short p_29, unsigned short p_30, int p_31)
{
    int **l_40 = (void*)0;
    int *l_41 = (void*)0;
    l_41 = &g_11;
    return l_41;
}







static struct S0 func_42(short p_43)
{
    unsigned l_63 = 4294967294UL;
    (*g_59) = (l_63 = (*g_59));
    for (p_43 = (-23); (p_43 != (-20)); p_43++)
    {
        unsigned l_74 = 1UL;
        int l_75 = 0xBAE5BD57L;
        unsigned short *l_81 = &g_39;
        unsigned *l_82 = &l_74;
        int **l_83 = &g_59;
        struct S0 l_109 = {0xE7A76403L,0xC6L,-4L,0x2DD2E1BDL,0xF38C1355L,-1,-0,-1L,255UL,4294967295UL};
        (*l_83) = func_28((0x2EE8L == ((func_46(l_63, ((*l_82) = (safe_lshift_func_uint16_t_u_u(((*l_81) = (safe_mul_func_int16_t_s_s(((g_39 || (safe_mod_func_uint16_t_u_u(((+(g_37 = ((safe_mod_func_int32_t_s_s(0xC255375BL, l_74)) ^ (0UL != ((l_75 = 0xCD63L) != (safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(0xFF79L, (safe_unary_minus_func_int32_t_s(l_63)))), g_57))))))) > l_74), 0xF7F1L))) <= l_74), l_74))), l_74))), l_63, p_43, l_81) != l_63) && (-8L))), p_43, g_61);
        for (l_75 = 10; (l_75 >= 4); --l_75)
        {
            int *l_88 = &g_57;
            for (l_63 = 0; (l_63 <= 16); l_63 = safe_add_func_uint16_t_u_u(l_63, 8))
            {
                unsigned *l_100 = (void*)0;
                if ((l_63 && (~(*g_59))))
                {
                    (*l_83) = l_88;
                    if (p_43)
                        break;
                }
                else
                {
                    unsigned l_105 = 0x67A21E2CL;
                    for (g_57 = 22; (g_57 == 9); g_57--)
                    {
                        unsigned char *l_101 = &g_37;
                        int l_102 = 0x1A75C26FL;
                    }
                }
                for (g_54 = 18; (g_54 <= 7); g_54--)
                {
                    return g_108;
                }
            }
            return l_109;
        }
    }
    return g_108;
}







static char func_46(unsigned p_47, unsigned p_48, unsigned p_49, unsigned p_50, unsigned short * p_51)
{
    int *l_53 = &g_54;
    int *l_55 = (void*)0;
    int *l_56 = &g_57;
    int **l_58 = &l_53;
    (*l_56) = ((*l_53) = g_39);
    (*l_58) = &g_57;
    g_59 = (*l_58);
    return (*l_53);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_108.f0, "g_108.f0", print_hash_value);
    transparent_crc(g_108.f1, "g_108.f1", print_hash_value);
    transparent_crc(g_108.f2, "g_108.f2", print_hash_value);
    transparent_crc(g_108.f3, "g_108.f3", print_hash_value);
    transparent_crc(g_108.f4, "g_108.f4", print_hash_value);
    transparent_crc(g_108.f5, "g_108.f5", print_hash_value);
    transparent_crc(g_108.f6, "g_108.f6", print_hash_value);
    transparent_crc(g_108.f7, "g_108.f7", print_hash_value);
    transparent_crc(g_108.f8, "g_108.f8", print_hash_value);
    transparent_crc(g_108.f9, "g_108.f9", print_hash_value);
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_117.f1, "g_117.f1", print_hash_value);
    transparent_crc(g_117.f2, "g_117.f2", print_hash_value);
    transparent_crc(g_117.f3, "g_117.f3", print_hash_value);
    transparent_crc(g_117.f4, "g_117.f4", print_hash_value);
    transparent_crc(g_117.f5, "g_117.f5", print_hash_value);
    transparent_crc(g_117.f6, "g_117.f6", print_hash_value);
    transparent_crc(g_117.f7, "g_117.f7", print_hash_value);
    transparent_crc(g_117.f8, "g_117.f8", print_hash_value);
    transparent_crc(g_117.f9, "g_117.f9", print_hash_value);
    transparent_crc(g_176.f0, "g_176.f0", print_hash_value);
    transparent_crc(g_176.f1, "g_176.f1", print_hash_value);
    transparent_crc(g_176.f2, "g_176.f2", print_hash_value);
    transparent_crc(g_176.f3, "g_176.f3", print_hash_value);
    transparent_crc(g_176.f4, "g_176.f4", print_hash_value);
    transparent_crc(g_176.f5, "g_176.f5", print_hash_value);
    transparent_crc(g_176.f6, "g_176.f6", print_hash_value);
    transparent_crc(g_176.f7, "g_176.f7", print_hash_value);
    transparent_crc(g_176.f8, "g_176.f8", print_hash_value);
    transparent_crc(g_176.f9, "g_176.f9", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
